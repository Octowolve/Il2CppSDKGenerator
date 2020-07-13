#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Lut2DBakeUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Lut2DBakeUtil"));
	}

	template <typename T = uintptr_t> static T& mLut2DBakerMat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& k_Lut2DSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& k_Lut3DSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& m_HableCurve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& m_GradingCurves() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& m_Pixels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T Bake(uintptr_t settings, uintptr_t rt) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x41C4FB4))(0, settings, rt);
	}
	template <typename T = void> static T Release() {
		return ((T (*)(void *))(Il2CppBase() + 0x41C6138))(0);
	}
	template <typename T = int32_t> static T GetPass() {
		return ((T (*)(void *))(Il2CppBase() + 0x41C6130))(0);
	}
	template <typename T = void> static T Blit(uintptr_t cb, uintptr_t rt) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x41C6214))(0, cb, rt);
	}
	template <typename T = uintptr_t> static T GetCurveTexture(bool hdr, uintptr_t settings) {
		return ((T (*)(void *, bool, uintptr_t))(Il2CppBase() + 0x41C63DC))(0, hdr, settings);
	}
	template <typename T = uintptr_t> static T GetCurveFormat() {
		return ((T (*)(void *))(Il2CppBase() + 0x41C6A14))(0);
	}
	template <typename T = uintptr_t> static T CreateLut() {
		return ((T (*)(void *))(Il2CppBase() + 0x41C5130))(0);
	}
	template <typename T = uintptr_t> static T GetLutFormat() {
		return ((T (*)(void *))(Il2CppBase() + 0x41C6A40))(0);
	}
	template <typename T = void> static T UpdateParam(uintptr_t settings) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41C52C0))(0, settings);
	}

};

}
