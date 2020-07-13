#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class WinnerCircleGameLightsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "WinnerCircleGameLightsController"));
	}

	template <typename T = uintptr_t> T& LightsRoot() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& DefaultLight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitLightRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameObjectPathFromMapId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(WinnerCircleGameLightsController*))(Il2CppBase() + 0x2A32430))(this);
	}
	template <typename T = void> T InitLightRoot() {
		return ((T (*)(WinnerCircleGameLightsController*))(Il2CppBase() + 0x2A324D4))(this);
	}
	template <typename T = Il2CppString*> T GetGameObjectPathFromMapId(int32_t mapId) {
		return ((T (*)(WinnerCircleGameLightsController*, int32_t))(Il2CppBase() + 0x2A32F44))(this, mapId);
	}

};

}
