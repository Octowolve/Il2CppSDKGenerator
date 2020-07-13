#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioFormatInteropDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioFormatInteropDelegate"));
	}


	template <typename T = void> T Invoke(uint32_t playingID, uintptr_t format) {
		return ((T (*)(AudioFormatInteropDelegate*, uint32_t, uintptr_t))(Il2CppBase() + 0x4A23B60))(this, playingID, format);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint32_t playingID, uintptr_t format, uintptr_t callback, uintptr_t object) {
		return ((T (*)(AudioFormatInteropDelegate*, uint32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A23BF4))(this, playingID, format, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(AudioFormatInteropDelegate*, uintptr_t))(Il2CppBase() + 0x4A23CD4))(this, result);
	}

};

}
