#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class PawnVirtualSoundHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "PawnVirtualSoundHandle"));
	}

	template <typename T = uintptr_t> T& m_SoundEmitterInternal() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_WeaponFireSoundLogic() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_curWeaponID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_curWeaponActorID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_WeaponFireComponentData() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_PlayerInfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_IsActivate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_ProcessFireCmdHandle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_PawnVirtualSoundData() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& _HasInitSoundEmitter() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_IsFiring() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = float> T& _LastFireTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& DELAY_DEINIT_TIME() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSoundLogicAndEmmiter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePawnSoundEmitter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateFireSoundLogic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeInitSoundLogicAndEmmiter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeInitSoundLogic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeInitPawnSoundEmitter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayClearFireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFireByDeleteVirtualData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedFireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsC4Weapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPurifierWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uintptr_t> T get_SoundEmitterInternal() {
		return ((T (*)(PawnVirtualSoundHandle*))(Il2CppBase() + 0x3D5C754))(this);
	}
	template <typename T = bool> T get_IsFiring() {
		return ((T (*)(PawnVirtualSoundHandle*))(Il2CppBase() + 0x3D5C75C))(this);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t playerInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D5C764))(0, playerInfo);
	}
	template <typename T = void> T Init(uintptr_t playerInfo) {
		return ((T (*)(PawnVirtualSoundHandle*, uintptr_t))(Il2CppBase() + 0x3D5CA24))(this, playerInfo);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PawnVirtualSoundHandle*))(Il2CppBase() + 0x3D5CB88))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(PawnVirtualSoundHandle*))(Il2CppBase() + 0x3D5CD28))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(PawnVirtualSoundHandle*))(Il2CppBase() + 0x3D5CE00))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(PawnVirtualSoundHandle*))(Il2CppBase() + 0x3D5CEB0))(this);
	}
	template <typename T = void> T CreateSoundLogicAndEmmiter() {
		return ((T (*)(PawnVirtualSoundHandle*))(Il2CppBase() + 0x3D5D02C))(this);
	}
	template <typename T = void> T CreatePawnSoundEmitter() {
		return ((T (*)(PawnVirtualSoundHandle*))(Il2CppBase() + 0x3D5D0F8))(this);
	}
	template <typename T = void> T CreateFireSoundLogic(int32_t weaponID, int32_t weaponActorID) {
		return ((T (*)(PawnVirtualSoundHandle*, int32_t, int32_t))(Il2CppBase() + 0x3D5D35C))(this, weaponID, weaponActorID);
	}
	template <typename T = void> T DeInitSoundLogicAndEmmiter() {
		return ((T (*)(PawnVirtualSoundHandle*))(Il2CppBase() + 0x3D5CC7C))(this);
	}
	template <typename T = void> T DeInitSoundLogic() {
		return ((T (*)(PawnVirtualSoundHandle*))(Il2CppBase() + 0x3D5D954))(this);
	}
	template <typename T = void> T DeInitPawnSoundEmitter() {
		return ((T (*)(PawnVirtualSoundHandle*))(Il2CppBase() + 0x3D5D820))(this);
	}
	template <typename T = void> T OnSyncSwitchWeapon() {
		return ((T (*)(PawnVirtualSoundHandle*))(Il2CppBase() + 0x3D5D9F8))(this);
	}
	template <typename T = void> T OnSyncStartFire(uintptr_t Msg) {
		return ((T (*)(PawnVirtualSoundHandle*, uintptr_t))(Il2CppBase() + 0x3D5DBC8))(this, Msg);
	}
	template <typename T = void> T DelayClearFireAmmunition() {
		return ((T (*)(PawnVirtualSoundHandle*))(Il2CppBase() + 0x3D5E200))(this);
	}
	template <typename T = void> T StopFireByDeleteVirtualData() {
		return ((T (*)(PawnVirtualSoundHandle*))(Il2CppBase() + 0x3D5DAF4))(this);
	}
	template <typename T = void> T OnSyncStopFire(uintptr_t Msg) {
		return ((T (*)(PawnVirtualSoundHandle*, uintptr_t))(Il2CppBase() + 0x3D5E2A4))(this, Msg);
	}
	template <typename T = void> T OnSyncDead() {
		return ((T (*)(PawnVirtualSoundHandle*))(Il2CppBase() + 0x3D5E3E0))(this);
	}
	template <typename T = void> T SimulatedFireAmmunition() {
		return ((T (*)(PawnVirtualSoundHandle*))(Il2CppBase() + 0x3D5DF44))(this);
	}
	template <typename T = bool> T IsC4Weapon() {
		return ((T (*)(PawnVirtualSoundHandle*))(Il2CppBase() + 0x3D5E018))(this);
	}
	template <typename T = bool> T IsPurifierWeapon() {
		return ((T (*)(PawnVirtualSoundHandle*))(Il2CppBase() + 0x3D5E100))(this);
	}

};

}
