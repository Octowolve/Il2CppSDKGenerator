#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BattleNetSyncModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BattleNetSyncModule"));
	}

	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_DamageByLocal() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_DamageToLocal() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReconnectNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTouchNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KillInfoDealwith() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T PreInit() {
		return ((T (*)(BattleNetSyncModule*))(Il2CppBase() + 0x372DF9C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattleNetSyncModule*))(Il2CppBase() + 0x372E1D4))(this);
	}
	template <typename T = void> T OnDoDamage(uintptr_t Msg) {
		return ((T (*)(BattleNetSyncModule*, uintptr_t))(Il2CppBase() + 0x372E27C))(this, Msg);
	}
	template <typename T = void> T OnSyncDead(uintptr_t Msg) {
		return ((T (*)(BattleNetSyncModule*, uintptr_t))(Il2CppBase() + 0x372FAC8))(this, Msg);
	}
	template <typename T = void> T OnReconnectNtf(uintptr_t Msg) {
		return ((T (*)(BattleNetSyncModule*, uintptr_t))(Il2CppBase() + 0x3730D44))(this, Msg);
	}
	template <typename T = void> T OnTouchNotify(uintptr_t msg) {
		return ((T (*)(BattleNetSyncModule*, uintptr_t))(Il2CppBase() + 0x3730F1C))(this, msg);
	}
	template <typename T = void> T KillInfoDealwith(uintptr_t DeadMsg) {
		return ((T (*)(BattleNetSyncModule*, uintptr_t))(Il2CppBase() + 0x3730AC8))(this, DeadMsg);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(BattleNetSyncModule*))(Il2CppBase() + 0x37314B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattleNetSyncModule*))(Il2CppBase() + 0x37314C0))(this);
	}

};

}
