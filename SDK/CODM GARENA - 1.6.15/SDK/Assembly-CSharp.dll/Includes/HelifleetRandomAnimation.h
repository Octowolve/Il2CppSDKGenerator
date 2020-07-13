#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HelifleetRandomAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HelifleetRandomAnimation"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(HelifleetRandomAnimation*))(Il2CppBase() + 0x474F0E8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(HelifleetRandomAnimation*))(Il2CppBase() + 0x474F2D0))(this);
	}

};

}
