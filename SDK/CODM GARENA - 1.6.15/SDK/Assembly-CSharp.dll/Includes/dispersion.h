#pragma once
#include <Il2Cpp/Il2Cpp.h>

class dispersion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "dispersion"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_dispersion() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_length() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_N() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_g() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_dispersionTex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getDispersionTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_genDispersionMat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_genDispersionTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_calculateDispersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T getDispersionTex() {
		return ((T (*)(dispersion*))(Il2CppBase() + 0x4177050))(this);
	}
	template <typename T = void> T genDispersionMat() {
		return ((T (*)(dispersion*))(Il2CppBase() + 0x4176CC0))(this);
	}
	template <typename T = void> T genDispersionTex() {
		return ((T (*)(dispersion*))(Il2CppBase() + 0x4176E24))(this);
	}
	template <typename T = float> T calculateDispersion(int32_t n_prime, int32_t m_prime) {
		return ((T (*)(dispersion*, int32_t, int32_t))(Il2CppBase() + 0x41770F0))(this, n_prime, m_prime);
	}

};

}
