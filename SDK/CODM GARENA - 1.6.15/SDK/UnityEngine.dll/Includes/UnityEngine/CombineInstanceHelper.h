#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class CombineInstanceHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "CombineInstanceHelper"));
	}


	template <typename T = uintptr_t> static T GetMesh(int32_t instanceID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4DA0C08))(0, instanceID);
	}

};

}
