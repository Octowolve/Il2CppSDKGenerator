#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Behaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Behaviour"));
	}


	template <typename T = bool> T get_enabled() {
		return ((T (*)(Behaviour*))(Il2CppBase() + 0x469E364))(this);
	}
	template <typename T = void> T set_enabled(bool value) {
		return ((T (*)(Behaviour*, bool))(Il2CppBase() + 0x469E3FC))(this, value);
	}
	template <typename T = bool> T get_isActiveAndEnabled() {
		return ((T (*)(Behaviour*))(Il2CppBase() + 0x469E49C))(this);
	}

};

}
