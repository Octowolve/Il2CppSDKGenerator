#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIGrid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIGrid"));
	}

	template <typename T = uintptr_t> T& arrangement() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& sorting() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& pivot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& maxPerLine() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& cellWidth() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& cellHeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& animateSmoothly() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& hideInactive() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& keepWithinPanel() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = uintptr_t> T& onReposition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& onCustomSort() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& sorted() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& mReposition() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = uintptr_t> T& mPanel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& mInitDone() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetChildList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AddChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortByName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortHorizontal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortVertical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Sort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reposition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstrainWithinPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = void> T set_repositionNow(bool value) {
		return ((T (*)(UIGrid*, bool))(Il2CppBase() + 0x39D80A0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetChildList() {
		return ((T (*)(UIGrid*))(Il2CppBase() + 0x39C64C4))(this);
	}
	template <typename T = uintptr_t> T GetChild(int32_t index) {
		return ((T (*)(UIGrid*, int32_t))(Il2CppBase() + 0x39F0614))(this, index);
	}
	template <typename T = int32_t> T GetIndex(uintptr_t trans) {
		return ((T (*)(UIGrid*, uintptr_t))(Il2CppBase() + 0x39F0734))(this, trans);
	}
	template <typename T = void> T AddChild(uintptr_t trans) {
		return ((T (*)(UIGrid*, uintptr_t))(Il2CppBase() + 0x39F0818))(this, trans);
	}
	template <typename T = void> T AddChild_1(uintptr_t trans, bool sort) {
		return ((T (*)(UIGrid*, uintptr_t, bool))(Il2CppBase() + 0x39F0960))(this, trans, sort);
	}
	template <typename T = bool> T RemoveChild(uintptr_t t) {
		return ((T (*)(UIGrid*, uintptr_t))(Il2CppBase() + 0x39F0AC4))(this, t);
	}
	template <typename T = bool> T RemoveAllChild() {
		return ((T (*)(UIGrid*))(Il2CppBase() + 0x39F0BDC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UIGrid*))(Il2CppBase() + 0x39F0D50))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIGrid*))(Il2CppBase() + 0x39F0E68))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIGrid*))(Il2CppBase() + 0x39F0F58))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(UIGrid*))(Il2CppBase() + 0x39F1018))(this);
	}
	template <typename T = int32_t> static T SortByName(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x39F1130))(0, a, b);
	}
	template <typename T = int32_t> static T SortHorizontal(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x39F125C))(0, a, b);
	}
	template <typename T = int32_t> static T SortVertical(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x39F1378))(0, a, b);
	}
	template <typename T = void> T Sort(Il2CppList<uintptr_t>* list) {
		return ((T (*)(UIGrid*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x39F1498))(this, list);
	}
	template <typename T = void> T Reposition() {
		return ((T (*)(UIGrid*))(Il2CppBase() + 0x39F1538))(this);
	}
	template <typename T = void> T ConstrainWithinPanel() {
		return ((T (*)(UIGrid*))(Il2CppBase() + 0x39F1710))(this);
	}
	template <typename T = void> T ResetPosition(Il2CppList<uintptr_t>* list) {
		return ((T (*)(UIGrid*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x39F1A0C))(this, list);
	}
	template <typename T = void> T ConstrainWithinPanelm__0() {
		return ((T (*)(UIGrid*))(Il2CppBase() + 0x39F22DC))(this);
	}

};

}
