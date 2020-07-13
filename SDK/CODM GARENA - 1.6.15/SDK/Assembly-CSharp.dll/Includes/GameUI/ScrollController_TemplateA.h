#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ScrollControllerTemplateA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ScrollController_TemplateA"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_ListController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ImportantList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AllList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_ScrollTimer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_LeftLevel() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_RightLevel() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_CurrentSelectIndex() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_ImportantIndex() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_Lathel_WeaponGrade_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_GetItemTran() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_GetLastItemTran() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_GetMileStoneTrans() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_GetMileStoneWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_GetItemController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_GetDragArrowObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_GetScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnMileStoneClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragArrowDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimationDispatcher() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideSelectCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAddProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshItemByIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreImportantMileStone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNextImportantMileStone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__UpdateImportantMileStone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchToSelectIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnItemImportantClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetEasyList_AfterSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetSelectView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetImportantView_AfterSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshEasyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}

	template <typename T = void> T T_Lathel_WeaponGrade_Init() {
		return ((T (*)(ScrollControllerTemplateA*))(Il2CppBase() + 0x447A018))(this);
	}
	template <typename T = void> T T_OnEasyListItemClick(int32_t index) {
		return ((T (*)(ScrollControllerTemplateA*, int32_t))(Il2CppBase() + 0x447A214))(this, index);
	}
	template <typename T = uintptr_t> T T_GetItemTran(uint32_t UnlockLevel) {
		return ((T (*)(ScrollControllerTemplateA*, uint32_t))(Il2CppBase() + 0x447A408))(this, UnlockLevel);
	}
	template <typename T = uintptr_t> T T_GetLastItemTran() {
		return ((T (*)(ScrollControllerTemplateA*))(Il2CppBase() + 0x447A500))(this);
	}
	template <typename T = uintptr_t> T T_GetMileStoneTrans() {
		return ((T (*)(ScrollControllerTemplateA*))(Il2CppBase() + 0x447A5F4))(this);
	}
	template <typename T = uintptr_t> T T_GetMileStoneWidget() {
		return ((T (*)(ScrollControllerTemplateA*))(Il2CppBase() + 0x447A774))(this);
	}
	template <typename T = uintptr_t> T T_GetItemController(uint32_t UnlockLevel) {
		return ((T (*)(ScrollControllerTemplateA*, uint32_t))(Il2CppBase() + 0x447A828))(this, UnlockLevel);
	}
	template <typename T = uintptr_t> T T_GetDragArrowObj() {
		return ((T (*)(ScrollControllerTemplateA*))(Il2CppBase() + 0x447A920))(this);
	}
	template <typename T = uintptr_t> T T_GetScrollView() {
		return ((T (*)(ScrollControllerTemplateA*))(Il2CppBase() + 0x447A9D4))(this);
	}
	template <typename T = void> T T_OnMileStoneClick() {
		return ((T (*)(ScrollControllerTemplateA*))(Il2CppBase() + 0x447AA88))(this);
	}
	template <typename T = void> T OnDragArrowDrag(uintptr_t go, Il2CppVector2 delta) {
		return ((T (*)(ScrollControllerTemplateA*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x447AC14))(this, go, delta);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ScrollControllerTemplateA*))(Il2CppBase() + 0x447AED4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ScrollControllerTemplateA*))(Il2CppBase() + 0x447AFE8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ScrollControllerTemplateA*))(Il2CppBase() + 0x447B08C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ScrollControllerTemplateA*))(Il2CppBase() + 0x447B390))(this);
	}
	template <typename T = uintptr_t> T GetAnimationDispatcher() {
		return ((T (*)(ScrollControllerTemplateA*))(Il2CppBase() + 0x447B510))(this);
	}
	template <typename T = void> T HideSelectCircle() {
		return ((T (*)(ScrollControllerTemplateA*))(Il2CppBase() + 0x447B5C4))(this);
	}
	template <typename T = void> T UpdateView(Il2CppList<uintptr_t>* list, int32_t totalExp, int32_t selectIndex, int32_t scrollToIndex) {
		return ((T (*)(ScrollControllerTemplateA*, Il2CppList<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x447B884))(this, list, totalExp, selectIndex, scrollToIndex);
	}
	template <typename T = void> T ResetAddProgress(int32_t addExp) {
		return ((T (*)(ScrollControllerTemplateA*, int32_t))(Il2CppBase() + 0x447C37C))(this, addExp);
	}
	template <typename T = void> T RefreshItemByIndex(int32_t idx) {
		return ((T (*)(ScrollControllerTemplateA*, int32_t))(Il2CppBase() + 0x447C5FC))(this, idx);
	}
	template <typename T = void> T OnPreImportantMileStone(uintptr_t msg) {
		return ((T (*)(ScrollControllerTemplateA*, uintptr_t))(Il2CppBase() + 0x447C700))(this, msg);
	}
	template <typename T = void> T OnNextImportantMileStone(uintptr_t msg) {
		return ((T (*)(ScrollControllerTemplateA*, uintptr_t))(Il2CppBase() + 0x447CBA0))(this, msg);
	}
	template <typename T = void> T _UpdateImportantMileStone(int32_t level) {
		return ((T (*)(ScrollControllerTemplateA*, int32_t))(Il2CppBase() + 0x447C9D0))(this, level);
	}
	template <typename T = void> T OnSwitchToSelectIndex(uintptr_t msg) {
		return ((T (*)(ScrollControllerTemplateA*, uintptr_t))(Il2CppBase() + 0x447CE78))(this, msg);
	}
	template <typename T = void> T _OnBtnItemImportantClick() {
		return ((T (*)(ScrollControllerTemplateA*))(Il2CppBase() + 0x447CFB4))(this);
	}
	template <typename T = void> T _OnBtnSelect(int32_t index, uintptr_t selectType, bool isRealClick) {
		return ((T (*)(ScrollControllerTemplateA*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x447C28C))(this, index, selectType, isRealClick);
	}
	template <typename T = void> T _SetEasyList_AfterSelect(int32_t index, uintptr_t selectType) {
		return ((T (*)(ScrollControllerTemplateA*, int32_t, uintptr_t))(Il2CppBase() + 0x447D1C4))(this, index, selectType);
	}
	template <typename T = void> T _SetSelectView(int32_t selectIndex, bool isRealClick) {
		return ((T (*)(ScrollControllerTemplateA*, int32_t, bool))(Il2CppBase() + 0x447D424))(this, selectIndex, isRealClick);
	}
	template <typename T = void> T _SetImportantView_AfterSelect(int32_t index) {
		return ((T (*)(ScrollControllerTemplateA*, int32_t))(Il2CppBase() + 0x447B734))(this, index);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(ScrollControllerTemplateA*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x447DBE8))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(ScrollControllerTemplateA*, uintptr_t, int32_t))(Il2CppBase() + 0x447DCCC))(this, list, userContext);
	}
	template <typename T = void> T RefreshEasyList() {
		return ((T (*)(ScrollControllerTemplateA*))(Il2CppBase() + 0x447DD80))(this);
	}
	template <typename T = void> T T_Lathel_WeaponGrade_Initm__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(ScrollControllerTemplateA*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x447DE3C))(this, tutorialType, info);
	}
	template <typename T = bool> static T UpdateViewm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x447DF80))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ScrollControllerTemplateA*))(Il2CppBase() + 0x447DFA8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ScrollControllerTemplateA*))(Il2CppBase() + 0x447DFB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ScrollControllerTemplateA*))(Il2CppBase() + 0x447DFB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ScrollControllerTemplateA*))(Il2CppBase() + 0x447DFC0))(this);
	}

};

}
