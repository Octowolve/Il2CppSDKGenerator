#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class AIMovePathNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "AIMovePathNode"));
	}

	template <typename T = Il2CppVector3> T& DestPoint() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& DesiredReachTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& SpecialMoveType() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
