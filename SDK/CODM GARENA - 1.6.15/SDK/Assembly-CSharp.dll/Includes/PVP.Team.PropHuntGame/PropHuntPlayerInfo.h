#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntPlayerInfo"));
	}

	template <typename T = int32_t> T& m_CurPropItemID() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& m_ServerCamp() {
		return *(T*)((uintptr_t)this + 0x314);
	}
	template <typename T = Il2CppVector3> T& m_PropItemScale() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = int32_t> T& m_BaitNum() {
		return *(T*)((uintptr_t)this + 0x324);
	}
	template <typename T = int32_t> T& m_ChangeItemNum() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = int32_t> T& m_TacticalNum() {
		return *(T*)((uintptr_t)this + 0x32C);
	}
	template <typename T = int32_t> T& m_WinBetScore() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = int32_t> T& m_BetCnt() {
		return *(T*)((uintptr_t)this + 0x334);
	}
	template <typename T = int32_t> T& m_LockState() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PlayerChooseItemInfo() {
		return *(T*)((uintptr_t)this + 0x33C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoGen_Copy_PVP_Team_PropHuntGame_PropHuntPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPropItemCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLockState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChooseItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> static T AutoGen_Copy_PVP_Team_PropHuntGame_PropHuntPlayerInfo(uintptr_t src, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x34B0A0C))(0, src, dest);
	}
	template <typename T = int32_t> T get_CurPropItemID() {
		return ((T (*)(PropHuntPlayerInfo*))(Il2CppBase() + 0x34A9C2C))(this);
	}
	template <typename T = void> T set_CurPropItemID(int32_t value) {
		return ((T (*)(PropHuntPlayerInfo*, int32_t))(Il2CppBase() + 0x349E080))(this, value);
	}
	template <typename T = void> T set_ServerCamp(uintptr_t value) {
		return ((T (*)(PropHuntPlayerInfo*, uintptr_t))(Il2CppBase() + 0x3499460))(this, value);
	}
	template <typename T = uintptr_t> T get_ServerCamp() {
		return ((T (*)(PropHuntPlayerInfo*))(Il2CppBase() + 0x34B0EB8))(this);
	}
	template <typename T = bool> T get_IsPropItemPawn() {
		return ((T (*)(PropHuntPlayerInfo*))(Il2CppBase() + 0x34A41AC))(this);
	}
	template <typename T = bool> static T IsPropItemCamp(uintptr_t camp) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3492758))(0, camp);
	}
	template <typename T = Il2CppVector3> T get_PropItemScale() {
		return ((T (*)(PropHuntPlayerInfo*))(Il2CppBase() + 0x34AC508))(this);
	}
	template <typename T = void> T set_PropItemScale(Il2CppVector3 value) {
		return ((T (*)(PropHuntPlayerInfo*, Il2CppVector3))(Il2CppBase() + 0x349E088))(this, value);
	}
	template <typename T = int32_t> T get_BaitNum() {
		return ((T (*)(PropHuntPlayerInfo*))(Il2CppBase() + 0x349448C))(this);
	}
	template <typename T = void> T set_BaitNum(int32_t value) {
		return ((T (*)(PropHuntPlayerInfo*, int32_t))(Il2CppBase() + 0x34A114C))(this, value);
	}
	template <typename T = int32_t> T get_ChangeItemNum() {
		return ((T (*)(PropHuntPlayerInfo*))(Il2CppBase() + 0x3493190))(this);
	}
	template <typename T = void> T set_ChangeItemNum(int32_t value) {
		return ((T (*)(PropHuntPlayerInfo*, int32_t))(Il2CppBase() + 0x34A12B8))(this, value);
	}
	template <typename T = int32_t> T get_TacticalNum() {
		return ((T (*)(PropHuntPlayerInfo*))(Il2CppBase() + 0x34B0EC0))(this);
	}
	template <typename T = void> T set_TacticalNum(int32_t value) {
		return ((T (*)(PropHuntPlayerInfo*, int32_t))(Il2CppBase() + 0x34A1424))(this, value);
	}
	template <typename T = int32_t> T get_WinBetScore() {
		return ((T (*)(PropHuntPlayerInfo*))(Il2CppBase() + 0x3497CC8))(this);
	}
	template <typename T = void> T set_WinBetScore(int32_t value) {
		return ((T (*)(PropHuntPlayerInfo*, int32_t))(Il2CppBase() + 0x34A1590))(this, value);
	}
	template <typename T = int32_t> T get_BetCnt() {
		return ((T (*)(PropHuntPlayerInfo*))(Il2CppBase() + 0x34B0EC8))(this);
	}
	template <typename T = void> T set_BetCnt(int32_t value) {
		return ((T (*)(PropHuntPlayerInfo*, int32_t))(Il2CppBase() + 0x34A1598))(this, value);
	}
	template <typename T = int32_t> T get_LockState() {
		return ((T (*)(PropHuntPlayerInfo*))(Il2CppBase() + 0x34B0ED0))(this);
	}
	template <typename T = void> T set_LockState(int32_t value) {
		return ((T (*)(PropHuntPlayerInfo*, int32_t))(Il2CppBase() + 0x34A15A0))(this, value);
	}
	template <typename T = void> T ChangeLockState() {
		return ((T (*)(PropHuntPlayerInfo*))(Il2CppBase() + 0x34AF2D4))(this);
	}
	template <typename T = bool> T get_IsLockState() {
		return ((T (*)(PropHuntPlayerInfo*))(Il2CppBase() + 0x34A9EBC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PlayerChooseItemInfo() {
		return ((T (*)(PropHuntPlayerInfo*))(Il2CppBase() + 0x34B0ED8))(this);
	}
	template <typename T = void> T SetChooseItemList(Il2CppArray<uintptr_t>* items) {
		return ((T (*)(PropHuntPlayerInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x349D9E0))(this, items);
	}
	template <typename T = void> T OnPlayerStateChanged(uintptr_t oldState) {
		return ((T (*)(PropHuntPlayerInfo*, uintptr_t))(Il2CppBase() + 0x34B0EE0))(this, oldState);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayerStateChanged(uintptr_t P0) {
		return ((T (*)(PropHuntPlayerInfo*, uintptr_t))(Il2CppBase() + 0x34B10F8))(this, P0);
	}

};

}
