#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class EasyListView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "EasyListView"));
	}

	template <typename T = uintptr_t> T& m_WrapContent() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_ScrollBar() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_ScrollView() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_ScrollBarLengthAdjust() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& m_ItemWidth() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& m_ItemHeight() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& bSlerpScroll() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppVector3> T& mMoveTargetVec() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEasyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SlerpScrollTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScrollBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableCenterOnChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T InitEasyList(uintptr_t scrollView, int32_t columns, int32_t itemWidth, int32_t itemHeight, uintptr_t scrollBar, int32_t scrollBarLengthAdjust) {
		return ((T (*)(EasyListView*, uintptr_t, int32_t, int32_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x46F9274))(this, scrollView, columns, itemWidth, itemHeight, scrollBar, scrollBarLengthAdjust);
	}
	template <typename T = void> T SetItemSize(int32_t width, int32_t height) {
		return ((T (*)(EasyListView*, int32_t, int32_t))(Il2CppBase() + 0x46F9380))(this, width, height);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EasyListView*))(Il2CppBase() + 0x46FEB0C))(this);
	}
	template <typename T = void> T SlerpScrollTo() {
		return ((T (*)(EasyListView*))(Il2CppBase() + 0x46FEF20))(this);
	}
	template <typename T = void> T UpdateScrollBar() {
		return ((T (*)(EasyListView*))(Il2CppBase() + 0x46FEBF4))(this);
	}
	template <typename T = void> T EnableCenterOnChild() {
		return ((T (*)(EasyListView*))(Il2CppBase() + 0x46FA7C4))(this);
	}
	template <typename T = int32_t> T GetRealIndex() {
		return ((T (*)(EasyListView*))(Il2CppBase() + 0x46FA988))(this);
	}

};

}
