#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRReviveAirplaneCdHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRReviveAirplaneCdHUD"));
	}

	template <typename T = uintptr_t> T& ShowRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& CountDownTxt() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_HasSend() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckOtherUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRReviveAirplaneCdHUD*))(Il2CppBase() + 0x2DAE1BC))(this);
	}
	template <typename T = uintptr_t> T get_BroadcastTipHUD() {
		return ((T (*)(BRReviveAirplaneCdHUD*))(Il2CppBase() + 0x2DAE1C4))(this);
	}
	template <typename T = uintptr_t> T get_ReviveSpectatorHUD() {
		return ((T (*)(BRReviveAirplaneCdHUD*))(Il2CppBase() + 0x2DAE210))(this);
	}
	template <typename T = bool> T CheckOtherUI() {
		return ((T (*)(BRReviveAirplaneCdHUD*))(Il2CppBase() + 0x2DAE25C))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRReviveAirplaneCdHUD*, float))(Il2CppBase() + 0x2DAE4BC))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRReviveAirplaneCdHUD*, float))(Il2CppBase() + 0x2DAE8FC))(this, P0);
	}

};

}
