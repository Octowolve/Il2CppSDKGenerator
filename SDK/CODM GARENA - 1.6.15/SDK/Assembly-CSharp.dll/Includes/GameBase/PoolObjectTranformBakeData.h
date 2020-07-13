#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PoolObjectTranformBakeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PoolObjectTranformBakeData"));
	}

	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& Pos() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppQuaternion> T& Rot() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
