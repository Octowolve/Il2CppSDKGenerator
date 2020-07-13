#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.LockStep {

class BroadcastEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.LockStep", "BroadcastEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t frames) {
		return ((T (*)(BroadcastEventHandler*, uintptr_t))(Il2CppBase() + 0x46AABDC))(this, frames);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t frames, uintptr_t callback, uintptr_t object) {
		return ((T (*)(BroadcastEventHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x46AAC74))(this, frames, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(BroadcastEventHandler*, uintptr_t))(Il2CppBase() + 0x46AACA0))(this, result);
	}

};

}
