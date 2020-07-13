#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VoicePlayFlow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VoicePlayFlow"));
	}


	template <typename T = void> T Invoke(bool voiceNeedPlay) {
		return ((T (*)(VoicePlayFlow*, bool))(Il2CppBase() + 0x4BCA6F4))(this, voiceNeedPlay);
	}
	template <typename T = uintptr_t> T BeginInvoke(bool voiceNeedPlay, uintptr_t callback, uintptr_t object) {
		return ((T (*)(VoicePlayFlow*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BCA764))(this, voiceNeedPlay, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(VoicePlayFlow*, uintptr_t))(Il2CppBase() + 0x4BCA820))(this, result);
	}

};

}
