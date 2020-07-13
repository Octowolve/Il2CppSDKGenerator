#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Rendering {

class SphericalHarmonicsL2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Rendering", "SphericalHarmonicsL2"));
	}

	template <typename T = float> T& shr0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& shr1() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& shr2() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& shr3() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& shr4() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& shr5() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& shr6() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& shr7() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& shr8() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& shg0() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& shg1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& shg2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& shg3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& shg4() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& shg5() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& shg6() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& shg7() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& shg8() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& shb0() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& shb1() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& shb2() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& shb3() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& shb4() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& shb5() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& shb6() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& shb7() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& shb8() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(SphericalHarmonicsL2*))(Il2CppBase() + 0x4E74DB0))(this);
	}
	template <typename T = void> static T ClearInternal(uintptr_t sh) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E74DAC))(0, sh);
	}
	template <typename T = void> static T INTERNAL_CALL_ClearInternal(uintptr_t sh) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E74DB8))(0, sh);
	}
	template <typename T = void> T AddCubemapLight(uintptr_t cubemap) {
		return ((T (*)(SphericalHarmonicsL2*, uintptr_t))(Il2CppBase() + 0x4E74E5C))(this, cubemap);
	}
	template <typename T = void> static T AddCubemapLightInternal(uintptr_t cubemap, uintptr_t sh) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E74E58))(0, cubemap, sh);
	}
	template <typename T = void> static T INTERNAL_CALL_AddCubemapLightInternal(uintptr_t cubemap, uintptr_t sh) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E74E64))(0, cubemap, sh);
	}
	template <typename T = void> T Evaluate(Il2CppArray<uintptr_t>* directions, Il2CppArray<uintptr_t>* results) {
		return ((T (*)(SphericalHarmonicsL2*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4E74FAC))(this, directions, results);
	}
	template <typename T = float> T get_Item(int32_t rgb, int32_t coefficient) {
		return ((T (*)(SphericalHarmonicsL2*, int32_t, int32_t))(Il2CppBase() + 0x4E751C8))(this, rgb, coefficient);
	}
	template <typename T = void> T set_Item(int32_t rgb, int32_t coefficient, float value) {
		return ((T (*)(SphericalHarmonicsL2*, int32_t, int32_t, float))(Il2CppBase() + 0x4E753F0))(this, rgb, coefficient, value);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(SphericalHarmonicsL2*))(Il2CppBase() + 0x4E755D8))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(SphericalHarmonicsL2*, uintptr_t))(Il2CppBase() + 0x4E7591C))(this, other);
	}
	template <typename T = bool> static T op_Equality(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E756E0))(0, lhs, rhs);
	}

};

}
