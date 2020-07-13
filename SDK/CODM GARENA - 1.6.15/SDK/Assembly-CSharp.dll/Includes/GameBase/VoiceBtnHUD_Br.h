#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VoiceBtnHUDBr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VoiceBtnHUD_Br"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& playerList() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = float> T& mVoiceUpdatePositionTime() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& mUpdateTeamInfoTimer() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& BackgroundSprite() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& BackgroundTipObj() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = int32_t> T& BackgroundOriginHeight() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BackgroundDeltaHeight() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = int32_t> T& lastX() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = int32_t> T& lastZ() {
		return *(T*)((uintptr_t)this + 0x15C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SortFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTeamMate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTeamUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T CheckNeedClickTip() {
		return ((T (*)(VoiceBtnHUDBr*))(Il2CppBase() + 0x27E1444))(this);
	}
	template <typename T = void> T SetClickTip(bool show) {
		return ((T (*)(VoiceBtnHUDBr*, bool))(Il2CppBase() + 0x27E1558))(this, show);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(VoiceBtnHUDBr*, float))(Il2CppBase() + 0x27E1664))(this, dt);
	}
	template <typename T = void> T UpdateTeamInfo() {
		return ((T (*)(VoiceBtnHUDBr*))(Il2CppBase() + 0x27E1D54))(this);
	}
	template <typename T = int32_t> T SortFunc(uintptr_t a, uintptr_t b) {
		return ((T (*)(VoiceBtnHUDBr*, uintptr_t, uintptr_t))(Il2CppBase() + 0x27E2648))(this, a, b);
	}
	template <typename T = bool> T IsTeamMate(uintptr_t pi) {
		return ((T (*)(VoiceBtnHUDBr*, uintptr_t))(Il2CppBase() + 0x27E2190))(this, pi);
	}
	template <typename T = void> T UpdateTeamUI() {
		return ((T (*)(VoiceBtnHUDBr*))(Il2CppBase() + 0x27E238C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckNeedClickTip() {
		return ((T (*)(VoiceBtnHUDBr*))(Il2CppBase() + 0x27E2740))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetClickTip(bool P0) {
		return ((T (*)(VoiceBtnHUDBr*, bool))(Il2CppBase() + 0x27E27E4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(VoiceBtnHUDBr*, float))(Il2CppBase() + 0x27E2888))(this, P0);
	}

};

}
