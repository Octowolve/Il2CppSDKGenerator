#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReconCarInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReconCarInfo"));
	}

	template <typename T = Il2CppVector3> T& SrcPos() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppQuaternion> T& Rotation() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
