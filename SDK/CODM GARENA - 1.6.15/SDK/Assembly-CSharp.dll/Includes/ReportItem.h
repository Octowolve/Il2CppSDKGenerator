#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReportItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReportItem"));
	}

	template <typename T = uintptr_t> T& CheckBox() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ToggleObj() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& DescText() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T set_ItemType(uintptr_t value) {
		return ((T (*)(ReportItem*, uintptr_t))(Il2CppBase() + 0x3AC28BC))(this, value);
	}
	template <typename T = uintptr_t> T get_ItemType() {
		return ((T (*)(ReportItem*))(Il2CppBase() + 0x3ABE8BC))(this);
	}

};

}
