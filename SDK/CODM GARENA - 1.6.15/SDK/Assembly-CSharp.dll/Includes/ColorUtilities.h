#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ColorUtilities
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ColorUtilities"));
	}

	template <typename T = float> static T& logC_cut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& logC_a() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& logC_b() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& logC_c() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& logC_d() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& logC_e() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& logC_f() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StandardIlluminantY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CIExyToLMS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeColorBalance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ColorToLift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ColorToInverseGamma() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ColorToGain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogCToLinear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LinearToLogC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToHex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToRGBA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = float> static T StandardIlluminantY(float x) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2D2A74C))(0, x);
	}
	template <typename T = Il2CppVector3> static T CIExyToLMS(float x, float y) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x2D2A818))(0, x, y);
	}
	template <typename T = Il2CppVector3> static T ComputeColorBalance(float temperature, float tint) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x2D2A990))(0, temperature, tint);
	}
	template <typename T = Il2CppVector3> static T ColorToLift(uintptr_t color) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D2AB40))(0, color);
	}
	template <typename T = Il2CppVector3> static T ColorToInverseGamma(uintptr_t color) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D2ACC8))(0, color);
	}
	template <typename T = Il2CppVector3> static T ColorToGain(uintptr_t color) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D2AF00))(0, color);
	}
	template <typename T = float> static T LogCToLinear(float x) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2D2B090))(0, x);
	}
	template <typename T = float> static T LinearToLogC(float x) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2D2B1E8))(0, x);
	}
	template <typename T = uint32_t> static T ToHex(uintptr_t c) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D2B338))(0, c);
	}
	template <typename T = uintptr_t> static T ToRGBA(uint32_t hex) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2D2B44C))(0, hex);
	}

};

}
