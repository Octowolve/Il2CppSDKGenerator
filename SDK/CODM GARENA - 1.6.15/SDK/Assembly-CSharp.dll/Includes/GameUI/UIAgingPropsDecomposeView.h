#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIAgingPropsDecomposeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIAgingPropsDecomposeView"));
	}

	template <typename T = uintptr_t> T& item1() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& item2() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& coinItem() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& limitTimeLabel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& perpetualTimeLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& limitTimeConvertLabel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& perpetualConvertLabel() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& index_() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppList<void*>*> T& itemList() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UIInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUIItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchUIShowStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T UIInit() {
		return ((T (*)(UIAgingPropsDecomposeView*))(Il2CppBase() + 0x29C0A9C))(this);
	}
	template <typename T = void> T RefreshUIItem() {
		return ((T (*)(UIAgingPropsDecomposeView*))(Il2CppBase() + 0x29C0C6C))(this);
	}
	template <typename T = void> T SwitchUIShowStyle(uintptr_t item, int32_t num) {
		return ((T (*)(UIAgingPropsDecomposeView*, uintptr_t, int32_t))(Il2CppBase() + 0x29C1414))(this, item, num);
	}

};

}
