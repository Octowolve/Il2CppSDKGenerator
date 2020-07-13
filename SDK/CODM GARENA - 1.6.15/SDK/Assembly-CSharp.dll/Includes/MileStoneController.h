#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MileStoneController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MileStoneController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_CurrentSelectIndex() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LevelUnlockList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_UnlockList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_ScrollViewTemplateACtr() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_levelInfo() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_thirdTab() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& listAllInfos() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_SelectIndex() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& showDoubleItemIndex() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_LeftLevel() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& m_RightLevel() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_T_UnlockLevel_Init_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SetRewarded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_MileStoneController_Go() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SelectIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwitchIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnlockList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeShoweItemIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResTemplateItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnLeftArrowClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnRightArrowClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void> T T_UnlockLevel_Init_2() {
		return ((T (*)(MileStoneController*))(Il2CppBase() + 0x41E6B68))(this);
	}
	template <typename T = void> T T_SetRewarded(bool bShow) {
		return ((T (*)(MileStoneController*, bool))(Il2CppBase() + 0x41E6D08))(this, bShow);
	}
	template <typename T = void> T T_MileStoneController_Go() {
		return ((T (*)(MileStoneController*))(Il2CppBase() + 0x41E6E94))(this);
	}
	template <typename T = void> T T_SelectIndex(uintptr_t SelectIndex) {
		return ((T (*)(MileStoneController*, uintptr_t))(Il2CppBase() + 0x41E7128))(this, SelectIndex);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MileStoneController*))(Il2CppBase() + 0x41E7230))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(MileStoneController*))(Il2CppBase() + 0x41E7488))(this);
	}
	template <typename T = void> T SetSelectIndex(int32_t thirdTab) {
		return ((T (*)(MileStoneController*, int32_t))(Il2CppBase() + 0x41E752C))(this, thirdTab);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MileStoneController*))(Il2CppBase() + 0x41E75D4))(this);
	}
	template <typename T = void> T GetSwitchIndex(uintptr_t selectIndex, uintptr_t scrollToIndex) {
		return ((T (*)(MileStoneController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41E78AC))(this, selectIndex, scrollToIndex);
	}
	template <typename T = void> T GetUnlockList(uintptr_t selectIndex) {
		return ((T (*)(MileStoneController*, uintptr_t))(Il2CppBase() + 0x41E7A58))(this, selectIndex);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MileStoneController*))(Il2CppBase() + 0x41E8CA8))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(MileStoneController*))(Il2CppBase() + 0x41E9020))(this);
	}
	template <typename T = void> T OnChangeShoweItemIndex() {
		return ((T (*)(MileStoneController*))(Il2CppBase() + 0x41E9130))(this);
	}
	template <typename T = void> T OnResTemplateItemClick(uintptr_t msg) {
		return ((T (*)(MileStoneController*, uintptr_t))(Il2CppBase() + 0x41EA008))(this, msg);
	}
	template <typename T = void> T SetSelectItem(int32_t idx) {
		return ((T (*)(MileStoneController*, int32_t))(Il2CppBase() + 0x41E91FC))(this, idx);
	}
	template <typename T = void> T OnBtnLeftArrowClick() {
		return ((T (*)(MileStoneController*))(Il2CppBase() + 0x41EBC14))(this);
	}
	template <typename T = void> T OnBtnRightArrowClick() {
		return ((T (*)(MileStoneController*))(Il2CppBase() + 0x41EBE48))(this);
	}
	template <typename T = void> T T_UnlockLevel_Init_2m__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(MileStoneController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x41EC07C))(this, tutorialType, info);
	}
	template <typename T = void> static T T_MileStoneController_Gom__1() {
		return ((T (*)(void *))(Il2CppBase() + 0x41EC668))(0);
	}
	template <typename T = void> T RegisterDelegatesm__2() {
		return ((T (*)(MileStoneController*))(Il2CppBase() + 0x41EC7A8))(this);
	}
	template <typename T = bool> static T GetUnlockListm__3(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41ECBE4))(0, it);
	}
	template <typename T = int32_t> static T GetUnlockListm__4(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x41ECC20))(0, x, y);
	}
	template <typename T = void> T OnOpenm__5() {
		return ((T (*)(MileStoneController*))(Il2CppBase() + 0x41ECC6C))(this);
	}
	template <typename T = bool> T OnBtnLeftArrowClickm__6(uintptr_t it) {
		return ((T (*)(MileStoneController*, uintptr_t))(Il2CppBase() + 0x41ECD18))(this, it);
	}
	template <typename T = bool> T OnBtnRightArrowClickm__7(uintptr_t it) {
		return ((T (*)(MileStoneController*, uintptr_t))(Il2CppBase() + 0x41ECD5C))(this, it);
	}
	template <typename T = bool> T RegisterDelegatesm__8(uintptr_t it) {
		return ((T (*)(MileStoneController*, uintptr_t))(Il2CppBase() + 0x41ECDA0))(this, it);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MileStoneController*))(Il2CppBase() + 0x41ECE00))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(MileStoneController*))(Il2CppBase() + 0x41ECE08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MileStoneController*))(Il2CppBase() + 0x41ECE10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MileStoneController*))(Il2CppBase() + 0x41ECE18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(MileStoneController*))(Il2CppBase() + 0x41ECE20))(this);
	}

};

}
