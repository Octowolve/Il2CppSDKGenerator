#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MatchGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MatchGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActorInfoRegFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LuaActorInfoRegFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleInfoRegFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponInfoRegFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponPartInfoRegFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadBanks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T ActorInfoRegFunc(uintptr_t InActorInfo) {
		return ((T (*)(MatchGameBuilder*, uintptr_t))(Il2CppBase() + 0x19BB340))(this, InActorInfo);
	}
	template <typename T = void> T LuaActorInfoRegFunc(uintptr_t InActorInfo) {
		return ((T (*)(MatchGameBuilder*, uintptr_t))(Il2CppBase() + 0x19BB5CC))(this, InActorInfo);
	}
	template <typename T = void> T VehicleInfoRegFunc(uintptr_t InActorInfo) {
		return ((T (*)(MatchGameBuilder*, uintptr_t))(Il2CppBase() + 0x19BB944))(this, InActorInfo);
	}
	template <typename T = void> T AddActorInfo(uintptr_t InActorInfo, uintptr_t actorType, uintptr_t assetID, bool spawnFromPool) {
		return ((T (*)(MatchGameBuilder*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1E7DF74))(this, InActorInfo, actorType, assetID, spawnFromPool);
	}
	template <typename T = void> T WeaponInfoRegFunc(uintptr_t InActorInfo) {
		return ((T (*)(MatchGameBuilder*, uintptr_t))(Il2CppBase() + 0x19BBC44))(this, InActorInfo);
	}
	template <typename T = void> T WeaponPartInfoRegFunc(uintptr_t InActorInfo) {
		return ((T (*)(MatchGameBuilder*, uintptr_t))(Il2CppBase() + 0x19BC2A0))(this, InActorInfo);
	}
	template <typename T = void> T LoadBanks() {
		return ((T (*)(MatchGameBuilder*))(Il2CppBase() + 0x19BC42C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ActorInfoRegFunc(uintptr_t P0) {
		return ((T (*)(MatchGameBuilder*, uintptr_t))(Il2CppBase() + 0x19BC54C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_VehicleInfoRegFunc(uintptr_t P0) {
		return ((T (*)(MatchGameBuilder*, uintptr_t))(Il2CppBase() + 0x19BC554))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_WeaponInfoRegFunc(uintptr_t P0) {
		return ((T (*)(MatchGameBuilder*, uintptr_t))(Il2CppBase() + 0x19BC55C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_WeaponPartInfoRegFunc(uintptr_t P0) {
		return ((T (*)(MatchGameBuilder*, uintptr_t))(Il2CppBase() + 0x19BC564))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_LoadBanks() {
		return ((T (*)(MatchGameBuilder*))(Il2CppBase() + 0x19BC56C))(this);
	}

};

}
