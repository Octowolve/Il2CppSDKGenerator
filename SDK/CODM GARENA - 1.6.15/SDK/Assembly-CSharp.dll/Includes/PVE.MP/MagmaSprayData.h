#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MagmaSprayData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MagmaSprayData"));
	}

	template <typename T = Il2CppVector3> T& BirthPostion() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
