#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PathUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PathUtil"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_FormatPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFileNameWithoutExtension() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFileName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFilePathWithoutExtension() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFileExtension() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDirectoryName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ABNameNormalize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> static T FormatPath(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F00E18))(0, path);
	}
	template <typename T = Il2CppString*> static T GetFileNameWithoutExtension(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3EEDB14))(0, path);
	}
	template <typename T = Il2CppString*> static T GetFileName(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F00F70))(0, path);
	}
	template <typename T = Il2CppString*> static T GetFilePathWithoutExtension(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F01074))(0, path);
	}
	template <typename T = Il2CppString*> static T GetFileExtension(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F0114C))(0, path);
	}
	template <typename T = Il2CppString*> static T GetDirectoryName(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3EEDBF4))(0, path);
	}
	template <typename T = Il2CppString*> static T ABNameNormalize(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F012F0))(0, path);
	}

};

}
