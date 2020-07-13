#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TrainingGame {

class TrainingTargetStatic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TrainingGame", "TrainingTarget_Static"));
	}

	template <typename T = uint32_t> T& m_UID() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& m_Layer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& m_FallDownTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& bActive() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_Animator() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_AnimRoot() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector3> T& m_RelativeLocation() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& bFirstStandUp() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHitImpactTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayStandUpEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFallDownEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Recover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCollidersState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeHitType_DestructibleObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHitByGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T GetHitImpactTarget() {
		return ((T (*)(TrainingTargetStatic*))(Il2CppBase() + 0x3D9149C))(this);
	}
	template <typename T = uint32_t> T get_UID() {
		return ((T (*)(TrainingTargetStatic*))(Il2CppBase() + 0x3D9153C))(this);
	}
	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(TrainingTargetStatic*))(Il2CppBase() + 0x3D91544))(this);
	}
	template <typename T = bool> T get_IsCanDirectAutoFire() {
		return ((T (*)(TrainingTargetStatic*))(Il2CppBase() + 0x3D9154C))(this);
	}
	template <typename T = void> T Init(uint32_t uid, uint32_t actorId, float maxHealth, Il2CppVector3 RelativeLoc) {
		return ((T (*)(TrainingTargetStatic*, uint32_t, uint32_t, float, Il2CppVector3))(Il2CppBase() + 0x3D91554))(this, uid, actorId, maxHealth, RelativeLoc);
	}
	template <typename T = void> T PlayStandUpEffect() {
		return ((T (*)(TrainingTargetStatic*))(Il2CppBase() + 0x3D916FC))(this);
	}
	template <typename T = void> T PlayFallDownEffect() {
		return ((T (*)(TrainingTargetStatic*))(Il2CppBase() + 0x3D91BEC))(this);
	}
	template <typename T = void> T RefreshTarget(uint32_t uid, Il2CppVector3 newLocation) {
		return ((T (*)(TrainingTargetStatic*, uint32_t, Il2CppVector3))(Il2CppBase() + 0x3D910D0))(this, uid, newLocation);
	}
	template <typename T = void> T TakeDamage(uintptr_t damageInfo) {
		return ((T (*)(TrainingTargetStatic*, uintptr_t))(Il2CppBase() + 0x3D91DCC))(this, damageInfo);
	}
	template <typename T = uintptr_t> T Recover() {
		return ((T (*)(TrainingTargetStatic*))(Il2CppBase() + 0x3D91B0C))(this);
	}
	template <typename T = void> T SetCollidersState(bool isEnable) {
		return ((T (*)(TrainingTargetStatic*, bool))(Il2CppBase() + 0x3D9190C))(this, isEnable);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(TrainingTargetStatic*, uintptr_t))(Il2CppBase() + 0x3D91FA4))(this, pawn);
	}
	template <typename T = bool> T get_DisplayImpactEffect() {
		return ((T (*)(TrainingTargetStatic*))(Il2CppBase() + 0x3D9204C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TrainingTargetStatic*))(Il2CppBase() + 0x3D913E0))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(TrainingTargetStatic*))(Il2CppBase() + 0x3D92054))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(TrainingTargetStatic*))(Il2CppBase() + 0x3D920FC))(this);
	}
	template <typename T = bool> T CanBeHitType_DestructibleObject() {
		return ((T (*)(TrainingTargetStatic*))(Il2CppBase() + 0x3D921A4))(this);
	}
	template <typename T = void> T OnHitByGrenade() {
		return ((T (*)(TrainingTargetStatic*))(Il2CppBase() + 0x3D92244))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetHitImpactTarget() {
		return ((T (*)(TrainingTargetStatic*))(Il2CppBase() + 0x3D922E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(TrainingTargetStatic*, uintptr_t))(Il2CppBase() + 0x3D922F0))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(TrainingTargetStatic*, uintptr_t))(Il2CppBase() + 0x3D922F8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(TrainingTargetStatic*))(Il2CppBase() + 0x3D92300))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(TrainingTargetStatic*))(Il2CppBase() + 0x3D92308))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeHitType_DestructibleObject() {
		return ((T (*)(TrainingTargetStatic*))(Il2CppBase() + 0x3D92310))(this);
	}

};

}
