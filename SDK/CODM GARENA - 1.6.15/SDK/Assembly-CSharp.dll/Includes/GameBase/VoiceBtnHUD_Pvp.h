#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VoiceBtnHUDPvp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VoiceBtnHUD_Pvp"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& playerList() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = float> T& mUpdateTeamInfoTimer() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& BackgroundSprite() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& BackgroundTipObj() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> T& BackgroundOriginHeight() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BackgroundDeltaHeight() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNeedClickTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClickTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTeamInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTeamUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T CheckNeedClickTip() {
		return ((T (*)(VoiceBtnHUDPvp*))(Il2CppBase() + 0x27E29C0))(this);
	}
	template <typename T = void> T SetClickTip(bool show) {
		return ((T (*)(VoiceBtnHUDPvp*, bool))(Il2CppBase() + 0x27E2AD4))(this, show);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(VoiceBtnHUDPvp*, float))(Il2CppBase() + 0x27E2BE0))(this, dt);
	}
	template <typename T = void> T UpdateTeamInfo() {
		return ((T (*)(VoiceBtnHUDPvp*))(Il2CppBase() + 0x27E2CE0))(this);
	}
	template <typename T = void> T UpdateTeamUI() {
		return ((T (*)(VoiceBtnHUDPvp*))(Il2CppBase() + 0x27E3078))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckNeedClickTip() {
		return ((T (*)(VoiceBtnHUDPvp*))(Il2CppBase() + 0x27E3334))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetClickTip(bool P0) {
		return ((T (*)(VoiceBtnHUDPvp*, bool))(Il2CppBase() + 0x27E3338))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(VoiceBtnHUDPvp*, float))(Il2CppBase() + 0x27E333C))(this, P0);
	}

};

}
