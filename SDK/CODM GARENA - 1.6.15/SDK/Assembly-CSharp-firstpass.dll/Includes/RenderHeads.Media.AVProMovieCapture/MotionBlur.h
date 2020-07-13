#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProMovieCapture {

class MotionBlur
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RenderHeads.Media.AVProMovieCapture", "MotionBlur"));
	}

	template <typename T = uintptr_t> T& _format() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _numSamples() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _accum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _lastComp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _addMaterial() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _divMaterial() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _frameCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _targetWidth() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _targetHeight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& _isDirty() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& _propNumSamples() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& _propWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& IsFrameAccumulated() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = float> T& _bias() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& _total() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T get_IsFrameAccumulated() {
		return ((T (*)(MotionBlur*))(Il2CppBase() + 0x3884018))(this);
	}
	template <typename T = void> T set_IsFrameAccumulated(bool value) {
		return ((T (*)(MotionBlur*, bool))(Il2CppBase() + 0x3891F8C))(this, value);
	}
	template <typename T = int32_t> T get_NumSamples() {
		return ((T (*)(MotionBlur*))(Il2CppBase() + 0x3891F94))(this);
	}
	template <typename T = void> T set_NumSamples(int32_t value) {
		return ((T (*)(MotionBlur*, int32_t))(Il2CppBase() + 0x3891F9C))(this, value);
	}
	template <typename T = int32_t> T get_FrameCount() {
		return ((T (*)(MotionBlur*))(Il2CppBase() + 0x38920E0))(this);
	}
	template <typename T = uintptr_t> T get_FinalTexture() {
		return ((T (*)(MotionBlur*))(Il2CppBase() + 0x38844E4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MotionBlur*))(Il2CppBase() + 0x38920E8))(this);
	}
	template <typename T = void> T SetTargetSize(int32_t width, int32_t height) {
		return ((T (*)(MotionBlur*, int32_t, int32_t))(Il2CppBase() + 0x38921D0))(this, width, height);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MotionBlur*))(Il2CppBase() + 0x38921F8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(MotionBlur*))(Il2CppBase() + 0x38925EC))(this);
	}
	template <typename T = void> T Setup() {
		return ((T (*)(MotionBlur*))(Il2CppBase() + 0x38921FC))(this);
	}
	template <typename T = void> T ClearAccumulation() {
		return ((T (*)(MotionBlur*))(Il2CppBase() + 0x38925FC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(MotionBlur*))(Il2CppBase() + 0x3892678))(this);
	}
	template <typename T = void> T OnNumSamplesChanged() {
		return ((T (*)(MotionBlur*))(Il2CppBase() + 0x3891FA4))(this);
	}
	template <typename T = float> static T LerpUnclamped(float a, float b, float t) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x3892984))(0, a, b, t);
	}
	template <typename T = void> T ApplyWeighting() {
		return ((T (*)(MotionBlur*))(Il2CppBase() + 0x38929A4))(this);
	}
	template <typename T = void> T Accumulate(uintptr_t src) {
		return ((T (*)(MotionBlur*, uintptr_t))(Il2CppBase() + 0x3886578))(this, src);
	}
	template <typename T = void> T OnRenderImage(uintptr_t src, uintptr_t dst) {
		return ((T (*)(MotionBlur*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3892B14))(this, src, dst);
	}

};

}
