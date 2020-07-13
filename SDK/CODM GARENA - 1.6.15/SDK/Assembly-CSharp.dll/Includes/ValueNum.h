#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ValueNum
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ValueNum"));
	}

	template <typename T = uintptr_t> T& Number() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Plus() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& FirstWin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetValue(int32_t value, bool firstWin) {
		return ((T (*)(ValueNum*, int32_t, bool))(Il2CppBase() + 0x2987D0C))(this, value, firstWin);
	}

};

}
