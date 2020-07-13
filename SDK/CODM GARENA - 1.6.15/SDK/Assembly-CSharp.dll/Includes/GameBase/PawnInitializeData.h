#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PawnInitializeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PawnInitializeData"));
	}

	template <typename T = uintptr_t> T& Camp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Role() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ViewType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& OwnerPlayerID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& RoleID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Health() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& MaxHealth() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& IsClientFakePawn() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& PhysicsState() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& SkinID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
