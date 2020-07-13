#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IntParameter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntParameter"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Interp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Interp(int32_t from, int32_t to, float t) {
		return ((T (*)(IntParameter*, int32_t, int32_t, float))(Il2CppBase() + 0x317E6DC))(this, from, to, t);
	}

};

}
