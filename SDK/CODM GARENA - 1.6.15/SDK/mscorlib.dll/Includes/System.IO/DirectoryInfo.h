#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class DirectoryInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "DirectoryInfo"));
	}

	template <typename T = Il2CppString*> T& current() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& parent() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(DirectoryInfo*))(Il2CppBase() + 0x3FF1940))(this);
	}
	template <typename T = bool> T get_Exists() {
		return ((T (*)(DirectoryInfo*))(Il2CppBase() + 0x3FEE620))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(DirectoryInfo*))(Il2CppBase() + 0x3FF1F48))(this);
	}
	template <typename T = uintptr_t> T get_Parent() {
		return ((T (*)(DirectoryInfo*))(Il2CppBase() + 0x3FEE564))(this);
	}
	template <typename T = void> T Create() {
		return ((T (*)(DirectoryInfo*))(Il2CppBase() + 0x3FEE6FC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFiles() {
		return ((T (*)(DirectoryInfo*))(Il2CppBase() + 0x3FF1F50))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFiles_1(Il2CppString* searchPattern) {
		return ((T (*)(DirectoryInfo*, Il2CppString*))(Il2CppBase() + 0x3FF1FD4))(this, searchPattern);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDirectories() {
		return ((T (*)(DirectoryInfo*))(Il2CppBase() + 0x3FF22DC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDirectories_1(Il2CppString* searchPattern) {
		return ((T (*)(DirectoryInfo*, Il2CppString*))(Il2CppBase() + 0x3FF2360))(this, searchPattern);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFileSystemInfos(Il2CppString* searchPattern) {
		return ((T (*)(DirectoryInfo*, Il2CppString*))(Il2CppBase() + 0x3FF254C))(this, searchPattern);
	}
	template <typename T = void> T Delete() {
		return ((T (*)(DirectoryInfo*))(Il2CppBase() + 0x3FF2880))(this);
	}
	template <typename T = void> T Delete_1(bool recursive) {
		return ((T (*)(DirectoryInfo*, bool))(Il2CppBase() + 0x3FF28A0))(this, recursive);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DirectoryInfo*))(Il2CppBase() + 0x3FF28AC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDirectories_2(Il2CppString* searchPattern, uintptr_t searchOption) {
		return ((T (*)(DirectoryInfo*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FF28B4))(this, searchPattern, searchOption);
	}
	template <typename T = int32_t> T GetFilesSubdirs(uintptr_t l, Il2CppString* pattern) {
		return ((T (*)(DirectoryInfo*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3FF2D60))(this, l, pattern);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFiles_2(Il2CppString* searchPattern, uintptr_t searchOption) {
		return ((T (*)(DirectoryInfo*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FF2F08))(this, searchPattern, searchOption);
	}

};

}
