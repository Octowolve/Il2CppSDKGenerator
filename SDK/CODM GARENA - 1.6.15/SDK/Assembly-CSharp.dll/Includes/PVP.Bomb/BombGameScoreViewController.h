#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Bomb {

class BombGameScoreViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Bomb", "BombGameScoreViewController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBombHasDefused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBombHasPlanted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCarryBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifySideChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBombUsing_OB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBombInterrupt_OB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameHUDLayoutChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundCountChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BombGameScoreViewController*))(Il2CppBase() + 0x40853C8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BombGameScoreViewController*))(Il2CppBase() + 0x4085488))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BombGameScoreViewController*))(Il2CppBase() + 0x4085674))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BombGameScoreViewController*))(Il2CppBase() + 0x40859CC))(this);
	}
	template <typename T = void> T OnRoundStarted(uintptr_t msg) {
		return ((T (*)(BombGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x4085B00))(this, msg);
	}
	template <typename T = void> T OnNotifyBombHasDefused(uintptr_t msg) {
		return ((T (*)(BombGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x4085C98))(this, msg);
	}
	template <typename T = void> T OnNotifyBombHasPlanted(uintptr_t msg) {
		return ((T (*)(BombGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x4085DD8))(this, msg);
	}
	template <typename T = void> T OnNotifyCarryBomb(uintptr_t msg) {
		return ((T (*)(BombGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x4085FD4))(this, msg);
	}
	template <typename T = void> T OnNotifySideChanged(uintptr_t msg) {
		return ((T (*)(BombGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x4086150))(this, msg);
	}
	template <typename T = void> T OnNotifyBombUsing_OB(uintptr_t msg) {
		return ((T (*)(BombGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x4086220))(this, msg);
	}
	template <typename T = void> T OnNotifyBombInterrupt_OB(uintptr_t msg) {
		return ((T (*)(BombGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x4086418))(this, msg);
	}
	template <typename T = void> T OnGameHUDLayoutChanged() {
		return ((T (*)(BombGameScoreViewController*))(Il2CppBase() + 0x40864E4))(this);
	}
	template <typename T = void> T OnRoundCountChanged(uintptr_t msg) {
		return ((T (*)(BombGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x4086634))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BombGameScoreViewController*))(Il2CppBase() + 0x4086750))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BombGameScoreViewController*))(Il2CppBase() + 0x4086758))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BombGameScoreViewController*))(Il2CppBase() + 0x4086760))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BombGameScoreViewController*))(Il2CppBase() + 0x4086768))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStarted(uintptr_t P0) {
		return ((T (*)(BombGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x4086770))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnGameHUDLayoutChanged() {
		return ((T (*)(BombGameScoreViewController*))(Il2CppBase() + 0x4086778))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundCountChanged(uintptr_t P0) {
		return ((T (*)(BombGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x4086780))(this, P0);
	}

};

}
