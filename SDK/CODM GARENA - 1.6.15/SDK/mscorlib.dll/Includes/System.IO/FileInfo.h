#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class FileInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "FileInfo"));
	}

	template <typename T = bool> T& exists() {
		return *(T*)((uintptr_t)this + 0x41);
	}

	template <typename T = void> T InternalRefresh() {
		return ((T (*)(FileInfo*))(Il2CppBase() + 0x3FF6614))(this);
	}
	template <typename T = bool> T get_Exists() {
		return ((T (*)(FileInfo*))(Il2CppBase() + 0x3FF6630))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(FileInfo*))(Il2CppBase() + 0x3FF671C))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(FileInfo*))(Il2CppBase() + 0x3FF67C0))(this);
	}
	template <typename T = uintptr_t> T CreateText() {
		return ((T (*)(FileInfo*))(Il2CppBase() + 0x3FF6900))(this);
	}
	template <typename T = uintptr_t> T AppendText() {
		return ((T (*)(FileInfo*))(Il2CppBase() + 0x3FF6A90))(this);
	}
	template <typename T = uintptr_t> T Open(uintptr_t mode, uintptr_t access) {
		return ((T (*)(FileInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FF69B0))(this, mode, access);
	}
	template <typename T = uintptr_t> T Open_1(uintptr_t mode, uintptr_t access, uintptr_t share) {
		return ((T (*)(FileInfo*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FF6B40))(this, mode, access, share);
	}
	template <typename T = void> T Delete() {
		return ((T (*)(FileInfo*))(Il2CppBase() + 0x3FF6C0C))(this);
	}
	template <typename T = uintptr_t> T CopyTo(Il2CppString* destFileName, bool overwrite) {
		return ((T (*)(FileInfo*, Il2CppString*, bool))(Il2CppBase() + 0x3FF6E5C))(this, destFileName, overwrite);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FileInfo*))(Il2CppBase() + 0x3FF7028))(this);
	}

};

}
