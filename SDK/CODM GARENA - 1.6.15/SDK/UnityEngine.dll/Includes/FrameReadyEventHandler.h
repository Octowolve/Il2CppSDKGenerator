#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FrameReadyEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "FrameReadyEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t source, int64_t frameIdx) {
		return ((T (*)(FrameReadyEventHandler*, uintptr_t, int64_t))(Il2CppBase() + 0x4D3D9FC))(this, source, frameIdx);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t source, int64_t frameIdx, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FrameReadyEventHandler*, uintptr_t, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D3DD64))(this, source, frameIdx, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(FrameReadyEventHandler*, uintptr_t))(Il2CppBase() + 0x4D3DE30))(this, result);
	}

};

}
