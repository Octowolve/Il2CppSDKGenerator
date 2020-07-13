#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class LensFlare
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "LensFlare"));
	}


	template <typename T = void> T set_brightness(float value) {
		return ((T (*)(LensFlare*, float))(Il2CppBase() + 0x47A4DC0))(this, value);
	}

};

}
