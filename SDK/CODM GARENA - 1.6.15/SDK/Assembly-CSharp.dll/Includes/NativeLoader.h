#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NativeLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NativeLoader"));
	}

	template <typename T = uintptr_t> static T& nativeLibraryPtr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadedPtr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Display() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadDll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnLoadDll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T GetLoadedPtr() {
		return ((T (*)(void *))(Il2CppBase() + 0x331D5E0))(0);
	}
	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x331D840))(0);
	}
	template <typename T = void> static T Display() {
		return ((T (*)(void *))(Il2CppBase() + 0x331D964))(0);
	}
	template <typename T = void> static T LoadDll(Il2CppString* dllname) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x331DB18))(0, dllname);
	}
	template <typename T = void> static T UnLoadDll() {
		return ((T (*)(void *))(Il2CppBase() + 0x331DBE0))(0);
	}

};

}
