#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ScrollPlayBaseItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ScrollPlayBaseItemView"));
	}

	template <typename T = uintptr_t> T& m_BaseData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_BaseData() {
		return ((T (*)(ScrollPlayBaseItemView*))(Il2CppBase() + 0x447EC94))(this);
	}
	template <typename T = void> T SetItemData(uintptr_t data) {
		return ((T (*)(ScrollPlayBaseItemView*, uintptr_t))(Il2CppBase() + 0x447EC9C))(this, data);
	}

};

}
