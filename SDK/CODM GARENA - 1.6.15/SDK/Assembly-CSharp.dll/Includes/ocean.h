#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ocean
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ocean"));
	}

	template <typename T = bool> T& geometry() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& g() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& N() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Nplus1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& A() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& w() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& length() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& h_tilde() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& h_tilde_slopex() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& h_tilde_slopez() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& h_tilde_dx() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& h_tilde_dz() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& fft() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& vertices() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& indices() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& indices_count() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_dispersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_phillips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_hTilde_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_hTilde() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_h_D_and_n() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_evaluateWaves() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_evaluateWavesFFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ocean*))(Il2CppBase() + 0x3EE4948))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ocean*))(Il2CppBase() + 0x3EE549C))(this);
	}
	template <typename T = void> T init(int32_t _N, float _A, Il2CppVector2 _w, float _length, bool _geometry) {
		return ((T (*)(ocean*, int32_t, float, Il2CppVector2, float, bool))(Il2CppBase() + 0x3EE4A40))(this, _N, _A, _w, _length, _geometry);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(ocean*))(Il2CppBase() + 0x3EE6E8C))(this);
	}
	template <typename T = float> T dispersion(int32_t n_prime, int32_t m_prime) {
		return ((T (*)(ocean*, int32_t, int32_t))(Il2CppBase() + 0x3EE72D0))(this, n_prime, m_prime);
	}
	template <typename T = float> T phillips(int32_t n_prime, int32_t m_prime) {
		return ((T (*)(ocean*, int32_t, int32_t))(Il2CppBase() + 0x3EE746C))(this, n_prime, m_prime);
	}
	template <typename T = Il2CppVector2> T hTilde_0(int32_t n_prime, int32_t m_prime) {
		return ((T (*)(ocean*, int32_t, int32_t))(Il2CppBase() + 0x3EE69C4))(this, n_prime, m_prime);
	}
	template <typename T = Il2CppVector2> T hTilde(float t, int32_t n_prime, int32_t m_prime) {
		return ((T (*)(ocean*, float, int32_t, int32_t))(Il2CppBase() + 0x3EE7874))(this, t, n_prime, m_prime);
	}
	template <typename T = uintptr_t> T h_D_and_n(Il2CppVector2 x, float t) {
		return ((T (*)(ocean*, Il2CppVector2, float))(Il2CppBase() + 0x3EE7D04))(this, x, t);
	}
	template <typename T = void> T evaluateWaves(float t) {
		return ((T (*)(ocean*, float))(Il2CppBase() + 0x3EE82A0))(this, t);
	}
	template <typename T = void> T evaluateWavesFFT(float t) {
		return ((T (*)(ocean*, float))(Il2CppBase() + 0x3EE5550))(this, t);
	}

};

}
