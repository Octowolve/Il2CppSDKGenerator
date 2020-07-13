#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SentryGunInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SentryGunInfo"));
	}

	template <typename T = Il2CppVector3> T& Pos() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppQuaternion> T& Rot() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Camp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& SentryGunID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& SentryGun() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Target() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& HasAddMsg() {
		return *(T*)((uintptr_t)this + 0x34);
	}


};

}
