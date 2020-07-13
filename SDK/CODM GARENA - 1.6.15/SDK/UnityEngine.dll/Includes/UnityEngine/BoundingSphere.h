#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class BoundingSphere
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "BoundingSphere"));
	}

	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& radius() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
