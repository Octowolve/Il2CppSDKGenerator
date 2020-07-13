#pragma once
#include <Il2Cpp/Il2Cpp.h>

class htilde
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "htilde"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_htile0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_htilde0mkconj() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_htile0Tex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_htilde0mkconjTex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_mat_htildeAndSlope() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_dispersion() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_length() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_N() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_g() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& m_w() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_A() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_slopeTex() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_updateSlopeTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_genSlopeTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_releaseSlopeTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getSlopeTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getHtilde0Tex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_genMaterial_htildeAndSlopeAndPassUniform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_genHtilde0Andhtilde0mkconj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_genHtilde0Tex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_genHtilde0mkconjTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_phillips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_hTilde_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T updateSlopeTex(float t) {
		return ((T (*)(htilde*, float))(Il2CppBase() + 0x4756D04))(this, t);
	}
	template <typename T = void> T genSlopeTex() {
		return ((T (*)(htilde*))(Il2CppBase() + 0x4756978))(this);
	}
	template <typename T = void> T releaseSlopeTex() {
		return ((T (*)(htilde*))(Il2CppBase() + 0x4756EA4))(this);
	}
	template <typename T = uintptr_t> T getSlopeTex() {
		return ((T (*)(htilde*))(Il2CppBase() + 0x4756FB0))(this);
	}
	template <typename T = uintptr_t> T getHtilde0Tex() {
		return ((T (*)(htilde*))(Il2CppBase() + 0x4757050))(this);
	}
	template <typename T = void> T genMaterial_htildeAndSlopeAndPassUniform() {
		return ((T (*)(htilde*))(Il2CppBase() + 0x4756AE0))(this);
	}
	template <typename T = void> T genHtilde0Andhtilde0mkconj() {
		return ((T (*)(htilde*))(Il2CppBase() + 0x4756204))(this);
	}
	template <typename T = void> T genHtilde0Tex() {
		return ((T (*)(htilde*))(Il2CppBase() + 0x4756470))(this);
	}
	template <typename T = void> T genHtilde0mkconjTex() {
		return ((T (*)(htilde*))(Il2CppBase() + 0x47566F4))(this);
	}
	template <typename T = float> T phillips(int32_t n_prime, int32_t m_prime) {
		return ((T (*)(htilde*, int32_t, int32_t))(Il2CppBase() + 0x47572C4))(this, n_prime, m_prime);
	}
	template <typename T = Il2CppVector2> T hTilde_0(int32_t n_prime, int32_t m_prime) {
		return ((T (*)(htilde*, int32_t, int32_t))(Il2CppBase() + 0x47570F0))(this, n_prime, m_prime);
	}

};

}
