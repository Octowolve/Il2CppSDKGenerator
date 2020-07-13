#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioConfigurationChangeHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "AudioConfigurationChangeHandler"));
	}


	template <typename T = void> T Invoke(bool deviceWasChanged) {
		return ((T (*)(AudioConfigurationChangeHandler*, bool))(Il2CppBase() + 0x469D3EC))(this, deviceWasChanged);
	}
	template <typename T = uintptr_t> T BeginInvoke(bool deviceWasChanged, uintptr_t callback, uintptr_t object) {
		return ((T (*)(AudioConfigurationChangeHandler*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x469D480))(this, deviceWasChanged, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(AudioConfigurationChangeHandler*, uintptr_t))(Il2CppBase() + 0x469D53C))(this, result);
	}

};

}
