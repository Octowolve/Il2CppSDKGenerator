#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PVEPawnTopName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PVEPawnTopName"));
	}

	template <typename T = uintptr_t> T& DyingUIObject() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& HelpEffect() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& showDuration() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& DyingStringLable() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& DyingString() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& HelpEffectStartTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init(uintptr_t owner) {
		return ((T (*)(PVEPawnTopName*, uintptr_t))(Il2CppBase() + 0x2DCB2F0))(this, owner);
	}
	template <typename T = void> T UpdateUI(float dt, uintptr_t worldCam, uintptr_t uiCam) {
		return ((T (*)(PVEPawnTopName*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DCB73C))(this, dt, worldCam, uiCam);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(PVEPawnTopName*, uintptr_t))(Il2CppBase() + 0x2DCBB7C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateUI(float P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(PVEPawnTopName*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DCBB80))(this, P0, P1, P2);
	}

};

}
