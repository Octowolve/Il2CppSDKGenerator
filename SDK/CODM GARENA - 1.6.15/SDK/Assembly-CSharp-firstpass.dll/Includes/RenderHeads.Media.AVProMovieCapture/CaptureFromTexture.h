#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProMovieCapture {

class CaptureFromTexture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RenderHeads.Media.AVProMovieCapture", "CaptureFromTexture"));
	}

	template <typename T = bool> T& _manualUpdate() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& _sourceTexture() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& _renderTexture() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& _targetNativePointer() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = bool> T& _isSourceTextureChanged() {
		return *(T*)((uintptr_t)this + 0x148);
	}

	template <typename T = void> T SetSourceTexture(uintptr_t texture) {
		return ((T (*)(CaptureFromTexture*, uintptr_t))(Il2CppBase() + 0x388A7C0))(this, texture);
	}
	template <typename T = void> T UpdateSourceTexture() {
		return ((T (*)(CaptureFromTexture*))(Il2CppBase() + 0x388B048))(this);
	}
	template <typename T = bool> T ShouldCaptureFrame() {
		return ((T (*)(CaptureFromTexture*))(Il2CppBase() + 0x388B054))(this);
	}
	template <typename T = bool> T HasSourceTextureChanged() {
		return ((T (*)(CaptureFromTexture*))(Il2CppBase() + 0x388B120))(this);
	}
	template <typename T = void> T UpdateFrame() {
		return ((T (*)(CaptureFromTexture*))(Il2CppBase() + 0x388B144))(this);
	}
	template <typename T = void> T AccumulateMotionBlur() {
		return ((T (*)(CaptureFromTexture*))(Il2CppBase() + 0x388B450))(this);
	}
	template <typename T = uintptr_t> T GetPreviewTexture() {
		return ((T (*)(CaptureFromTexture*))(Il2CppBase() + 0x388B558))(this);
	}
	template <typename T = bool> T PrepareCapture() {
		return ((T (*)(CaptureFromTexture*))(Il2CppBase() + 0x388B640))(this);
	}
	template <typename T = void> T UnprepareCapture() {
		return ((T (*)(CaptureFromTexture*))(Il2CppBase() + 0x388B900))(this);
	}

};

}
