#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GrenadeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GrenadeInfo"));
	}

	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& FlyPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& Velocity() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& HasAddProjMsg() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& HasSyncThrowMsg() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = bool> T& HasSyncFlyMsg() {
		return *(T*)((uintptr_t)this + 0x2E);
	}
	template <typename T = float> T& ObserveTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& StartFireTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& Target() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& ViewTarget() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& Grenade() {
		return *(T*)((uintptr_t)this + 0x40);
	}


};

}
