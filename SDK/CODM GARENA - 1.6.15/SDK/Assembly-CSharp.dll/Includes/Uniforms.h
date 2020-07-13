#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Uniforms
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Uniforms"));
	}

	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_curve() {
		return ((T (*)(Uniforms*))(Il2CppBase() + 0x474CDC0))(this);
	}
	template <typename T = uintptr_t> T get_toeSegmentA() {
		return ((T (*)(Uniforms*))(Il2CppBase() + 0x474CE0C))(this);
	}
	template <typename T = uintptr_t> T get_toeSegmentB() {
		return ((T (*)(Uniforms*))(Il2CppBase() + 0x474CE8C))(this);
	}
	template <typename T = uintptr_t> T get_midSegmentA() {
		return ((T (*)(Uniforms*))(Il2CppBase() + 0x474CF0C))(this);
	}
	template <typename T = uintptr_t> T get_midSegmentB() {
		return ((T (*)(Uniforms*))(Il2CppBase() + 0x474CF8C))(this);
	}
	template <typename T = uintptr_t> T get_shoSegmentA() {
		return ((T (*)(Uniforms*))(Il2CppBase() + 0x474D00C))(this);
	}
	template <typename T = uintptr_t> T get_shoSegmentB() {
		return ((T (*)(Uniforms*))(Il2CppBase() + 0x474D08C))(this);
	}

};

}
