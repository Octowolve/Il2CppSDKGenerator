#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class RomanNumeralConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "RomanNumeralConverter"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_a2r() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> static T a2r(int32_t number) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3ACCE64))(0, number);
	}

};

}
