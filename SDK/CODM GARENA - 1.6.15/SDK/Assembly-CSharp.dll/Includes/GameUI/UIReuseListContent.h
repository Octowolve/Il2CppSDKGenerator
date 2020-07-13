#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIReuseListContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIReuseListContent"));
	}

	template <typename T = int32_t> T& m_columns() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& itemCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_DataSource() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Go() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& cullContent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& minIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& maxIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& onInitializeItem() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& onInitializeAnim() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mPanel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& mScroll() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& mHorizontal() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mChildren() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mChildrenWrapperViews() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& mLastUpdateIndexBegin() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& mLastUpdateIndexEnd() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Positions() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_UpdateList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitReuseList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetChilds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortBasedOnScrollMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortAlphabetically() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetChildPositions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateChildView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WrapContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFullSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPositionAtIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddUpdateItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveUpdateItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDataCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDataColumns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDataItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDataItemWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDataItemHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCellSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = uintptr_t> T get_cachedGameObject() {
		return ((T (*)(UIReuseListContent*))(Il2CppBase() + 0x3B0412C))(this);
	}
	template <typename T = void> T InitReuseList(uintptr_t scrollView, uintptr_t dataSource) {
		return ((T (*)(UIReuseListContent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B041FC))(this, scrollView, dataSource);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(UIReuseListContent*))(Il2CppBase() + 0x3B04528))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIReuseListContent*))(Il2CppBase() + 0x3B04630))(this);
	}
	template <typename T = void> T ResetChilds(bool resetScroll) {
		return ((T (*)(UIReuseListContent*, bool))(Il2CppBase() + 0x3B0479C))(this, resetScroll);
	}
	template <typename T = void> T Refresh(bool ResetViews) {
		return ((T (*)(UIReuseListContent*, bool))(Il2CppBase() + 0x3B04BB4))(this, ResetViews);
	}
	template <typename T = void> T OnMove(uintptr_t panel) {
		return ((T (*)(UIReuseListContent*, uintptr_t))(Il2CppBase() + 0x3B051A8))(this, panel);
	}
	template <typename T = void> T SortBasedOnScrollMovement(bool resetScroll) {
		return ((T (*)(UIReuseListContent*, bool))(Il2CppBase() + 0x3B0484C))(this, resetScroll);
	}
	template <typename T = void> T SortAlphabetically() {
		return ((T (*)(UIReuseListContent*))(Il2CppBase() + 0x3B05904))(this);
	}
	template <typename T = bool> T CacheScrollView() {
		return ((T (*)(UIReuseListContent*))(Il2CppBase() + 0x3B04378))(this);
	}
	template <typename T = void> T ResetChildPositions(bool resetScroll) {
		return ((T (*)(UIReuseListContent*, bool))(Il2CppBase() + 0x3B05754))(this, resetScroll);
	}
	template <typename T = void> T UpdateChildView() {
		return ((T (*)(UIReuseListContent*))(Il2CppBase() + 0x3B05CC4))(this);
	}
	template <typename T = bool> T WrapContent() {
		return ((T (*)(UIReuseListContent*))(Il2CppBase() + 0x3B04CA8))(this);
	}
	template <typename T = void> T UpdateItem(uintptr_t item, int32_t index, uintptr_t state, bool show) {
		return ((T (*)(UIReuseListContent*, uintptr_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x3B05E64))(this, item, index, state, show);
	}
	template <typename T = float> T GetFullSize() {
		return ((T (*)(UIReuseListContent*))(Il2CppBase() + 0x3B06104))(this);
	}
	template <typename T = float> T GetItemWidth() {
		return ((T (*)(UIReuseListContent*))(Il2CppBase() + 0x3B061A4))(this);
	}
	template <typename T = Il2CppVector3> T GetPositionAtIndex(int32_t index) {
		return ((T (*)(UIReuseListContent*, int32_t))(Il2CppBase() + 0x3B05254))(this, index);
	}
	template <typename T = void> T AddUpdateItem(uintptr_t trans, int32_t index) {
		return ((T (*)(UIReuseListContent*, uintptr_t, int32_t))(Il2CppBase() + 0x3B06474))(this, trans, index);
	}
	template <typename T = void> T RemoveUpdateItem(uintptr_t trans) {
		return ((T (*)(UIReuseListContent*, uintptr_t))(Il2CppBase() + 0x3B066A8))(this, trans);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(UIReuseListContent*))(Il2CppBase() + 0x3B06928))(this);
	}
	template <typename T = int32_t> T GetDataCount() {
		return ((T (*)(UIReuseListContent*))(Il2CppBase() + 0x3B06B34))(this);
	}
	template <typename T = int32_t> T GetDataColumns() {
		return ((T (*)(UIReuseListContent*))(Il2CppBase() + 0x3B06CCC))(this);
	}
	template <typename T = uintptr_t> T GetDataItem(int32_t index) {
		return ((T (*)(UIReuseListContent*, int32_t))(Il2CppBase() + 0x3B06E64))(this, index);
	}
	template <typename T = int32_t> T GetDataItemWidth(int32_t index) {
		return ((T (*)(UIReuseListContent*, int32_t))(Il2CppBase() + 0x3B07038))(this, index);
	}
	template <typename T = int32_t> T GetDataItemHeight(int32_t index) {
		return ((T (*)(UIReuseListContent*, int32_t))(Il2CppBase() + 0x3B0720C))(this, index);
	}
	template <typename T = Il2CppVector2> T GetCellSize(int32_t index) {
		return ((T (*)(UIReuseListContent*, int32_t))(Il2CppBase() + 0x3B06244))(this, index);
	}

};

}
