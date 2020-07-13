#ifndef SYMBOL_FINDER
#define SYMBOL_FINDER

#include <unistd.h>
void GetSymbolAddress(const char *lib, const char *name, uintptr_t *result);
void GetLibBaseAddress(const char *lib, uintptr_t *result);
#endif
