#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIWrapContentExtend
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIWrapContentExtend"));
	}

	template <typename T = int32_t> T& m_columns() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& itemWidth() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& itemHeight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& cullContent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& minIndex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& maxIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& onInitializeItem() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mPanel() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& mScroll() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& mHorizontal() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& mFirstTime() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mChildren() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEasyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetChilds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortBasedOnScrollMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortAlphabetically() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetChildPositions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WrapContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WrapContentImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFullFillChildrenSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPositionAtIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentRealIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void> T InitEasyList(uintptr_t scrollView, int32_t columns) {
		return ((T (*)(UIWrapContentExtend*, uintptr_t, int32_t))(Il2CppBase() + 0x2A2AA38))(this, scrollView, columns);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIWrapContentExtend*))(Il2CppBase() + 0x2A2AD50))(this);
	}
	template <typename T = void> T ResetChilds(bool resetScroll) {
		return ((T (*)(UIWrapContentExtend*, bool))(Il2CppBase() + 0x2A2AEBC))(this, resetScroll);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(UIWrapContentExtend*))(Il2CppBase() + 0x2A2B2A4))(this);
	}
	template <typename T = void> T OnMove(uintptr_t panel) {
		return ((T (*)(UIWrapContentExtend*, uintptr_t))(Il2CppBase() + 0x2A2B438))(this, panel);
	}
	template <typename T = void> T SortBasedOnScrollMovement(bool resetScroll) {
		return ((T (*)(UIWrapContentExtend*, bool))(Il2CppBase() + 0x2A2AF7C))(this, resetScroll);
	}
	template <typename T = void> T SortAlphabetically() {
		return ((T (*)(UIWrapContentExtend*))(Il2CppBase() + 0x2A2B8DC))(this);
	}
	template <typename T = bool> T CacheScrollView() {
		return ((T (*)(UIWrapContentExtend*))(Il2CppBase() + 0x2A2ABA0))(this);
	}
	template <typename T = void> T ResetChildPositions(bool resetScroll) {
		return ((T (*)(UIWrapContentExtend*, bool))(Il2CppBase() + 0x2A2B6B4))(this, resetScroll);
	}
	template <typename T = void> T WrapContent() {
		return ((T (*)(UIWrapContentExtend*))(Il2CppBase() + 0x2A2B4E4))(this);
	}
	template <typename T = void> T WrapContentImpl() {
		return ((T (*)(UIWrapContentExtend*))(Il2CppBase() + 0x2A2C008))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(UIWrapContentExtend*))(Il2CppBase() + 0x2A2D20C))(this);
	}
	template <typename T = void> T UpdateItem(uintptr_t item, int32_t index) {
		return ((T (*)(UIWrapContentExtend*, uintptr_t, int32_t))(Il2CppBase() + 0x2A2D2C4))(this, item, index);
	}
	template <typename T = int32_t> T GetRealIndex(Il2CppVector2 itemLocalPosition, bool isNature) {
		return ((T (*)(UIWrapContentExtend*, Il2CppVector2, bool))(Il2CppBase() + 0x2A2CE00))(this, itemLocalPosition, isNature);
	}
	template <typename T = int32_t> T GetFullFillChildrenSize() {
		return ((T (*)(UIWrapContentExtend*))(Il2CppBase() + 0x2A2CFCC))(this);
	}
	template <typename T = Il2CppVector3> T GetPositionAtIndex(int32_t index) {
		return ((T (*)(UIWrapContentExtend*, int32_t))(Il2CppBase() + 0x2A2BDC8))(this, index);
	}
	template <typename T = int32_t> T GetCurrentRealIndex() {
		return ((T (*)(UIWrapContentExtend*))(Il2CppBase() + 0x2A2BB40))(this);
	}

};

}
