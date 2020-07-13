#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class KillMessageData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "KillMessageData"));
	}

	template <typename T = uintptr_t> T& MessageType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& KillerName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& KillerColor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& DeadName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& DeadColor() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& WeaponSpriteName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& WeaponColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& HeadShot() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& ThroughWall() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = int32_t> T& ContinusKillCount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& JoinInfo() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& IsDying() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& IsSuicide() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = bool> T& IsPoison() {
		return *(T*)((uintptr_t)this + 0x56);
	}
	template <typename T = bool> T& IsKillByZombie() {
		return *(T*)((uintptr_t)this + 0x57);
	}
	template <typename T = bool> T& IsFly() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& DamageType() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& WeaponLevel() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& WeaponID() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& WeaponSkinID() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
