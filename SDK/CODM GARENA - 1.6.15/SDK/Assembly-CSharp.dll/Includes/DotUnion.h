#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DotUnion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DotUnion"));
	}

	template <typename T = uintptr_t> T& High() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Normal() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Show(bool show) {
		return ((T (*)(DotUnion*, bool))(Il2CppBase() + 0x406355C))(this, show);
	}
	template <typename T = void> T Set(bool high) {
		return ((T (*)(DotUnion*, bool))(Il2CppBase() + 0x4063650))(this, high);
	}

};

}
