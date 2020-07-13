#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkBossCerberus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkBossCerberus"));
	}

	template <typename T = Il2CppVector3> T& headScaleFactor() {
		return *(T*)((uintptr_t)this + 0xADC);
	}
	template <typename T = Il2CppVector3> T& leftHeadOrigScale() {
		return *(T*)((uintptr_t)this + 0xAE8);
	}
	template <typename T = Il2CppVector3> T& rightHeadOrigScale() {
		return *(T*)((uintptr_t)this + 0xAF4);
	}
	template <typename T = uintptr_t> T& leftHead() {
		return *(T*)((uintptr_t)this + 0xB00);
	}
	template <typename T = uintptr_t> T& rightHead() {
		return *(T*)((uintptr_t)this + 0xB04);
	}
	template <typename T = uintptr_t> T& rageEffect() {
		return *(T*)((uintptr_t)this + 0xB08);
	}
	template <typename T = bool> T& tripleHeadState() {
		return *(T*)((uintptr_t)this + 0xB0C);
	}
	template <typename T = bool> T& m_BeginDie() {
		return *(T*)((uintptr_t)this + 0xB0D);
	}
	template <typename T = float> T& m_DownTimeSum() {
		return *(T*)((uintptr_t)this + 0xB10);
	}
	template <typename T = float> T& m_DelayDownTimeSum() {
		return *(T*)((uintptr_t)this + 0xB14);
	}
	template <typename T = bool> T& bHasBoardcast50Notify() {
		return *(T*)((uintptr_t)this + 0xB18);
	}
	template <typename T = bool> T& bHasBoardcast10Notify() {
		return *(T*)((uintptr_t)this + 0xB19);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarLoadCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Mutate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Rage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoCombat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LeaveCombat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStopHunt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHuntAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAliveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDashParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncHeadState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftHeadState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMiddleHeadState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRightHeadState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(NetworkBossCerberus*, uintptr_t))(Il2CppBase() + 0x3EABDA0))(this, info);
	}
	template <typename T = void> T OnAvatarLoadCompleted() {
		return ((T (*)(NetworkBossCerberus*))(Il2CppBase() + 0x3EAC5C4))(this);
	}
	template <typename T = void> T Mutate() {
		return ((T (*)(NetworkBossCerberus*))(Il2CppBase() + 0x3EACC54))(this);
	}
	template <typename T = void> T Rage() {
		return ((T (*)(NetworkBossCerberus*))(Il2CppBase() + 0x3EAD05C))(this);
	}
	template <typename T = void> T GotoCombat() {
		return ((T (*)(NetworkBossCerberus*))(Il2CppBase() + 0x3EAD3B8))(this);
	}
	template <typename T = void> T LeaveCombat() {
		return ((T (*)(NetworkBossCerberus*))(Il2CppBase() + 0x3EAD664))(this);
	}
	template <typename T = void> T DestroyComponent() {
		return ((T (*)(NetworkBossCerberus*))(Il2CppBase() + 0x3EAD88C))(this);
	}
	template <typename T = void> T OnStopHunt() {
		return ((T (*)(NetworkBossCerberus*))(Il2CppBase() + 0x3EAD93C))(this);
	}
	template <typename T = void> T PlayHuntAnim(Il2CppVector3 destPos) {
		return ((T (*)(NetworkBossCerberus*, Il2CppVector3))(Il2CppBase() + 0x3EADA40))(this, destPos);
	}
	template <typename T = void> T PlayAliveState() {
		return ((T (*)(NetworkBossCerberus*))(Il2CppBase() + 0x3EADD18))(this);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(NetworkBossCerberus*, bool))(Il2CppBase() + 0x3EADE1C))(this, isHeadShot);
	}
	template <typename T = uintptr_t> T GetDashParam() {
		return ((T (*)(NetworkBossCerberus*))(Il2CppBase() + 0x3EAC438))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(NetworkBossCerberus*, float))(Il2CppBase() + 0x3EAE3E8))(this, deltaTime);
	}
	template <typename T = void> T OnTakeDamage(uintptr_t damageInfo) {
		return ((T (*)(NetworkBossCerberus*, uintptr_t))(Il2CppBase() + 0x3EAE5C0))(this, damageInfo);
	}
	template <typename T = void> T SyncHeadState(uint32_t headState) {
		return ((T (*)(NetworkBossCerberus*, uint32_t))(Il2CppBase() + 0x3EAEA50))(this, headState);
	}
	template <typename T = void> T SetLeftHeadState(bool downState) {
		return ((T (*)(NetworkBossCerberus*, bool))(Il2CppBase() + 0x3EAEB20))(this, downState);
	}
	template <typename T = void> T SetMiddleHeadState(bool downState) {
		return ((T (*)(NetworkBossCerberus*, bool))(Il2CppBase() + 0x3EAEC54))(this, downState);
	}
	template <typename T = void> T SetRightHeadState(bool downState) {
		return ((T (*)(NetworkBossCerberus*, bool))(Il2CppBase() + 0x3EAED88))(this, downState);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(NetworkBossCerberus*))(Il2CppBase() + 0x3EAEEBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitBehaviors(uintptr_t P0) {
		return ((T (*)(NetworkBossCerberus*, uintptr_t))(Il2CppBase() + 0x3EAF08C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnAvatarLoadCompleted() {
		return ((T (*)(NetworkBossCerberus*))(Il2CppBase() + 0x3EAF090))(this);
	}
	template <typename T = void> T xLuaBaseProxy_GotoCombat() {
		return ((T (*)(NetworkBossCerberus*))(Il2CppBase() + 0x3EAF094))(this);
	}
	template <typename T = void> T xLuaBaseProxy_LeaveCombat() {
		return ((T (*)(NetworkBossCerberus*))(Il2CppBase() + 0x3EAF098))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyComponent() {
		return ((T (*)(NetworkBossCerberus*))(Il2CppBase() + 0x3EAF09C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAliveState() {
		return ((T (*)(NetworkBossCerberus*))(Il2CppBase() + 0x3EAF0A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(NetworkBossCerberus*, bool))(Il2CppBase() + 0x3EAF0A8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(NetworkBossCerberus*, float))(Il2CppBase() + 0x3EAF0AC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTakeDamage(uintptr_t P0) {
		return ((T (*)(NetworkBossCerberus*, uintptr_t))(Il2CppBase() + 0x3EAF0B0))(this, P0);
	}

};

}
