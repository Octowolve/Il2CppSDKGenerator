#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class StateChangedEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "StateChangedEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t state, uintptr_t result) {
		return ((T (*)(StateChangedEventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x443A598))(this, state, result);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t state, uintptr_t result, uintptr_t callback, uintptr_t object) {
		return ((T (*)(StateChangedEventHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x443A62C))(this, state, result, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(StateChangedEventHandler*, uintptr_t))(Il2CppBase() + 0x443A6F0))(this, result);
	}

};

}
