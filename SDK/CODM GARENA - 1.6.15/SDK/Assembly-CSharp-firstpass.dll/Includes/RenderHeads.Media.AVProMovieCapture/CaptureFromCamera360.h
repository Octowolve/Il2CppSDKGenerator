#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProMovieCapture {

class CaptureFromCamera360
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RenderHeads.Media.AVProMovieCapture", "CaptureFromCamera360"));
	}

	template <typename T = int32_t> T& _cubemapResolution() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = int32_t> T& _cubemapDepth() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = bool> T& _supportGUI() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = bool> T& _supportCameraRotation() {
		return *(T*)((uintptr_t)this + 0x141);
	}
	template <typename T = bool> T& _render180Degrees() {
		return *(T*)((uintptr_t)this + 0x142);
	}
	template <typename T = uintptr_t> T& _stereoRendering() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = float> T& _ipd() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& _camera() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& _faceTarget() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& _blitMaterial() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& _cubemapToEquirectangularMaterial() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& _cubeTarget() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& _finalTarget() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& _targetNativePointer() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = int32_t> T& _propFlipX() {
		return *(T*)((uintptr_t)this + 0x168);
	}

	template <typename T = uintptr_t> T GetCubemapRenderingMethod() {
		return ((T (*)(CaptureFromCamera360*))(Il2CppBase() + 0x3885188))(this);
	}
	template <typename T = void> T SetCamera(uintptr_t camera) {
		return ((T (*)(CaptureFromCamera360*, uintptr_t))(Il2CppBase() + 0x38851BC))(this, camera);
	}
	template <typename T = void> T UpdateFrame() {
		return ((T (*)(CaptureFromCamera360*))(Il2CppBase() + 0x38851C4))(this);
	}
	template <typename T = void> static T ClearCubemap(uintptr_t texture, uintptr_t color) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x38858C8))(0, texture, color);
	}
	template <typename T = void> T RenderCubemapToEquiRect(uintptr_t cubemap, uintptr_t target, bool supportRotation, Il2CppQuaternion rotation, bool isEyeLeft) {
		return ((T (*)(CaptureFromCamera360*, uintptr_t, uintptr_t, bool, Il2CppQuaternion, bool))(Il2CppBase() + 0x3885B08))(this, cubemap, target, supportRotation, rotation, isEyeLeft);
	}
	template <typename T = void> T UpdateTexture() {
		return ((T (*)(CaptureFromCamera360*))(Il2CppBase() + 0x38855D8))(this);
	}
	template <typename T = void> T RenderCameraToCubemap(uintptr_t camera, uintptr_t cubemapTarget) {
		return ((T (*)(CaptureFromCamera360*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3885D40))(this, camera, cubemapTarget);
	}
	template <typename T = void> T AccumulateMotionBlur() {
		return ((T (*)(CaptureFromCamera360*))(Il2CppBase() + 0x3885480))(this);
	}
	template <typename T = bool> T PrepareCapture() {
		return ((T (*)(CaptureFromCamera360*))(Il2CppBase() + 0x38866E0))(this);
	}
	template <typename T = uintptr_t> T GetPreviewTexture() {
		return ((T (*)(CaptureFromCamera360*))(Il2CppBase() + 0x38876E8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CaptureFromCamera360*))(Il2CppBase() + 0x3887730))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CaptureFromCamera360*))(Il2CppBase() + 0x38879DC))(this);
	}

};

}
