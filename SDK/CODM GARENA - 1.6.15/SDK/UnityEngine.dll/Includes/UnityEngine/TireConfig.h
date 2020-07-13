#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class TireConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "TireConfig"));
	}


	template <typename T = float> T get_FrictionScale() {
		return ((T (*)(TireConfig*))(Il2CppBase() + 0x4D34720))(this);
	}

};

}
