#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIFlexibleListBaseCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIFlexibleListBaseCell"));
	}

	template <typename T = uintptr_t> T& mMainContainer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mMainColider() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mDragScrollView() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Height() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Width() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ClickDel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyClickOnCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIFlexibleListBaseCell*))(Il2CppBase() + 0x3AD9560))(this);
	}
	template <typename T = void> T set_Height(int32_t value) {
		return ((T (*)(UIFlexibleListBaseCell*, int32_t))(Il2CppBase() + 0x3AD98D8))(this, value);
	}
	template <typename T = int32_t> T get_Height() {
		return ((T (*)(UIFlexibleListBaseCell*))(Il2CppBase() + 0x3AD98E0))(this);
	}
	template <typename T = void> T set_Width(int32_t value) {
		return ((T (*)(UIFlexibleListBaseCell*, int32_t))(Il2CppBase() + 0x3AD98E8))(this, value);
	}
	template <typename T = int32_t> T get_Width() {
		return ((T (*)(UIFlexibleListBaseCell*))(Il2CppBase() + 0x3AD98F0))(this);
	}
	template <typename T = void> T BindData(uintptr_t data, int32_t index) {
		return ((T (*)(UIFlexibleListBaseCell*, uintptr_t, int32_t))(Il2CppBase() + 0x3AD98F8))(this, data, index);
	}
	template <typename T = void> T set_ClickDel(uintptr_t value) {
		return ((T (*)(UIFlexibleListBaseCell*, uintptr_t))(Il2CppBase() + 0x3AD99E8))(this, value);
	}
	template <typename T = uintptr_t> T get_ClickDel() {
		return ((T (*)(UIFlexibleListBaseCell*))(Il2CppBase() + 0x3AD99F0))(this);
	}
	template <typename T = void> T set_Index(int32_t value) {
		return ((T (*)(UIFlexibleListBaseCell*, int32_t))(Il2CppBase() + 0x3AD99F8))(this, value);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(UIFlexibleListBaseCell*))(Il2CppBase() + 0x3AD9A00))(this);
	}
	template <typename T = void> T NotifyClickOnCell(uintptr_t go) {
		return ((T (*)(UIFlexibleListBaseCell*, uintptr_t))(Il2CppBase() + 0x3AD9A08))(this, go);
	}

};

}
