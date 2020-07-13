#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomZombieWeeklyInstanceController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomZombieWeeklyInstanceController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnNotSatisfySpiClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__ChangeRoomDifficultyLevel() {
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
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2143334))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2143528))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x21435CC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x214390C))(this);
	}
	template <typename T = uintptr_t> T GetEAvatarViewType() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2143C04))(this);
	}
	template <typename T = void> T HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2143CA4))(this);
	}
	template <typename T = void> T OnBtnNormalClick() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2144C50))(this);
	}
	template <typename T = void> T OnBtnHardClick() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x214507C))(this);
	}
	template <typename T = void> T OnBtnNormalLockClick() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2145124))(this);
	}
	template <typename T = void> T OnBtnHardLockClick() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2145458))(this);
	}
	template <typename T = void> T _OnLockClickTip(uintptr_t difficultyLevel) {
		return ((T (*)(RoomZombieWeeklyInstanceController*, uintptr_t))(Il2CppBase() + 0x21451CC))(this, difficultyLevel);
	}
	template <typename T = void> T OnBtnAutoFillClick() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2145500))(this);
	}
	template <typename T = void> T OnBtnNotSatisfySpiClick() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2145700))(this);
	}
	template <typename T = void> T _ChangeRoomDifficultyLevel(uintptr_t difficultyLevel) {
		return ((T (*)(RoomZombieWeeklyInstanceController*, uintptr_t))(Il2CppBase() + 0x2144CF8))(this, difficultyLevel);
	}
	template <typename T = void> T SetAutoFillInfo() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2143D78))(this);
	}
	template <typename T = void> T SetGroupMapInfo() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2143F34))(this);
	}
	template <typename T = void> T SetDifficultyInfo() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2144410))(this);
	}
	template <typename T = void> T TraverseMpMapListDiffculty(uintptr_t bEasy, uintptr_t bHard, uintptr_t bHell) {
		return ((T (*)(RoomZombieWeeklyInstanceController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2145894))(this, bEasy, bHard, bHell);
	}
	template <typename T = void> T SetSelectorInfo(bool bInit) {
		return ((T (*)(RoomZombieWeeklyInstanceController*, bool))(Il2CppBase() + 0x21446C4))(this, bInit);
	}
	template <typename T = void> T SetEnableStartInfo() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2144920))(this);
	}
	template <typename T = bool> T GameUI_Room_IRoomInfoSelectorController_En_DidSelect(uintptr_t selector, int32_t row) {
		return ((T (*)(RoomZombieWeeklyInstanceController*, uintptr_t, int32_t))(Il2CppBase() + 0x2145E2C))(this, selector, row);
	}
	template <typename T = void> T GameUI_Room_IRoomInfoSelectorController_En_Expand(uintptr_t selector, bool expand) {
		return ((T (*)(RoomZombieWeeklyInstanceController*, uintptr_t, bool))(Il2CppBase() + 0x2146158))(this, selector, expand);
	}
	template <typename T = int32_t> T GameUI_Room_IRoomInfoSelectorDataSource_En_CellNumber(uintptr_t selector) {
		return ((T (*)(RoomZombieWeeklyInstanceController*, uintptr_t))(Il2CppBase() + 0x2146378))(this, selector);
	}
	template <typename T = uintptr_t> T GameUI_Room_IRoomInfoSelectorDataSource_En_CellData(uintptr_t selector, int32_t row) {
		return ((T (*)(RoomZombieWeeklyInstanceController*, uintptr_t, int32_t))(Il2CppBase() + 0x2146510))(this, selector, row);
	}
	template <typename T = int32_t> T GameUI_Room_IRoomInfoSelectorDataSource_En_OuterGlowHeight(uintptr_t selector) {
		return ((T (*)(RoomZombieWeeklyInstanceController*, uintptr_t))(Il2CppBase() + 0x2146704))(this, selector);
	}
	template <typename T = int32_t> T GameUI_Room_IRoomInfoSelectorDataSource_En_CellHeight(uintptr_t selector) {
		return ((T (*)(RoomZombieWeeklyInstanceController*, uintptr_t))(Il2CppBase() + 0x2146870))(this, selector);
	}
	template <typename T = void> T InitRoomUIToDefault(bool bPreCreate) {
		return ((T (*)(RoomZombieWeeklyInstanceController*, bool))(Il2CppBase() + 0x21469D0))(this, bPreCreate);
	}
	template <typename T = void> T OnBtnLoadoutClick() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2146B08))(this);
	}
	template <typename T = void> T ChangeRoomUIState(uintptr_t state) {
		return ((T (*)(RoomZombieWeeklyInstanceController*, uintptr_t))(Il2CppBase() + 0x2146C18))(this, state);
	}
	template <typename T = uintptr_t> T GetLadderType() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2146DEC))(this);
	}
	template <typename T = bool> static T TraverseMpMapListDiffcultym__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2146E8C))(0, it);
	}
	template <typename T = bool> static T TraverseMpMapListDiffcultym__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2146EC8))(0, it);
	}
	template <typename T = bool> static T TraverseMpMapListDiffcultym__2(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2146F04))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2146F40))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2146F44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2146F4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2146F50))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetEAvatarViewType() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2146F54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2146F58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitRoomUIToDefault(bool P0) {
		return ((T (*)(RoomZombieWeeklyInstanceController*, bool))(Il2CppBase() + 0x2146F60))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnLoadoutClick() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2146F64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeRoomUIState(uintptr_t P0) {
		return ((T (*)(RoomZombieWeeklyInstanceController*, uintptr_t))(Il2CppBase() + 0x2146F6C))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetLadderType() {
		return ((T (*)(RoomZombieWeeklyInstanceController*))(Il2CppBase() + 0x2146F74))(this);
	}

};

}
