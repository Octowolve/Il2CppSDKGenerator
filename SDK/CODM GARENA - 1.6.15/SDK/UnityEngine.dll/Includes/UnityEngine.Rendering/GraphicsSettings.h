#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Rendering {

class GraphicsSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Rendering", "GraphicsSettings"));
	}


	template <typename T = bool> static T get_lightsUseLinearIntensity() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E746F0))(0);
	}

};

}
