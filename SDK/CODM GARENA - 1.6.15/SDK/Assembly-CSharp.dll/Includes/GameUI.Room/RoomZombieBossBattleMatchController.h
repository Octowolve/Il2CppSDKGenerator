#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomZombieBossBattleMatchController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomZombieBossBattleMatchController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DifficultyMapList() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_GroupMapList() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEAvatarViewType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomDataStore_Virtual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnNormalClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnHardClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnNormalLockClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnHardLockClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnLockClickTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnAutoFillClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__ChangeRoomDifficultyLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnNotSatisfySpiClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAutoFillInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGroupMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDifficultyInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TraverseMpMapListDiffculty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEnableStartInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_Room_IRoomInfoSelectorController_En_DidSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_Room_IRoomInfoSelectorController_En_Expand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_Room_IRoomInfoSelectorDataSource_En_CellNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_Room_IRoomInfoSelectorDataSource_En_CellData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_Room_IRoomInfoSelectorDataSource_En_OuterGlowHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_Room_IRoomInfoSelectorDataSource_En_CellHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRoomUIToDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnLoadoutClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeRoomUIState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLadderType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}

	template <typename T = void> T Init() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x2135AB8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x2135CAC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x2135D50))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x2136090))(this);
	}
	template <typename T = uintptr_t> T GetEAvatarViewType() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x2136388))(this);
	}
	template <typename T = void> T HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x2136428))(this);
	}
	template <typename T = void> T OnBtnNormalClick() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x21373D4))(this);
	}
	template <typename T = void> T OnBtnHardClick() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x2137800))(this);
	}
	template <typename T = void> T OnBtnNormalLockClick() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x21378A8))(this);
	}
	template <typename T = void> T OnBtnHardLockClick() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x2137BDC))(this);
	}
	template <typename T = void> T _OnLockClickTip(uintptr_t difficultyLevel) {
		return ((T (*)(RoomZombieBossBattleMatchController*, uintptr_t))(Il2CppBase() + 0x2137950))(this, difficultyLevel);
	}
	template <typename T = void> T OnBtnAutoFillClick() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x2137C84))(this);
	}
	template <typename T = void> T _ChangeRoomDifficultyLevel(uintptr_t difficultyLevel) {
		return ((T (*)(RoomZombieBossBattleMatchController*, uintptr_t))(Il2CppBase() + 0x213747C))(this, difficultyLevel);
	}
	template <typename T = void> T OnBtnNotSatisfySpiClick() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x2137E8C))(this);
	}
	template <typename T = void> T SetAutoFillInfo() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x21364FC))(this);
	}
	template <typename T = void> T SetGroupMapInfo() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x21366B8))(this);
	}
	template <typename T = void> T SetDifficultyInfo() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x2136B94))(this);
	}
	template <typename T = void> T TraverseMpMapListDiffculty(uintptr_t bEasy, uintptr_t bHard, uintptr_t bHell) {
		return ((T (*)(RoomZombieBossBattleMatchController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2138018))(this, bEasy, bHard, bHell);
	}
	template <typename T = void> T SetSelectorInfo(bool bInit) {
		return ((T (*)(RoomZombieBossBattleMatchController*, bool))(Il2CppBase() + 0x2136E48))(this, bInit);
	}
	template <typename T = void> T SetEnableStartInfo() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x21370A4))(this);
	}
	template <typename T = bool> T GameUI_Room_IRoomInfoSelectorController_En_DidSelect(uintptr_t selector, int32_t row) {
		return ((T (*)(RoomZombieBossBattleMatchController*, uintptr_t, int32_t))(Il2CppBase() + 0x21385B0))(this, selector, row);
	}
	template <typename T = void> T GameUI_Room_IRoomInfoSelectorController_En_Expand(uintptr_t selector, bool expand) {
		return ((T (*)(RoomZombieBossBattleMatchController*, uintptr_t, bool))(Il2CppBase() + 0x21388DC))(this, selector, expand);
	}
	template <typename T = int32_t> T GameUI_Room_IRoomInfoSelectorDataSource_En_CellNumber(uintptr_t selector) {
		return ((T (*)(RoomZombieBossBattleMatchController*, uintptr_t))(Il2CppBase() + 0x2138AFC))(this, selector);
	}
	template <typename T = uintptr_t> T GameUI_Room_IRoomInfoSelectorDataSource_En_CellData(uintptr_t selector, int32_t row) {
		return ((T (*)(RoomZombieBossBattleMatchController*, uintptr_t, int32_t))(Il2CppBase() + 0x2138C94))(this, selector, row);
	}
	template <typename T = int32_t> T GameUI_Room_IRoomInfoSelectorDataSource_En_OuterGlowHeight(uintptr_t selector) {
		return ((T (*)(RoomZombieBossBattleMatchController*, uintptr_t))(Il2CppBase() + 0x2138E88))(this, selector);
	}
	template <typename T = int32_t> T GameUI_Room_IRoomInfoSelectorDataSource_En_CellHeight(uintptr_t selector) {
		return ((T (*)(RoomZombieBossBattleMatchController*, uintptr_t))(Il2CppBase() + 0x2138FF4))(this, selector);
	}
	template <typename T = void> T InitRoomUIToDefault(bool bPreCreate) {
		return ((T (*)(RoomZombieBossBattleMatchController*, bool))(Il2CppBase() + 0x2139154))(this, bPreCreate);
	}
	template <typename T = void> T OnBtnLoadoutClick() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x2139284))(this);
	}
	template <typename T = void> T ChangeRoomUIState(uintptr_t state) {
		return ((T (*)(RoomZombieBossBattleMatchController*, uintptr_t))(Il2CppBase() + 0x2139394))(this, state);
	}
	template <typename T = uintptr_t> T GetLadderType() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x21394E8))(this);
	}
	template <typename T = bool> static T TraverseMpMapListDiffcultym__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2139588))(0, it);
	}
	template <typename T = bool> static T TraverseMpMapListDiffcultym__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21395C4))(0, it);
	}
	template <typename T = bool> static T TraverseMpMapListDiffcultym__2(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2139600))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x213963C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x2139640))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x2139648))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x213964C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetEAvatarViewType() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x2139650))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x2139654))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitRoomUIToDefault(bool P0) {
		return ((T (*)(RoomZombieBossBattleMatchController*, bool))(Il2CppBase() + 0x213965C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnLoadoutClick() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x2139660))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeRoomUIState(uintptr_t P0) {
		return ((T (*)(RoomZombieBossBattleMatchController*, uintptr_t))(Il2CppBase() + 0x2139668))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetLadderType() {
		return ((T (*)(RoomZombieBossBattleMatchController*))(Il2CppBase() + 0x2139670))(this);
	}

};

}
