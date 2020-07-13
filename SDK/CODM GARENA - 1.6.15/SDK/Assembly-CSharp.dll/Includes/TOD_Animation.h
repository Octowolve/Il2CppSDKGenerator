#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TODAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TOD_Animation"));
	}

	template <typename T = float> T& WindDegrees() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& WindSpeed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CloudUV() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_CloudUV() {
		return ((T (*)(TODAnimation*))(Il2CppBase() + 0x495F1F4))(this);
	}
	template <typename T = void> T set_CloudUV(uintptr_t value) {
		return ((T (*)(TODAnimation*, uintptr_t))(Il2CppBase() + 0x495F204))(this, value);
	}
	template <typename T = uintptr_t> T get_OffsetUV() {
		return ((T (*)(TODAnimation*))(Il2CppBase() + 0x495F21C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TODAnimation*))(Il2CppBase() + 0x495F360))(this);
	}

};

}
