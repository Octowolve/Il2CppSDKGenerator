#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutPvpGameController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutPvpGameController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_LoadoutDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mCacheSquadMemberData() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& bShowProgress() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& bFirstOpen() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = Il2CppString*> T& mFirstTitleLOC() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& mFirstBriefTitleLOC() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& mOtherTitleLOC() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& mOtherBriefTitleLOC() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> static T& TIME_TO_CLOSE_BAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mDeadReplayManager() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& CurSelectedIndex() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_RefreshLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadEquipLoadoutConfigm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSelectedIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoudoutCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadMoveLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadMoveRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabToggleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEquipLoadoutBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutPvpGameToShowTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowLoadoutTimePvpGameView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOutNotifyPrepareTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMemberID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDeadReplayManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBagInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = void> T T_RefreshLoadout() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F1D664))(this);
	}
	template <typename T = uintptr_t> T get_mLoadoutDataStore() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F1D9A4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F1DA54))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F1DB28))(this);
	}
	template <typename T = bool> T OnGamepadEquipLoadoutConfigm() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F1DC6C))(this);
	}
	template <typename T = int32_t> T GetSelectedIndex() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F1DF6C))(this);
	}
	template <typename T = int32_t> T GetLoudoutCount() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F1E0C8))(this);
	}
	template <typename T = bool> T OnGamepadMoveLeft() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F1E25C))(this);
	}
	template <typename T = bool> T OnGamepadMoveRight() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F1E6D8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F1E850))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F1EDE0))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F1F200))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F1F914))(this);
	}
	template <typename T = void> T OnTabToggleClick(uintptr_t obj) {
		return ((T (*)(LoadoutPvpGameController*, uintptr_t))(Il2CppBase() + 0x1F1E3C4))(this, obj);
	}
	template <typename T = void> T OnEquipLoadoutBtnClick() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F1DD64))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F1F4C0))(this);
	}
	template <typename T = void> T RefreshLoadout() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F1FC18))(this);
	}
	template <typename T = void> T OnChangeBag() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F20618))(this);
	}
	template <typename T = void> T RefreshTime() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F1F6D8))(this);
	}
	template <typename T = void> T OnNotifyLoadoutPvpGameToShowTime(uintptr_t msg) {
		return ((T (*)(LoadoutPvpGameController*, uintptr_t))(Il2CppBase() + 0x1F21278))(this, msg);
	}
	template <typename T = void> T OnNotifyShowLoadoutTimePvpGameView(uintptr_t message) {
		return ((T (*)(LoadoutPvpGameController*, uintptr_t))(Il2CppBase() + 0x1F213BC))(this, message);
	}
	template <typename T = void> T OnOutNotifyPrepareTime(uintptr_t msg) {
		return ((T (*)(LoadoutPvpGameController*, uintptr_t))(Il2CppBase() + 0x1F214F8))(this, msg);
	}
	template <typename T = uint32_t> T GetMemberID(uintptr_t member) {
		return ((T (*)(LoadoutPvpGameController*, uintptr_t))(Il2CppBase() + 0x1F20D30))(this, member);
	}
	template <typename T = void> T SetDeadReplayManager(uintptr_t deadManager) {
		return ((T (*)(LoadoutPvpGameController*, uintptr_t))(Il2CppBase() + 0x1F21634))(this, deadManager);
	}
	template <typename T = void> T ShowBagInfo(bool flag, bool isShowLeftTime) {
		return ((T (*)(LoadoutPvpGameController*, bool, bool))(Il2CppBase() + 0x1F2170C))(this, flag, isShowLeftTime);
	}
	template <typename T = void> T CheckShowCamp() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F1F9FC))(this);
	}
	template <typename T = void> T UpdateLoadout(uintptr_t msg) {
		return ((T (*)(LoadoutPvpGameController*, uintptr_t))(Il2CppBase() + 0x1F21814))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F21978))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F21980))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F21988))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F21990))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F21998))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LoadoutPvpGameController*))(Il2CppBase() + 0x1F219A0))(this);
	}

};

}
