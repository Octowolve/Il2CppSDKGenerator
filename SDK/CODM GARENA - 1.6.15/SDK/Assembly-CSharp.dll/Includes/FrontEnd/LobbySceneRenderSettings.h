#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbySceneRenderSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbySceneRenderSettings"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFogSettingConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T Reset(uintptr_t lobbySceneType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36A79C8))(0, lobbySceneType);
	}
	template <typename T = uintptr_t> static T GetFogSettingConfig(uintptr_t lobbySceneType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36A7B70))(0, lobbySceneType);
	}

};

}
