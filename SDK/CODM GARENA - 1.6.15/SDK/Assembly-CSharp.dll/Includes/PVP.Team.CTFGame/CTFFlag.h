#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.CTFGame {

class CTFFlag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.CTFGame", "CTFFlag"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& EnemyModelPrefab() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& MyselfModelPrefab() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& EnemyEffect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& MyselfEffect() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ModelInst() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_Camp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& AwayEndTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAwayEndTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideInDeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_Status() {
		return ((T (*)(CTFFlag*))(Il2CppBase() + 0x2B246F0))(this);
	}
	template <typename T = uint32_t> T get_HoldingPlayerID() {
		return ((T (*)(CTFFlag*))(Il2CppBase() + 0x2B24820))(this);
	}
	template <typename T = uintptr_t> T get_Camp() {
		return ((T (*)(CTFFlag*))(Il2CppBase() + 0x2B24950))(this);
	}
	template <typename T = uint32_t> T get_AwayEndTime() {
		return ((T (*)(CTFFlag*))(Il2CppBase() + 0x2B24958))(this);
	}
	template <typename T = void> T set_AwayEndTime(uint32_t value) {
		return ((T (*)(CTFFlag*, uint32_t))(Il2CppBase() + 0x2B24960))(this, value);
	}
	template <typename T = void> T SetAwayEndTime(uint32_t value) {
		return ((T (*)(CTFFlag*, uint32_t))(Il2CppBase() + 0x2B24968))(this, value);
	}
	template <typename T = void> T SetCamp(uintptr_t camp) {
		return ((T (*)(CTFFlag*, uintptr_t))(Il2CppBase() + 0x2B24A20))(this, camp);
	}
	template <typename T = void> T CreateFlag(uint32_t ActorId) {
		return ((T (*)(CTFFlag*, uint32_t))(Il2CppBase() + 0x2B25308))(this, ActorId);
	}
	template <typename T = void> T HideInDeadReplay(bool bHide) {
		return ((T (*)(CTFFlag*, bool))(Il2CppBase() + 0x2B253B0))(this, bHide);
	}

};

}
