#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class FEventCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "FEventCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t inEvent) {
		return ((T (*)(FEventCallback*, uintptr_t))(Il2CppBase() + 0x51BEC0C))(this, inEvent);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t inEvent, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FEventCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x51BECA4))(this, inEvent, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(FEventCallback*, uintptr_t))(Il2CppBase() + 0x51BECD0))(this, result);
	}

};

}
