#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class FileSystemInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "FileSystemInfo"));
	}

	template <typename T = Il2CppString*> T& FullPath() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& OriginalPath() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& stat() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& valid() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(FileSystemInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FFCCAC))(this, info, context);
	}
	template <typename T = bool> T get_Exists() {
		return ((T (*)(FileSystemInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(FileSystemInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_FullName() {
		return ((T (*)(FileSystemInfo*))(Il2CppBase() + 0x3FFCE00))(this);
	}
	template <typename T = uintptr_t> T get_LastWriteTime() {
		return ((T (*)(FileSystemInfo*))(Il2CppBase() + 0x3FFCE08))(this);
	}
	template <typename T = uintptr_t> T get_LastWriteTimeUtc() {
		return ((T (*)(FileSystemInfo*))(Il2CppBase() + 0x3FFCEDC))(this);
	}
	template <typename T = void> T Delete() {
		return ((T (*)(FileSystemInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(FileSystemInfo*))(Il2CppBase() + 0x3FFCF38))(this);
	}
	template <typename T = void> T Refresh_1(bool force) {
		return ((T (*)(FileSystemInfo*, bool))(Il2CppBase() + 0x3FF1E44))(this, force);
	}
	template <typename T = void> T InternalRefresh() {
		return ((T (*)(FileSystemInfo*))(Il2CppBase() + 0x3FFCF40))(this);
	}
	template <typename T = void> T CheckPath(Il2CppString* path) {
		return ((T (*)(FileSystemInfo*, Il2CppString*))(Il2CppBase() + 0x3FF1550))(this, path);
	}

};

}
