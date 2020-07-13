#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FixedAirbornePropPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FixedAirbornePropPawn"));
	}

	template <typename T = uintptr_t> T& m_SmokeEffect() {
		return *(T*)((uintptr_t)this + 0xA84);
	}
	template <typename T = bool> T& m_IsLoadingSmokeEffect() {
		return *(T*)((uintptr_t)this + 0xA88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateParts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLockActionBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLauncherPartState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RefreshLauncherPartState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadSmokeEffectEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideSmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T OnDisable() {
		return ((T (*)(FixedAirbornePropPawn*))(Il2CppBase() + 0x31E3338))(this);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(FixedAirbornePropPawn*, uintptr_t))(Il2CppBase() + 0x31E3564))(this, pawn);
	}
	template <typename T = bool> T IsCanUse(uint32_t playerId) {
		return ((T (*)(FixedAirbornePropPawn*, uint32_t))(Il2CppBase() + 0x31E360C))(this, playerId);
	}
	template <typename T = void> T InitState() {
		return ((T (*)(FixedAirbornePropPawn*))(Il2CppBase() + 0x31E36B4))(this);
	}
	template <typename T = void> T CreateParts(Il2CppArray<uintptr_t>* ExtraInfo, unsigned char ExtraLen) {
		return ((T (*)(FixedAirbornePropPawn*, Il2CppArray<uintptr_t>*, unsigned char))(Il2CppBase() + 0x31E38DC))(this, ExtraInfo, ExtraLen);
	}
	template <typename T = void> T OnLockActionBegin() {
		return ((T (*)(FixedAirbornePropPawn*))(Il2CppBase() + 0x31E39BC))(this);
	}
	template <typename T = void> T RefreshLauncherPartState(uintptr_t airborneExtParam) {
		return ((T (*)(FixedAirbornePropPawn*, uintptr_t))(Il2CppBase() + 0x31E3A54))(this, airborneExtParam);
	}
	template <typename T = void> T RefreshLauncherPartState_1(int32_t idx, int32_t actorId, bool isUsable) {
		return ((T (*)(FixedAirbornePropPawn*, int32_t, int32_t, bool))(Il2CppBase() + 0x31E3BC8))(this, idx, actorId, isUsable);
	}
	template <typename T = void> T ShowSmokeEffect() {
		return ((T (*)(FixedAirbornePropPawn*))(Il2CppBase() + 0x31E3CEC))(this);
	}
	template <typename T = void> T OnLoadSmokeEffectEnd(int32_t assetId, uintptr_t arg) {
		return ((T (*)(FixedAirbornePropPawn*, int32_t, uintptr_t))(Il2CppBase() + 0x31E3EA4))(this, assetId, arg);
	}
	template <typename T = void> T HideSmokeEffect() {
		return ((T (*)(FixedAirbornePropPawn*))(Il2CppBase() + 0x31E33E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(FixedAirbornePropPawn*))(Il2CppBase() + 0x31E4140))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(FixedAirbornePropPawn*, uintptr_t))(Il2CppBase() + 0x31E4148))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCanUse(uint32_t P0) {
		return ((T (*)(FixedAirbornePropPawn*, uint32_t))(Il2CppBase() + 0x31E4150))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitState() {
		return ((T (*)(FixedAirbornePropPawn*))(Il2CppBase() + 0x31E4158))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateParts(Il2CppArray<uintptr_t>* P0, unsigned char P1) {
		return ((T (*)(FixedAirbornePropPawn*, Il2CppArray<uintptr_t>*, unsigned char))(Il2CppBase() + 0x31E4160))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnLockActionBegin() {
		return ((T (*)(FixedAirbornePropPawn*))(Il2CppBase() + 0x31E4168))(this);
	}

};

}
