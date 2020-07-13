#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class WheelSetup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "WheelSetup"));
	}

	template <typename T = uintptr_t> T& wheelConfigPrefab() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& wheelLocation() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppVector3> T& additionalOffset() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
