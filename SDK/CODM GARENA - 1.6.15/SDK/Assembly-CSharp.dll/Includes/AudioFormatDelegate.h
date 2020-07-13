#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioFormatDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioFormatDelegate"));
	}


	template <typename T = void> T Invoke(uint32_t playingID, uintptr_t format) {
		return ((T (*)(AudioFormatDelegate*, uint32_t, uintptr_t))(Il2CppBase() + 0x4A235F4))(this, playingID, format);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint32_t playingID, uintptr_t format, uintptr_t callback, uintptr_t object) {
		return ((T (*)(AudioFormatDelegate*, uint32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A23A7C))(this, playingID, format, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(AudioFormatDelegate*, uintptr_t))(Il2CppBase() + 0x4A23B40))(this, result);
	}

};

}
