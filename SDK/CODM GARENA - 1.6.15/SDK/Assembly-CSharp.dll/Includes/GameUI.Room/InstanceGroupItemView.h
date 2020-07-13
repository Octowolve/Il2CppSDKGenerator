#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class InstanceGroupItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "InstanceGroupItemView"));
	}

	template <typename T = uintptr_t> T& LabelNormalName() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LabelHighlightName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BtnSelect() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& WidgetHighlight() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_Config() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnSelectClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UpdateView(uintptr_t conf) {
		return ((T (*)(InstanceGroupItemView*, uintptr_t))(Il2CppBase() + 0x2CCF054))(this, conf);
	}
	template <typename T = void> T OnBtnSelectClick() {
		return ((T (*)(InstanceGroupItemView*))(Il2CppBase() + 0x2CCF3E4))(this);
	}

};

}
