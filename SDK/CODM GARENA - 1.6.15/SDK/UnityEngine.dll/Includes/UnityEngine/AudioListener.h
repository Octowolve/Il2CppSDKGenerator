#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AudioListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AudioListener"));
	}


	template <typename T = void> static T set_volume(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x469D06C))(0, value);
	}

};

}
