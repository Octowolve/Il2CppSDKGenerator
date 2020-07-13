#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class SpringJoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "SpringJoint"));
	}


	template <typename T = float> T get_spring() {
		return ((T (*)(SpringJoint*))(Il2CppBase() + 0x4E858B4))(this);
	}
	template <typename T = float> T get_damper() {
		return ((T (*)(SpringJoint*))(Il2CppBase() + 0x4E8594C))(this);
	}
	template <typename T = float> T get_maxDistance() {
		return ((T (*)(SpringJoint*))(Il2CppBase() + 0x4E859E4))(this);
	}

};

}
