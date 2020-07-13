#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ZiZi.Graphics.Sampling.VanDerCorput {

class VanDerCorputSequence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ZiZi.Graphics.Sampling.VanDerCorput", "VanDerCorputSequence"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Value() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateSequence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = double> static T Value(uint32_t index) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x4DD76E0))(0, index);
	}
	template <typename T = void> static T GenerateSequence(int32_t startIndex, int32_t endIndex, uintptr_t result) {
		return ((T (*)(void *, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x4DD9564))(0, startIndex, endIndex, result);
	}

};

}
