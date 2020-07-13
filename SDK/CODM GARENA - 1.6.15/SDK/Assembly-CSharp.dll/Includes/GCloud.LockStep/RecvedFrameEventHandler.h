#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.LockStep {

class RecvedFrameEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.LockStep", "RecvedFrameEventHandler"));
	}


	template <typename T = void> T Invoke(int32_t numberOfReceivedFrames) {
		return ((T (*)(RecvedFrameEventHandler*, int32_t))(Il2CppBase() + 0x46B1F0C))(this, numberOfReceivedFrames);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t numberOfReceivedFrames, uintptr_t callback, uintptr_t object) {
		return ((T (*)(RecvedFrameEventHandler*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x46B1F7C))(this, numberOfReceivedFrames, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(RecvedFrameEventHandler*, uintptr_t))(Il2CppBase() + 0x46B2038))(this, result);
	}

};

}
