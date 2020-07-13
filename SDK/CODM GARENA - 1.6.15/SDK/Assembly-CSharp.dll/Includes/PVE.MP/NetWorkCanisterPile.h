#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetWorkCanisterPile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetWorkCanisterPile"));
	}

	template <typename T = float> T& VenomEffectBaseRadius() {
		return *(T*)((uintptr_t)this + 0xAB8);
	}
	template <typename T = uintptr_t> T& venomEffect() {
		return *(T*)((uintptr_t)this + 0xABC);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAliveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T PlayAliveState() {
		return ((T (*)(NetWorkCanisterPile*))(Il2CppBase() + 0x3EB8D54))(this);
	}
	template <typename T = void> T OnDie(uint32_t inKillerID, uint64_t KillWeaponID) {
		return ((T (*)(NetWorkCanisterPile*, uint32_t, uint64_t))(Il2CppBase() + 0x3EB8FBC))(this, inKillerID, KillWeaponID);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(NetWorkCanisterPile*, bool, uintptr_t))(Il2CppBase() + 0x3EB9240))(this, isHeadShot, damageType);
	}
	template <typename T = void> static T OnDiem__0(uintptr_t ob) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3EB930C))(0, ob);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAliveState() {
		return ((T (*)(NetWorkCanisterPile*))(Il2CppBase() + 0x3EB93C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDie(uint32_t P0, uint64_t P1) {
		return ((T (*)(NetWorkCanisterPile*, uint32_t, uint64_t))(Il2CppBase() + 0x3EB93CC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(NetWorkCanisterPile*, bool, uintptr_t))(Il2CppBase() + 0x3EB93E4))(this, P0, P1);
	}

};

}
