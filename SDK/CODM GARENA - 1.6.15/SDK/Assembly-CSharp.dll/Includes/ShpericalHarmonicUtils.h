#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShpericalHarmonicUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShpericalHarmonicUtils"));
	}

	template <typename T = float> static T& k_SH_L0_Basis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& k_SH_L1_Basis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& k_SH_L2_mn2n1p1_Basis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& k_SH_L2_0_Basis_mul3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& k_SH_L2_n2_Basis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& k_OneThrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& k_fourPi() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& k_sqrtPi_div_three() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& k_sqrtPi_div_four() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& k_div_four() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& irradianceConvolutionL0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& irradianceConvolutionL1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& irradianceConvolutionL2_4_5_7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& irradianceConvolutionL2_6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& irradianceConvolutionL2_8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EvalSHBasis9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AreaElement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CubemapUv2Dir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProjectCubemap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ProjectCubemap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProjectCubemapFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> static T EvalSHBasis9(Il2CppVector3 dir, Il2CppArray<uintptr_t>* basis) {
		return ((T (*)(void *, Il2CppVector3, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x38DCCFC))(0, dir, basis);
	}
	template <typename T = float> static T AreaElement(float x, float y) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x38DCFD0))(0, x, y);
	}
	template <typename T = void> static T CubemapUv2Dir(Il2CppVector2 _uv, uintptr_t _face, uintptr_t* result) {
		return ((T (*)(void *, Il2CppVector2, uintptr_t, uintptr_t*))(Il2CppBase() + 0x38DD100))(0, _uv, _face, result);
	}
	template <typename T = void> static T ProjectCubemap(uintptr_t src, uintptr_t res) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x38DD30C))(0, src, res);
	}
	template <typename T = uintptr_t> static T ProjectCubemap_1(uintptr_t src) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x38DDC08))(0, src);
	}
	template <typename T = void> static T ProjectCubemapFace(uintptr_t _src, uintptr_t _face, uintptr_t _res, Il2CppArray<uintptr_t>* solidAngle, bool inputIsGammaSpace) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x38DD790))(0, _src, _face, _res, solidAngle, inputIsGammaSpace);
	}

};

}
