#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.LockStep {

class StateChangedEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.LockStep", "StateChangedEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t state, uintptr_t result) {
		return ((T (*)(StateChangedEventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x46B06A8))(this, state, result);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t state, uintptr_t result, uintptr_t callback, uintptr_t object) {
		return ((T (*)(StateChangedEventHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x46B2438))(this, state, result, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(StateChangedEventHandler*, uintptr_t))(Il2CppBase() + 0x46B24FC))(this, result);
	}

};

}
