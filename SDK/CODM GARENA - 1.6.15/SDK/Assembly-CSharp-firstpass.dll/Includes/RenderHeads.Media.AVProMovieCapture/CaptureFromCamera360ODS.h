#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProMovieCapture {

class CaptureFromCamera360ODS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RenderHeads.Media.AVProMovieCapture", "CaptureFromCamera360ODS"));
	}

	template <typename T = uintptr_t> T& _settings() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = int32_t> T& _eyeWidth() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = int32_t> T& _eyeHeight() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& _cameraGroup() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& _leftCameraTop() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& _leftCameraBot() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& _rightCameraTop() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& _rightCameraBot() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& _final() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& _targetNativePointer() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& _finalMaterial() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = int32_t> T& _propSliceCenter() {
		return *(T*)((uintptr_t)this + 0x164);
	}

	template <typename T = uintptr_t> T get_Setup() {
		return ((T (*)(CaptureFromCamera360ODS*))(Il2CppBase() + 0x3887E10))(this);
	}
	template <typename T = void> T SetCamera(uintptr_t camera) {
		return ((T (*)(CaptureFromCamera360ODS*, uintptr_t))(Il2CppBase() + 0x3887E18))(this, camera);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CaptureFromCamera360ODS*))(Il2CppBase() + 0x3887E3C))(this);
	}
	template <typename T = uintptr_t> T CreateEye(uintptr_t camera, Il2CppString* gameObjectName, float yRot, float xOffset, int32_t cameraTargetHeight, int32_t cullingMask, float fov, float aspect, int32_t aalevel) {
		return ((T (*)(CaptureFromCamera360ODS*, uintptr_t, Il2CppString*, float, float, int32_t, int32_t, float, float, int32_t))(Il2CppBase() + 0x3887FE0))(this, camera, gameObjectName, yRot, xOffset, cameraTargetHeight, cullingMask, fov, aspect, aalevel);
	}
	template <typename T = void> T UpdateFrame() {
		return ((T (*)(CaptureFromCamera360ODS*))(Il2CppBase() + 0x38886B4))(this);
	}
	template <typename T = void> T AccumulateMotionBlur() {
		return ((T (*)(CaptureFromCamera360ODS*))(Il2CppBase() + 0x38888E4))(this);
	}
	template <typename T = void> T RenderFrame() {
		return ((T (*)(CaptureFromCamera360ODS*))(Il2CppBase() + 0x3888A48))(this);
	}
	template <typename T = uintptr_t> T GetPreviewTexture() {
		return ((T (*)(CaptureFromCamera360ODS*))(Il2CppBase() + 0x3888EF8))(this);
	}
	template <typename T = bool> T PrepareCapture() {
		return ((T (*)(CaptureFromCamera360ODS*))(Il2CppBase() + 0x3888F40))(this);
	}
	template <typename T = void> static T DestroyEye(uintptr_t camera) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3889C98))(0, camera);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CaptureFromCamera360ODS*))(Il2CppBase() + 0x3889DE4))(this);
	}

};

}
