#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProMovieCapture {

class CaptureFromCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RenderHeads.Media.AVProMovieCapture", "CaptureFromCamera"));
	}

	template <typename T = uintptr_t> T& _lastCamera() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _contribCameras() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = bool> T& _useContributingCameras() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& _target() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& _targetNativePointer() {
		return *(T*)((uintptr_t)this + 0x148);
	}

	template <typename T = bool> T get_UseContributingCameras() {
		return ((T (*)(CaptureFromCamera*))(Il2CppBase() + 0x38833F8))(this);
	}
	template <typename T = void> T set_UseContributingCameras(bool value) {
		return ((T (*)(CaptureFromCamera*, bool))(Il2CppBase() + 0x3883400))(this, value);
	}
	template <typename T = void> T SetCamera(uintptr_t mainCamera, bool useContributingCameras) {
		return ((T (*)(CaptureFromCamera*, uintptr_t, bool))(Il2CppBase() + 0x3883408))(this, mainCamera, useContributingCameras);
	}
	template <typename T = void> T SetCamera_1(uintptr_t mainCamera, Il2CppArray<uintptr_t>* contributingCameras) {
		return ((T (*)(CaptureFromCamera*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3883CE8))(this, mainCamera, contributingCameras);
	}
	template <typename T = bool> T HasCamera() {
		return ((T (*)(CaptureFromCamera*))(Il2CppBase() + 0x3883CF4))(this);
	}
	template <typename T = bool> T HasContributingCameras() {
		return ((T (*)(CaptureFromCamera*))(Il2CppBase() + 0x3883DA4))(this);
	}
	template <typename T = void> T UpdateFrame() {
		return ((T (*)(CaptureFromCamera*))(Il2CppBase() + 0x3883DD4))(this);
	}
	template <typename T = void> T UpdateTexture() {
		return ((T (*)(CaptureFromCamera*))(Il2CppBase() + 0x3884020))(this);
	}
	template <typename T = void> T UnprepareCapture() {
		return ((T (*)(CaptureFromCamera*))(Il2CppBase() + 0x388477C))(this);
	}
	template <typename T = uintptr_t> T GetPreviewTexture() {
		return ((T (*)(CaptureFromCamera*))(Il2CppBase() + 0x3884880))(this);
	}
	template <typename T = bool> T PrepareCapture() {
		return ((T (*)(CaptureFromCamera*))(Il2CppBase() + 0x3884888))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CaptureFromCamera*))(Il2CppBase() + 0x3884FA0))(this);
	}

};

}
