#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.MlkTFGame {

class MlkTFGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.MlkTFGame", "MlkTFGameUIScene"));
	}

	template <typename T = uintptr_t> T& m_WeaponMaxLevelNotifyHUD() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowLoadoutPvpGameView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSwitchBagBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableSelectBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifySomeOneMaxLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeadReplayEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T OnNotifyShowLoadoutPvpGameView(uintptr_t msg) {
		return ((T (*)(MlkTFGameUIScene*, uintptr_t))(Il2CppBase() + 0x348CCC0))(this, msg);
	}
	template <typename T = void> T ShowSwitchBagBtnController() {
		return ((T (*)(MlkTFGameUIScene*))(Il2CppBase() + 0x348CD60))(this);
	}
	template <typename T = bool> T EnableSelectBag() {
		return ((T (*)(MlkTFGameUIScene*))(Il2CppBase() + 0x348CDF8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MlkTFGameUIScene*))(Il2CppBase() + 0x348CE98))(this);
	}
	template <typename T = void> T NotifySomeOneMaxLevel(bool bSameTeam, bool bLocalPlayer) {
		return ((T (*)(MlkTFGameUIScene*, bool, bool))(Il2CppBase() + 0x348BA54))(this, bSameTeam, bLocalPlayer);
	}
	template <typename T = void> T OnDeadReplayEnd(uintptr_t msg) {
		return ((T (*)(MlkTFGameUIScene*, uintptr_t))(Il2CppBase() + 0x348CFD0))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyShowLoadoutPvpGameView(uintptr_t P0) {
		return ((T (*)(MlkTFGameUIScene*, uintptr_t))(Il2CppBase() + 0x348D130))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ShowSwitchBagBtnController() {
		return ((T (*)(MlkTFGameUIScene*))(Il2CppBase() + 0x348D138))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_EnableSelectBag() {
		return ((T (*)(MlkTFGameUIScene*))(Il2CppBase() + 0x348D140))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MlkTFGameUIScene*))(Il2CppBase() + 0x348D148))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDeadReplayEnd(uintptr_t P0) {
		return ((T (*)(MlkTFGameUIScene*, uintptr_t))(Il2CppBase() + 0x348D150))(this, P0);
	}

};

}
