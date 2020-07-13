#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlatformOptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlatformOptions"));
	}

	template <typename T = bool> T& overridePath() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& pathLocation() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& path() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsModified() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKeyServerURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKeyServerAuthToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDecryptionKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T IsModified() {
		return ((T (*)(PlatformOptions*))(Il2CppBase() + 0x4120954))(this);
	}
	template <typename T = Il2CppString*> T GetKeyServerURL() {
		return ((T (*)(PlatformOptions*))(Il2CppBase() + 0x4120E74))(this);
	}
	template <typename T = Il2CppString*> T GetKeyServerAuthToken() {
		return ((T (*)(PlatformOptions*))(Il2CppBase() + 0x4120F18))(this);
	}
	template <typename T = Il2CppString*> T GetDecryptionKey() {
		return ((T (*)(PlatformOptions*))(Il2CppBase() + 0x4120FBC))(this);
	}

};

}
