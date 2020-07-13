#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Motion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Motion"));
	}


	template <typename T = bool> T get_isLooping() {
		return ((T (*)(Motion*))(Il2CppBase() + 0x4AB9D80))(this);
	}

};

}
