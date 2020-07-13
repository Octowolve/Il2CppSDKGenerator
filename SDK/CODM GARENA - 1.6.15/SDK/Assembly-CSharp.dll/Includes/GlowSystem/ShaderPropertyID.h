#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GlowSystem {

class ShaderPropertyID
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GlowSystem", "ShaderPropertyID"));
	}

	template <typename T = int32_t> static T& _MainTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& _Color() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& _Cutoff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& _Intensity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& _ZTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& _StencilRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& _Cull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& _GlowBlur1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& _GlowBlur2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& _GlowBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = int32_t> static T& _GlowBufferTexelSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = int32_t> static T& _GlowEdgeWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = int32_t> static T& _GlowBlurred() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = int32_t> static T& _GlowBlurOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = int32_t> static T& _GlowZWrite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = int32_t> static T& _GlowDepthOffsetFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = int32_t> static T& _GlowDepthOffsetUnits() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = bool> static T& initialized() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = int32_t> static T get__MainTex() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E21940))(0);
	}
	template <typename T = void> static T set__MainTex(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3E219F0))(0, value);
	}
	template <typename T = int32_t> static T get__Color() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E1F840))(0);
	}
	template <typename T = void> static T set__Color(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3E21AA4))(0, value);
	}
	template <typename T = int32_t> static T get__Cutoff() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E21B58))(0);
	}
	template <typename T = void> static T set__Cutoff(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3E21C08))(0, value);
	}
	template <typename T = int32_t> static T get__Intensity() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E17858))(0);
	}
	template <typename T = void> static T set__Intensity(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3E21CBC))(0, value);
	}
	template <typename T = int32_t> static T get__ZTest() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E1D370))(0);
	}
	template <typename T = void> static T set__ZTest(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3E21D70))(0, value);
	}
	template <typename T = int32_t> static T get__StencilRef() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E1D4F8))(0);
	}
	template <typename T = void> static T set__StencilRef(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3E21E24))(0, value);
	}
	template <typename T = int32_t> static T get__Cull() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E21ED8))(0);
	}
	template <typename T = void> static T set__Cull(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3E21F88))(0, value);
	}
	template <typename T = int32_t> static T get__GlowBlur1() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E1AAC0))(0);
	}
	template <typename T = void> static T set__GlowBlur1(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3E2203C))(0, value);
	}
	template <typename T = int32_t> static T get__GlowBlur2() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E1AB70))(0);
	}
	template <typename T = void> static T set__GlowBlur2(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3E220F0))(0, value);
	}
	template <typename T = int32_t> static T get__GlowBuffer() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E221A4))(0);
	}
	template <typename T = void> static T set__GlowBuffer(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3E22254))(0, value);
	}
	template <typename T = int32_t> static T get__GlowBufferTexelSize() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E22308))(0);
	}
	template <typename T = void> static T set__GlowBufferTexelSize(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3E223B8))(0, value);
	}
	template <typename T = int32_t> static T get__GlowEdgeWidth() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E2246C))(0);
	}
	template <typename T = void> static T set__GlowEdgeWidth(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3E2251C))(0, value);
	}
	template <typename T = int32_t> static T get__GlowBlurred() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E1ACD0))(0);
	}
	template <typename T = void> static T set__GlowBlurred(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3E225D0))(0, value);
	}
	template <typename T = int32_t> static T get__GlowBlurOffset() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E1AC20))(0);
	}
	template <typename T = void> static T set__GlowBlurOffset(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3E22684))(0, value);
	}
	template <typename T = int32_t> static T get__GlowZWrite() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E202B8))(0);
	}
	template <typename T = void> static T set__GlowZWrite(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3E22738))(0, value);
	}
	template <typename T = int32_t> static T get__GlowDepthOffsetFactor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E20530))(0);
	}
	template <typename T = void> static T set__GlowDepthOffsetFactor(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3E227EC))(0, value);
	}
	template <typename T = int32_t> static T get__GlowDepthOffsetUnits() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E207A8))(0);
	}
	template <typename T = void> static T set__GlowDepthOffsetUnits(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3E228A0))(0, value);
	}
	template <typename T = void> static T Initialize() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E19068))(0);
	}

};

}
