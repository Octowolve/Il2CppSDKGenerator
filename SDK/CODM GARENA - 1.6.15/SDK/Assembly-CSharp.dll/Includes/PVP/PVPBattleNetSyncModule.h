#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPBattleNetSyncModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPBattleNetSyncModule"));
	}

	template <typename T = uintptr_t> T& m_CahcedPawn() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_CacheDeadReplayManager() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBRSpectEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInMissileControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_MyPawn() {
		return ((T (*)(PVPBattleNetSyncModule*))(Il2CppBase() + 0x2ADA868))(this);
	}
	template <typename T = uintptr_t> T get_DeadReplayManager() {
		return ((T (*)(PVPBattleNetSyncModule*))(Il2CppBase() + 0x2ADA974))(this);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(PVPBattleNetSyncModule*))(Il2CppBase() + 0x2ADAA88))(this);
	}
	template <typename T = void> T OnDoDamage(uintptr_t Msg) {
		return ((T (*)(PVPBattleNetSyncModule*, uintptr_t))(Il2CppBase() + 0x2ADAB30))(this, Msg);
	}
	template <typename T = void> T CheckBRSpectEnemy(uintptr_t deadMsg) {
		return ((T (*)(PVPBattleNetSyncModule*, uintptr_t))(Il2CppBase() + 0x2ADABE4))(this, deadMsg);
	}
	template <typename T = void> T OnSyncDead(uintptr_t Msg) {
		return ((T (*)(PVPBattleNetSyncModule*, uintptr_t))(Il2CppBase() + 0x2ADAE10))(this, Msg);
	}
	template <typename T = bool> T IsInMissileControl() {
		return ((T (*)(PVPBattleNetSyncModule*))(Il2CppBase() + 0x2ADB290))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(PVPBattleNetSyncModule*))(Il2CppBase() + 0x2ADB3B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDoDamage(uintptr_t P0) {
		return ((T (*)(PVPBattleNetSyncModule*, uintptr_t))(Il2CppBase() + 0x2ADB3B8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncDead(uintptr_t P0) {
		return ((T (*)(PVPBattleNetSyncModule*, uintptr_t))(Il2CppBase() + 0x2ADB3C0))(this, P0);
	}

};

}
