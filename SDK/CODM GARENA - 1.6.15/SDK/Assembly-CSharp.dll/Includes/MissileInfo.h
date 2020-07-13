#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MissileInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MissileInfo"));
	}

	template <typename T = Il2CppVector3> T& InitPos() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& InitVel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Camp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Missile() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
