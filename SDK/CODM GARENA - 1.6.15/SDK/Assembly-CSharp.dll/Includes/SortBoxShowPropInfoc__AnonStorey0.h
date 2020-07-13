#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SortBoxShowPropInfocAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SortBoxShowPropInfo>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& sortResult() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T m__0(uintptr_t param1, uintptr_t param2) {
		return ((T (*)(SortBoxShowPropInfocAnonStorey0*, uintptr_t, uintptr_t))(Il2CppBase() + 0x237D1E8))(this, param1, param2);
	}

};

}
