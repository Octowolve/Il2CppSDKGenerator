#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class KillMessagesHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "KillMessagesHUD"));
	}

	template <typename T = uintptr_t> static T& SelfColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SameCampColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& DiffCampColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& FFAOBColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Messages() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& HeadIndex() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& StreakMessage() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& DoaTagRoot() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& DoaTagEffect() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& DoaTagIcon() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& GoldIcon() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& DoaTagNum() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& DoaTagYOffset() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& killMsgPositionAdd() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> static T& kSuicideSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> T& mWeaponCache() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& mWeaponColorCache() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& m_IsLastDogTagActive() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uint32_t> T& cacheDogTagNum() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustKillMsgPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushStreakMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyKCTypeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseEventMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseJoinMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseKillMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParsePawnByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseWeaponByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoaTagEventInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyDoaTagEventActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDogTagEventActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDogTagEventNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDoaTagEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(KillMessagesHUD*))(Il2CppBase() + 0x3486454))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(KillMessagesHUD*))(Il2CppBase() + 0x348645C))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(KillMessagesHUD*))(Il2CppBase() + 0x348646C))(this);
	}
	template <typename T = void> T AdjustKillMsgPosition(float posAdd) {
		return ((T (*)(KillMessagesHUD*, float))(Il2CppBase() + 0x3486474))(this, posAdd);
	}
	template <typename T = void> T PushMessage(uintptr_t killInfo, uintptr_t mtype) {
		return ((T (*)(KillMessagesHUD*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3486550))(this, killInfo, mtype);
	}
	template <typename T = void> T PushStreakMessage(uint32_t playID, Il2CppString* playerName, uint32_t streakId, bool isUse) {
		return ((T (*)(KillMessagesHUD*, uint32_t, Il2CppString*, uint32_t, bool))(Il2CppBase() + 0x34869F4))(this, playID, playerName, streakId, isUse);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(KillMessagesHUD*))(Il2CppBase() + 0x3486C14))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(KillMessagesHUD*))(Il2CppBase() + 0x3486D90))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(KillMessagesHUD*))(Il2CppBase() + 0x34874A8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(KillMessagesHUD*))(Il2CppBase() + 0x3487630))(this);
	}
	template <typename T = void> T OnSyncPlayerInfo(uint32_t playerID, uint32_t propertyID, uintptr_t msg) {
		return ((T (*)(KillMessagesHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x3487730))(this, playerID, propertyID, msg);
	}
	template <typename T = void> T OnNotifyKCTypeChange(uintptr_t msg) {
		return ((T (*)(KillMessagesHUD*, uintptr_t))(Il2CppBase() + 0x3487A4C))(this, msg);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(KillMessagesHUD*))(Il2CppBase() + 0x3486E78))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(KillMessagesHUD*, float))(Il2CppBase() + 0x3487EEC))(this, dt);
	}
	template <typename T = bool> T get_TickEnabled() {
		return ((T (*)(KillMessagesHUD*))(Il2CppBase() + 0x34882AC))(this);
	}
	template <typename T = uintptr_t> T ParseEventMessage(uintptr_t killInfo, uintptr_t mtype) {
		return ((T (*)(KillMessagesHUD*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34868C0))(this, killInfo, mtype);
	}
	template <typename T = uintptr_t> T ParseJoinMessage(uintptr_t killInfo) {
		return ((T (*)(KillMessagesHUD*, uintptr_t))(Il2CppBase() + 0x34882B4))(this, killInfo);
	}
	template <typename T = uintptr_t> T ParseKillMessage(uintptr_t killInfo) {
		return ((T (*)(KillMessagesHUD*, uintptr_t))(Il2CppBase() + 0x34884AC))(this, killInfo);
	}
	template <typename T = bool> T ParsePawnByID(uint32_t playerID, uintptr_t* name, uintptr_t* color) {
		return ((T (*)(KillMessagesHUD*, uint32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3488970))(this, playerID, name, color);
	}
	template <typename T = void> T ParseWeaponByID(uintptr_t killInfo, uintptr_t* spriteName, uintptr_t* weaponColor) {
		return ((T (*)(KillMessagesHUD*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3488F60))(this, killInfo, spriteName, weaponColor);
	}
	template <typename T = void> T DoaTagEventInit() {
		return ((T (*)(KillMessagesHUD*))(Il2CppBase() + 0x3487044))(this);
	}
	template <typename T = void> T OnNotifyDoaTagEventActive(uintptr_t Msg) {
		return ((T (*)(KillMessagesHUD*, uintptr_t))(Il2CppBase() + 0x34892C0))(this, Msg);
	}
	template <typename T = void> T SetDogTagEventActive(bool isActive) {
		return ((T (*)(KillMessagesHUD*, bool))(Il2CppBase() + 0x3487D04))(this, isActive);
	}
	template <typename T = void> T SetDogTagEventNum(uint32_t num) {
		return ((T (*)(KillMessagesHUD*, uint32_t))(Il2CppBase() + 0x34878F4))(this, num);
	}
	template <typename T = void> T PlayDoaTagEffect() {
		return ((T (*)(KillMessagesHUD*))(Il2CppBase() + 0x3489404))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(KillMessagesHUD*))(Il2CppBase() + 0x34896F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(KillMessagesHUD*))(Il2CppBase() + 0x3489700))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(KillMessagesHUD*))(Il2CppBase() + 0x3489708))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncPlayerInfo(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(KillMessagesHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x3489710))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(KillMessagesHUD*, float))(Il2CppBase() + 0x3489730))(this, P0);
	}

};

}
