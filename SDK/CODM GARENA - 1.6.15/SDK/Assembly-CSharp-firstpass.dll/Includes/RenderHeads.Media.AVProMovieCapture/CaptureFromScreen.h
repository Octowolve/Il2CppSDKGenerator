#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProMovieCapture {

class CaptureFromScreen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RenderHeads.Media.AVProMovieCapture", "CaptureFromScreen"));
	}

	template <typename T = uintptr_t> T& _waitForEndOfFrame() {
		return *(T*)((uintptr_t)this + 0x138);
	}

	template <typename T = bool> T PrepareCapture() {
		return ((T (*)(CaptureFromScreen*))(Il2CppBase() + 0x388A114))(this);
	}
	template <typename T = void> T UnprepareCapture() {
		return ((T (*)(CaptureFromScreen*))(Il2CppBase() + 0x388A38C))(this);
	}
	template <typename T = uintptr_t> T FinalRenderCapture() {
		return ((T (*)(CaptureFromScreen*))(Il2CppBase() + 0x388A39C))(this);
	}
	template <typename T = void> T UpdateFrame() {
		return ((T (*)(CaptureFromScreen*))(Il2CppBase() + 0x388A448))(this);
	}

};

}
