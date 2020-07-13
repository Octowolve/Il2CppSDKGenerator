#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PawnRagdollComponentZombie
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PawnRagdollComponent_Zombie"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPuppetMasterAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifyMuscleWeightAsWell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxImpulseMagnitude() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsModelMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRagDollMappingRigidBone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ImpulseStaticMultipler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetPuppetMasterAssetID() {
		return ((T (*)(PawnRagdollComponentZombie*))(Il2CppBase() + 0x16C87CC))(this);
	}
	template <typename T = bool> T ModifyMuscleWeightAsWell() {
		return ((T (*)(PawnRagdollComponentZombie*))(Il2CppBase() + 0x16C8870))(this);
	}
	template <typename T = float> T GetMaxImpulseMagnitude() {
		return ((T (*)(PawnRagdollComponentZombie*))(Il2CppBase() + 0x16C8910))(this);
	}
	template <typename T = bool> T IsModelMatch(uintptr_t root) {
		return ((T (*)(PawnRagdollComponentZombie*, uintptr_t))(Il2CppBase() + 0x16C89B0))(this, root);
	}
	template <typename T = Il2CppString*> T GetRagDollMappingRigidBone(uintptr_t hitGroup) {
		return ((T (*)(PawnRagdollComponentZombie*, uintptr_t))(Il2CppBase() + 0x16C8AA4))(this, hitGroup);
	}
	template <typename T = float> T ImpulseStaticMultipler() {
		return ((T (*)(PawnRagdollComponentZombie*))(Il2CppBase() + 0x16C8CB0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetPuppetMasterAssetID() {
		return ((T (*)(PawnRagdollComponentZombie*))(Il2CppBase() + 0x16C8D50))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ModifyMuscleWeightAsWell() {
		return ((T (*)(PawnRagdollComponentZombie*))(Il2CppBase() + 0x16C8D54))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetMaxImpulseMagnitude() {
		return ((T (*)(PawnRagdollComponentZombie*))(Il2CppBase() + 0x16C8D58))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsModelMatch(uintptr_t P0) {
		return ((T (*)(PawnRagdollComponentZombie*, uintptr_t))(Il2CppBase() + 0x16C8D5C))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetRagDollMappingRigidBone(uintptr_t P0) {
		return ((T (*)(PawnRagdollComponentZombie*, uintptr_t))(Il2CppBase() + 0x16C8D60))(this, P0);
	}
	template <typename T = float> T xLuaBaseProxy_ImpulseStaticMultipler() {
		return ((T (*)(PawnRagdollComponentZombie*))(Il2CppBase() + 0x16C8D64))(this);
	}

};

}
