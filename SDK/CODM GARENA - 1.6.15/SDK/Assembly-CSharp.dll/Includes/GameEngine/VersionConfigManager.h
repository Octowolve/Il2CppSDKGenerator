#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VersionConfigManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VersionConfigManager"));
	}

	template <typename T = Il2CppString*> static T& RESOURCE_VERSION_FILE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kStringInvalidVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProgramVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInnerResourceVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExternalResourceVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetResourceVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetResourcesVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppString*> static T GetProgramVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E8E22C))(0);
	}
	template <typename T = Il2CppString*> static T GetInnerResourceVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E8E37C))(0);
	}
	template <typename T = Il2CppString*> static T GetExternalResourceVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E8E4CC))(0);
	}
	template <typename T = Il2CppString*> static T GetResourceVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E8E62C))(0);
	}
	template <typename T = void> static T SetResourcesVersion(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2E8E888))(0, str);
	}

};

}
