#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioSamplesDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioSamplesDelegate"));
	}


	template <typename T = bool> T Invoke(uint32_t playingID, uint32_t channelIndex, Il2CppArray<uintptr_t>* samples) {
		return ((T (*)(AudioSamplesDelegate*, uint32_t, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A2354C))(this, playingID, channelIndex, samples);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint32_t playingID, uint32_t channelIndex, Il2CppArray<uintptr_t>* samples, uintptr_t callback, uintptr_t object) {
		return ((T (*)(AudioSamplesDelegate*, uint32_t, uint32_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A23D28))(this, playingID, channelIndex, samples, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(AudioSamplesDelegate*, uintptr_t))(Il2CppBase() + 0x4A23DFC))(this, result);
	}

};

}
