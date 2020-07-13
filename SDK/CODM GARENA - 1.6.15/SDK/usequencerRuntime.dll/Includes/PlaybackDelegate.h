#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlaybackDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "", "PlaybackDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t sequencer) {
		return ((T (*)(PlaybackDelegate*, uintptr_t))(Il2CppBase() + 0x486FB38))(this, sequencer);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sequencer, uintptr_t callback, uintptr_t object) {
		return ((T (*)(PlaybackDelegate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4871754))(this, sequencer, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(PlaybackDelegate*, uintptr_t))(Il2CppBase() + 0x4871780))(this, result);
	}

};

}
