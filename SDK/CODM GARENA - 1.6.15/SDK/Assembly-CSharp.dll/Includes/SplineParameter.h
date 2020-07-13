#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SplineParameter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SplineParameter"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Interp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(SplineParameter*))(Il2CppBase() + 0x42EBDBC))(this);
	}
	template <typename T = void> T Interp(uintptr_t from, uintptr_t to, float t) {
		return ((T (*)(SplineParameter*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x42EBE6C))(this, from, to, t);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(SplineParameter*))(Il2CppBase() + 0x42EC05C))(this);
	}

};

}
