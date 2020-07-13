#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class Directory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "Directory"));
	}


	template <typename T = uintptr_t> static T CreateDirectory(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FEDF4C))(0, path);
	}
	template <typename T = uintptr_t> static T CreateDirectoriesInternal(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FEE2A4))(0, path);
	}
	template <typename T = void> static T Delete(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FEF1B0))(0, path);
	}
	template <typename T = void> static T RecursiveDelete(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FEF704))(0, path);
	}
	template <typename T = void> static T Delete_1(Il2CppString* path, bool recursive) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x3FEFE90))(0, path, recursive);
	}
	template <typename T = bool> static T Exists(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FF00BC))(0, path);
	}
	template <typename T = Il2CppString*> static T GetCurrentDirectory() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FF0290))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetDirectories(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FEF8B8))(0, path);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetDirectories_1(Il2CppString* path, Il2CppString* searchPattern) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3FF0530))(0, path, searchPattern);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetFiles(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FEF950))(0, path);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetFiles_1(Il2CppString* path, Il2CppString* searchPattern) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3FF0CA0))(0, path, searchPattern);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetFiles_2(Il2CppString* path, Il2CppString* searchPattern, uintptr_t searchOption) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FF0CC4))(0, path, searchPattern, searchOption);
	}
	template <typename T = void> static T GetFilesRecurse(Il2CppString* path, Il2CppString* searchPattern, uintptr_t all) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FF0E38))(0, path, searchPattern, all);
	}
	template <typename T = void> static T CheckPathExceptions(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FEFEC0))(0, path);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetFileSystemEntries(Il2CppString* path, Il2CppString* searchPattern, uintptr_t mask, uintptr_t attrs) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FF0554))(0, path, searchPattern, mask, attrs);
	}

};

}
