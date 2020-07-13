#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkBossButcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkBossButcher"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAliveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHuntAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStopHunt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceStopSkillAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPrepareJumpAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayJumpSmashAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCleaverPrepareAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCleaverEndAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDashParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoCombat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayShowBossPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LeaveCombat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(NetworkBossButcher*, uintptr_t))(Il2CppBase() + 0x3EAA1B0))(this, info);
	}
	template <typename T = void> T PlayAliveState() {
		return ((T (*)(NetworkBossButcher*))(Il2CppBase() + 0x3EAAB54))(this);
	}
	template <typename T = void> T PlayHuntAnim(Il2CppVector3 destPos) {
		return ((T (*)(NetworkBossButcher*, Il2CppVector3))(Il2CppBase() + 0x3EAAC20))(this, destPos);
	}
	template <typename T = void> T OnStopHunt() {
		return ((T (*)(NetworkBossButcher*))(Il2CppBase() + 0x3EAAD50))(this);
	}
	template <typename T = void> T ForceStopSkillAnim() {
		return ((T (*)(NetworkBossButcher*))(Il2CppBase() + 0x3EAAE54))(this);
	}
	template <typename T = void> T PlayPrepareJumpAnim() {
		return ((T (*)(NetworkBossButcher*))(Il2CppBase() + 0x3EAAF58))(this);
	}
	template <typename T = void> T PlayJumpSmashAnim(Il2CppVector3 destPos) {
		return ((T (*)(NetworkBossButcher*, Il2CppVector3))(Il2CppBase() + 0x3EAB05C))(this, destPos);
	}
	template <typename T = void> T PlayCleaverPrepareAnim() {
		return ((T (*)(NetworkBossButcher*))(Il2CppBase() + 0x3EAB18C))(this);
	}
	template <typename T = void> T PlayCleaverEndAnim() {
		return ((T (*)(NetworkBossButcher*))(Il2CppBase() + 0x3EAB290))(this);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(NetworkBossButcher*, bool))(Il2CppBase() + 0x3EAB3A4))(this, isHeadShot);
	}
	template <typename T = uintptr_t> T GetDashParam() {
		return ((T (*)(NetworkBossButcher*))(Il2CppBase() + 0x3EAA9B0))(this);
	}
	template <typename T = void> T GotoCombat() {
		return ((T (*)(NetworkBossButcher*))(Il2CppBase() + 0x3EAB4CC))(this);
	}
	template <typename T = uintptr_t> T DelayShowBossPawn() {
		return ((T (*)(NetworkBossButcher*))(Il2CppBase() + 0x3EAB6D8))(this);
	}
	template <typename T = void> T LeaveCombat() {
		return ((T (*)(NetworkBossButcher*))(Il2CppBase() + 0x3EAB7C0))(this);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(NetworkBossButcher*, bool))(Il2CppBase() + 0x3EAB9E4))(this, isHidden);
	}
	template <typename T = void> T xLuaBaseProxy_InitBehaviors(uintptr_t P0) {
		return ((T (*)(NetworkBossButcher*, uintptr_t))(Il2CppBase() + 0x3EABB24))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAliveState() {
		return ((T (*)(NetworkBossButcher*))(Il2CppBase() + 0x3EABB28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(NetworkBossButcher*, bool))(Il2CppBase() + 0x3EABB2C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GotoCombat() {
		return ((T (*)(NetworkBossButcher*))(Il2CppBase() + 0x3EABB30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_LeaveCombat() {
		return ((T (*)(NetworkBossButcher*))(Il2CppBase() + 0x3EABB34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(NetworkBossButcher*, bool))(Il2CppBase() + 0x3EABB38))(this, P0);
	}

};

}
