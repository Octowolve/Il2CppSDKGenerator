#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UICommonNumberSelectTool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UICommonNumberSelectTool"));
	}

	template <typename T = uintptr_t> T& AddBtnWidget() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& SubBtnWidget() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& MaxBtnWidget() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& AddBtn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& SubBtn() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& MaxBtn() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& NumberLabel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> static T& DISABLE_ALPHA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& ENABLE_ALPHA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& mMinValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& mMaxValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& mCurrentValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& mChangeCallback() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMaxBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = int32_t> T get_CurrentValue() {
		return ((T (*)(UICommonNumberSelectTool*))(Il2CppBase() + 0x29DB5A8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UICommonNumberSelectTool*))(Il2CppBase() + 0x29DB5B0))(this);
	}
	template <typename T = void> T Init(int32_t minValue, int32_t maxValue, int32_t defaultValue, void* callback) {
		return ((T (*)(UICommonNumberSelectTool*, int32_t, int32_t, int32_t, void*))(Il2CppBase() + 0x29DB8A0))(this, minValue, maxValue, defaultValue, callback);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(UICommonNumberSelectTool*))(Il2CppBase() + 0x29DB988))(this);
	}
	template <typename T = void> T OnAddBtnClick(uintptr_t obj) {
		return ((T (*)(UICommonNumberSelectTool*, uintptr_t))(Il2CppBase() + 0x29DBF2C))(this, obj);
	}
	template <typename T = void> T OnSubBtnClick(uintptr_t obj) {
		return ((T (*)(UICommonNumberSelectTool*, uintptr_t))(Il2CppBase() + 0x29DBFE4))(this, obj);
	}
	template <typename T = void> T OnMaxBtnClick(uintptr_t obj) {
		return ((T (*)(UICommonNumberSelectTool*, uintptr_t))(Il2CppBase() + 0x29DC09C))(this, obj);
	}

};

}
