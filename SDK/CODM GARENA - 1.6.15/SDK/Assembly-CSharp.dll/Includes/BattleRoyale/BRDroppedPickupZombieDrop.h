#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRDroppedPickupZombieDrop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRDroppedPickupZombieDrop"));
	}

	template <typename T = bool> T& bNeedUpdatePosition() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = Il2CppVector3> T& InitialPosition() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& TargetPosition() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& totalTime() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& SpeedX() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& SpeedZ() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& SpeedY() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& G() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppVector3> T& SpeedVec() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppVector3> T& Pos() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& dTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickBoxObserver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_EBRPickUpInfoType() {
		return ((T (*)(BRDroppedPickupZombieDrop*))(Il2CppBase() + 0x18C7260))(this);
	}
	template <typename T = Il2CppVector3> T get_InitialPosition() {
		return ((T (*)(BRDroppedPickupZombieDrop*))(Il2CppBase() + 0x18C7268))(this);
	}
	template <typename T = void> T set_InitialPosition(Il2CppVector3 value) {
		return ((T (*)(BRDroppedPickupZombieDrop*, Il2CppVector3))(Il2CppBase() + 0x18C5E58))(this, value);
	}
	template <typename T = Il2CppVector3> T get_TargetPosition() {
		return ((T (*)(BRDroppedPickupZombieDrop*))(Il2CppBase() + 0x18C727C))(this);
	}
	template <typename T = void> T set_TargetPosition(Il2CppVector3 value) {
		return ((T (*)(BRDroppedPickupZombieDrop*, Il2CppVector3))(Il2CppBase() + 0x18C5E64))(this, value);
	}
	template <typename T = void> T StartMove() {
		return ((T (*)(BRDroppedPickupZombieDrop*))(Il2CppBase() + 0x18C5E70))(this);
	}
	template <typename T = void> T SetPosition(Il2CppVector3 pos) {
		return ((T (*)(BRDroppedPickupZombieDrop*, Il2CppVector3))(Il2CppBase() + 0x18C6014))(this, pos);
	}
	template <typename T = void> T TickMovement() {
		return ((T (*)(BRDroppedPickupZombieDrop*))(Il2CppBase() + 0x18C7290))(this);
	}
	template <typename T = void> T TickBoxObserver() {
		return ((T (*)(BRDroppedPickupZombieDrop*))(Il2CppBase() + 0x18B564C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickMovement() {
		return ((T (*)(BRDroppedPickupZombieDrop*))(Il2CppBase() + 0x18C74C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickBoxObserver() {
		return ((T (*)(BRDroppedPickupZombieDrop*))(Il2CppBase() + 0x18C74C4))(this);
	}

};

}
