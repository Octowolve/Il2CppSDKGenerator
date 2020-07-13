#include <stdio.h>
#include <elf.h>
#include <malloc.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/mman.h>
#include "../../Includes.h"
#include "SymbolFinder.h"

#define LOG_TAG "SymbolFinder"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN,LOG_TAG,__VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

/* memory map for libraries */
#define MAX_NAME_LEN 256
#define MEMORY_ONLY  "[memory]"
struct mm {
    char name[MAX_NAME_LEN];
    uintptr_t start, end;
};

typedef struct symtab *symtab_t;
struct symlist {
    Elf32_Sym *sym; /* symbols */
    char *str; /* symbol strings */
    unsigned num; /* number of symbols */
};
struct symtab {
    struct symlist *st; /* "static" symbols */
    struct symlist *dyn; /* dynamic symbols */
};

static void *xmalloc(size_t size) {
    void *p;
    p = malloc(size);
    if (!p) {
        printf("Out of memory\n");
        exit(1);
    }
    return p;
}

static int my_pread(int fd, void *buf, size_t count, off_t offset) {
    lseek(fd, offset, SEEK_SET);
    return read(fd, buf, count);
}

static struct symlist *get_syms(int fd, Elf32_Shdr *symh, Elf32_Shdr *strh) {
    struct symlist *sl, *ret;
    int rv;

    ret = NULL;
    sl = (struct symlist *)xmalloc(sizeof(struct symlist));
    sl->str = NULL;
    sl->sym = NULL;

    /* sanity */
    if (symh->sh_size % sizeof(Elf32_Sym)) {
        //printf("elf_error\n");
        goto out;
    }

    /* symbol table */
    sl->num = symh->sh_size / sizeof(Elf32_Sym);
    sl->sym = (Elf32_Sym *)xmalloc(symh->sh_size);
    rv = my_pread(fd, sl->sym, symh->sh_size, symh->sh_offset);
    if (0 > rv) {
        //perror("read");
        goto out;
    }
    if (rv != symh->sh_size) {
        //printf("elf error\n");
        goto out;
    }

    /* string table */
    sl->str = (char *)xmalloc(strh->sh_size);
    rv = my_pread(fd, sl->str, strh->sh_size, strh->sh_offset);
    if (0 > rv) {
        //perror("read");
        goto out;
    }
    if (rv != strh->sh_size) {
        //printf("elf error");
        goto out;
    }

    ret = sl;
    out:
    return ret;
}

static int do_load(int fd, symtab_t symtab) {
    int rv;
    size_t size;
    Elf32_Ehdr ehdr;
    Elf32_Shdr *shdr = NULL, *p;
    Elf32_Shdr *dynsymh, *dynstrh;
    Elf32_Shdr *symh, *strh;
    char *shstrtab = NULL;
    int i;
    int ret = -1;

    /* elf header */
    rv = read(fd, &ehdr, sizeof(ehdr));
    if (0 > rv) {
        LOGD("read\n");
        goto out;
    }
    if (rv != sizeof(ehdr)) {
        LOGD("elf error 1\n");
        goto out;
    }
    if (strncmp((const char *)ELFMAG, (const char *)ehdr.e_ident, SELFMAG)) { /* sanity */
        LOGD("not an elf\n");
        goto out;
    }
    if (sizeof(Elf32_Shdr) != ehdr.e_shentsize) { /* sanity */
        LOGD("elf error 2\n");
        goto out;
    }

    /* section header table */
    size = ehdr.e_shentsize * ehdr.e_shnum;
    shdr = (Elf32_Shdr *)xmalloc(size);
    rv = my_pread(fd, shdr, size, ehdr.e_shoff);
    if (0 > rv) {
        LOGD("read\n");
        goto out;
    }
    if (rv != size) {
        LOGD("elf error 3 %d %d\n", rv, size);
        goto out;
    }

    /* section header string table */
    size = shdr[ehdr.e_shstrndx].sh_size;
    shstrtab = (char *)xmalloc(size);
    rv = my_pread(fd, shstrtab, size, shdr[ehdr.e_shstrndx].sh_offset);
    if (0 > rv) {
        LOGD("read\n");
        goto out;
    }
    if (rv != size) {
        LOGD("elf error 4 %d %d\n", rv, size);
        goto out;
    }

    /* symbol table headers */
    symh = dynsymh = NULL;
    strh = dynstrh = NULL;
    for (i = 0, p = shdr; i < ehdr.e_shnum; i++, p++)
        if (SHT_SYMTAB == p->sh_type) {
            if (symh) {
                LOGD("too many symbol tables\n");
                goto out;
            }
            symh = p;
        } else if (SHT_DYNSYM == p->sh_type) {
            if (dynsymh) {
                LOGD("too many symbol tables\n");
                goto out;
            }
            dynsymh = p;
        } else if (SHT_STRTAB == p->sh_type && !strncmp(shstrtab + p->sh_name, ".strtab", 7)) {
            if (strh) {
                LOGD("too many string tables\n");
                goto out;
            }
            strh = p;
        } else if (SHT_STRTAB == p->sh_type && !strncmp(shstrtab + p->sh_name, ".dynstr", 7)) {
            if (dynstrh) {
                LOGD("too many string tables\n");
                goto out;
            }
            dynstrh = p;
        }
    /* sanity checks */
    if ((!dynsymh && dynstrh) || (dynsymh && !dynstrh)) {
        LOGD("bad dynamic symbol table\n");
        goto out;
    }
    if ((!symh && strh) || (symh && !strh)) {
        LOGD("bad symbol table\n");
        goto out;
    }
    if (!dynsymh && !symh) {
        LOGD("no symbol table\n");
        goto out;
    }

    /* symbol tables */
    if (dynsymh)
        symtab->dyn = get_syms(fd, dynsymh, dynstrh);
    if (symh)
        symtab->st = get_syms(fd, symh, strh);
    ret = 0;
    out:
    free(shstrtab);
    free(shdr);
    return ret;
}

static symtab_t load_symtab(char *filename) {
    int fd;
    symtab_t symtab;

    symtab = (symtab_t)xmalloc(sizeof(*symtab));
    memset(symtab, 0, sizeof(*symtab));

    fd = open(filename, O_RDONLY);
    if (0 > fd) {
        LOGE("%s open\n", __func__);
        return NULL;
    }
    if (0 > do_load(fd, symtab)) {
        LOGE("Error ELF parsing %s\n", filename);
        free(symtab);
        symtab = NULL;
    }
    close(fd);
    return symtab;
}

static int load_memmap(pid_t pid, struct mm *mm, int *nmmp) {
    size_t buf_size = 0xFFFFFF;
    char *p_buf = (char *)malloc(buf_size); // increase this if needed for larger "maps"
    char name[MAX_NAME_LEN] = {0};
    char *p;
    uintptr_t start, end;
    struct mm *m;
    int nmm = 0;
    int fd, rv;
    int i;

    sprintf(p_buf, "/proc/%d/maps", pid);
    fd = open(p_buf, O_RDONLY);
    if (0 > fd) {
        LOGE("Can't open %s for reading\n", p_buf);
        free(p_buf);
        return -1;
    }

    /* Zero to ensure data is null terminated */
    memset(p_buf, 0, buf_size);

    p = p_buf;
    while (1) {
        rv = read(fd, p, buf_size - (p - p_buf));
        if (0 > rv) {
            LOGE("%s read", __FUNCTION__);
            free(p_buf);
            return -1;
        }
        if (0 == rv)
            break;
        p += rv;
        if (p - p_buf >= buf_size) {
            LOGE("Too many memory mapping\n");
            free(p_buf);
            return -1;
        }
    }
    close(fd);

    p = strtok(p_buf, "\n");
    m = mm;
    while (p) {
        /* parse current map line */
        rv = sscanf(p, "%08lx-%08lx %*s %*s %*s %*s %s\n", &start, &end, name);

        p = strtok(NULL, "\n");

        if (rv == 2) {
            m = &mm[nmm++];
            m->start = start;
            m->end = end;
            memcpy(m->name, MEMORY_ONLY, sizeof(MEMORY_ONLY));
            continue;
        }

        /* search backward for other mapping with same name */
        for (i = nmm - 1; i >= 0; i--) {
            m = &mm[i];
            if (!strcmp(m->name, name))
                break;
        }

        if (i >= 0) {
            if (start < m->start)
                m->start = start;
            if (end > m->end)
                m->end = end;
        } else {
            /* new entry */
            m = &mm[nmm++];
            m->start = start;
            m->end = end;
            memcpy(m->name, name, strlen(name));
        }
    }

    *nmmp = nmm;
    free(p_buf);
    return 0;
}

/* Find libc in MM, storing no more than LEN-1 chars of
 its name in NAME and set START to its starting
 address.  If libc cannot be found return -1 and
 leave NAME and START untouched.  Otherwise return 0
 and null-terminated NAME. */
static int find_libname(const char *libn, char *name, int len, uintptr_t *start, struct mm *mm, int nmm) {
    int i;
    struct mm *m;
    char *p;
    for (i = 0, m = mm; i < nmm; i++, m++) {
        if(!strcmp(libn, m->name))
        {
            break;
        }
    }
    if (i >= nmm)
        /* not found */
        return -1;

    *start = m->start;
    strncpy(name, m->name, len);
    if (strlen(m->name) >= len)
        name[len - 1] = '\0';

    mprotect((void *)m->start, m->end - m->start, PROT_READ | PROT_WRITE | PROT_EXEC);
    return 0;
}

static int lookup2(struct symlist *sl, unsigned char type, char *name, uintptr_t *val) {
    Elf32_Sym *p;
    int len;
    int i;

    len = strlen(name);
    for (i = 0, p = sl->sym; i < sl->num; i++, p++) {
        //LOGD("name: %s %x\n", sl->str+p->st_name, p->st_value)
        if (!strncmp(sl->str + p->st_name, name, len) && *(sl->str + p->st_name + len) == 0 && ELF32_ST_TYPE(p->st_info) == type) {
            //if (p->st_value != 0) {
            *val = p->st_value;
            return 0;
            //}
        }
    }
    return -1;
}

static int lookup_sym(symtab_t s, unsigned char type, char *name, uintptr_t *val) {
    if (s->dyn && !lookup2(s->dyn, type, name, val))
        return 0;
    if (s->st && !lookup2(s->st, type, name, val))
        return 0;
    return -1;
}

static int lookup_func_sym(symtab_t s, char *name, uintptr_t *val) {
    return lookup_sym(s, STT_FUNC, name, val);
}

void GetLibBaseAddress(const char *lib, uintptr_t *result) {
    struct mm mm[1000] = {0};
    int nmm = 0;
    char libname[1024] = {0};
    symtab_t s;

    uintptr_t addr = 0;

    if (load_memmap(getpid(), mm, &nmm)) {
        LOGD("Failed to read mmap!\n");
        return;
    }
    if (find_libname(lib, libname, sizeof(libname), &addr, mm, nmm)) {
        LOGD("Cannot find lib %s!\n", libname);
        return;
    }
    if(result)
    {
        *result = addr;
    }
}

void GetSymbolAddress(const char *lib, const char *name, uintptr_t *result) {
    struct mm mm[0xFFFFF] = {0};
    int nmm = 0;
    char libname[1024] = {0};
    symtab_t s;

    uintptr_t base = 0, addr = 0;

    if (load_memmap(getpid(), mm, &nmm)) {
        LOGD("Failed to read mmap!\n");
        return;
    }
    if (find_libname(lib, libname, sizeof(libname), &base, mm, nmm)) {
        LOGD("Cannot find lib %s!\n", lib);
        return;
    }
    s = load_symtab(libname);
    if (!s) {
        LOGD("Cannot read symbol table\n");
        return;
    }
    if (lookup_func_sym(s, (char *)name, &addr)) {
        LOGD("Cannot find function %s!\n", name);
        return;
    }

    if(result)
        *result = base + addr;
}