#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotifyMusicPlayInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotifyMusicPlayInfo"));
	}


	template <typename T = void> T Invoke(bool bPlay, int32_t index, float timeElapsed) {
		return ((T (*)(NotifyMusicPlayInfo*, bool, int32_t, float))(Il2CppBase() + 0x3D445CC))(this, bPlay, index, timeElapsed);
	}
	template <typename T = uintptr_t> T BeginInvoke(bool bPlay, int32_t index, float timeElapsed, uintptr_t callback, uintptr_t object) {
		return ((T (*)(NotifyMusicPlayInfo*, bool, int32_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D44EC4))(this, bPlay, index, timeElapsed, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(NotifyMusicPlayInfo*, uintptr_t))(Il2CppBase() + 0x3D44FC0))(this, result);
	}

};

}
