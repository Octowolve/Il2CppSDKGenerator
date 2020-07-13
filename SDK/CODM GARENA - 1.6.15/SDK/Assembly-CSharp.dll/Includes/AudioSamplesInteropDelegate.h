#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioSamplesInteropDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioSamplesInteropDelegate"));
	}


	template <typename T = bool> T Invoke(uint32_t playingID, Il2CppArray<uintptr_t>** samples, uint32_t channelIndex, uint32_t frames) {
		return ((T (*)(AudioSamplesInteropDelegate*, uint32_t, Il2CppArray<uintptr_t>**, uint32_t, uint32_t))(Il2CppBase() + 0x4A23E6C))(this, playingID, samples, channelIndex, frames);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint32_t playingID, Il2CppArray<uintptr_t>** samples, uint32_t channelIndex, uint32_t frames, uintptr_t callback, uintptr_t object) {
		return ((T (*)(AudioSamplesInteropDelegate*, uint32_t, Il2CppArray<uintptr_t>**, uint32_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A23F20))(this, playingID, samples, channelIndex, frames, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(AudioSamplesInteropDelegate*, uintptr_t))(Il2CppBase() + 0x4A24014))(this, result);
	}

};

}
