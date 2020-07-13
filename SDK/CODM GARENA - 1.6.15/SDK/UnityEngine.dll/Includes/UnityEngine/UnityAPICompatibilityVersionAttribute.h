#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class UnityAPICompatibilityVersionAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "UnityAPICompatibilityVersionAttribute"));
	}

	template <typename T = Il2CppString*> T& _version() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
