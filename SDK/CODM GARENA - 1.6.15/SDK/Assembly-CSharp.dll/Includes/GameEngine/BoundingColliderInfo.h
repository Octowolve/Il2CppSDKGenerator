#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BoundingColliderInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BoundingColliderInfo"));
	}

	template <typename T = Il2CppVector3> T& CenterOffset() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& Extent() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
