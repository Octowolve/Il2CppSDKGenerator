#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GamePauseCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GamePauseCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t gamePauseReason, float pauseStartRealTime) {
		return ((T (*)(GamePauseCallback*, uintptr_t, float))(Il2CppBase() + 0x1E8D3F0))(this, gamePauseReason, pauseStartRealTime);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gamePauseReason, float pauseStartRealTime, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GamePauseCallback*, uintptr_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E8D4AC))(this, gamePauseReason, pauseStartRealTime, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(GamePauseCallback*, uintptr_t))(Il2CppBase() + 0x1E8D58C))(this, result);
	}

};

}
