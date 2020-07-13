#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProcessExtractedFrame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProcessExtractedFrame"));
	}


	template <typename T = void> T Invoke(uintptr_t extractedFrame) {
		return ((T (*)(ProcessExtractedFrame*, uintptr_t))(Il2CppBase() + 0x411FEF4))(this, extractedFrame);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t extractedFrame, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ProcessExtractedFrame*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x41215B4))(this, extractedFrame, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ProcessExtractedFrame*, uintptr_t))(Il2CppBase() + 0x41215E0))(this, result);
	}

};

}
