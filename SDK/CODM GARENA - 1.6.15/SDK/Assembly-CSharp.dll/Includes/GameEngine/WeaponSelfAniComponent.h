#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponSelfAniComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponSelfAniComponent"));
	}

	template <typename T = uintptr_t> T& m_WeaponAttachment() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_PawnOwner() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_AnimationComponent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateByName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThirdPersonStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThirdPersonStopFireHasSelfImplementation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimationEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalInitWeaponPatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadParamsFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondMuzzleEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAnimationComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeaponSelfAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadWeaponAttachmentModelCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadWeaponAttachmentModelCallBackHasSelfImplementation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedFireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedFireAmmunitionHasSelfImplementation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThirdPersonStartFireHasSelfImplmentation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThirdPersonStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySyncAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableWeaponAttchmentAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimatorToPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanLeanToOneSide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireAnimationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeWeaponFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = void> T Init(uintptr_t inOwner) {
		return ((T (*)(WeaponSelfAniComponent*, uintptr_t))(Il2CppBase() + 0x33A4278))(this, inOwner);
	}
	template <typename T = uintptr_t> static T CreateByName(Il2CppString* typeName, Il2CppString* iniPath, uintptr_t owner, uintptr_t pawnOwner) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x33A43AC))(0, typeName, iniPath, owner, pawnOwner);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t type, Il2CppString* iniPath, uintptr_t owner, uintptr_t pawnOwner) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x33A44CC))(0, type, iniPath, owner, pawnOwner);
	}
	template <typename T = void> T ThirdPersonStopFire(Il2CppString* sIdle, Il2CppString* fireAnimationName) {
		return ((T (*)(WeaponSelfAniComponent*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x33A465C))(this, sIdle, fireAnimationName);
	}
	template <typename T = bool> T ThirdPersonStopFireHasSelfImplementation() {
		return ((T (*)(WeaponSelfAniComponent*))(Il2CppBase() + 0x33A4710))(this);
	}
	template <typename T = void> T OnAnimationEvent(Il2CppString* strEvent) {
		return ((T (*)(WeaponSelfAniComponent*, Il2CppString*))(Il2CppBase() + 0x33A47B0))(this, strEvent);
	}
	template <typename T = void> T InternalInitWeaponPatch() {
		return ((T (*)(WeaponSelfAniComponent*))(Il2CppBase() + 0x33A4850))(this);
	}
	template <typename T = void> T ReadParamsFromConfig() {
		return ((T (*)(WeaponSelfAniComponent*))(Il2CppBase() + 0x33A48E8))(this);
	}
	template <typename T = void> T PlaySecondMuzzleEffect() {
		return ((T (*)(WeaponSelfAniComponent*))(Il2CppBase() + 0x33A4980))(this);
	}
	template <typename T = void> T InitAnimationComponent(uintptr_t loadedMesh) {
		return ((T (*)(WeaponSelfAniComponent*, uintptr_t))(Il2CppBase() + 0x33A4A18))(this, loadedMesh);
	}
	template <typename T = void> T ResetAllTrigger() {
		return ((T (*)(WeaponSelfAniComponent*))(Il2CppBase() + 0x33A4B74))(this);
	}
	template <typename T = void> T InitWeaponSelfAnimatorController() {
		return ((T (*)(WeaponSelfAniComponent*))(Il2CppBase() + 0x33A4C88))(this);
	}
	template <typename T = void> T OnLoadWeaponAttachmentModelCallBack(int32_t loadedMeshAssetID, int32_t fireModeIndex) {
		return ((T (*)(WeaponSelfAniComponent*, int32_t, int32_t))(Il2CppBase() + 0x33A5080))(this, loadedMeshAssetID, fireModeIndex);
	}
	template <typename T = bool> T OnLoadWeaponAttachmentModelCallBackHasSelfImplementation() {
		return ((T (*)(WeaponSelfAniComponent*))(Il2CppBase() + 0x33A5134))(this);
	}
	template <typename T = void> T SimulatedFireAmmunition() {
		return ((T (*)(WeaponSelfAniComponent*))(Il2CppBase() + 0x33A51D4))(this);
	}
	template <typename T = bool> T SimulatedFireAmmunitionHasSelfImplementation() {
		return ((T (*)(WeaponSelfAniComponent*))(Il2CppBase() + 0x33A526C))(this);
	}
	template <typename T = bool> T ThirdPersonStartFireHasSelfImplmentation() {
		return ((T (*)(WeaponSelfAniComponent*))(Il2CppBase() + 0x33A530C))(this);
	}
	template <typename T = void> T ThirdPersonStartFire(int32_t inFireCompIndex) {
		return ((T (*)(WeaponSelfAniComponent*, int32_t))(Il2CppBase() + 0x33A53AC))(this, inFireCompIndex);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponSelfAniComponent*, float))(Il2CppBase() + 0x33A544C))(this, deltaTime);
	}
	template <typename T = void> T PlaySyncAnimation(int32_t animID, float speed, int32_t resetID, bool bRetrigger, bool resetLast) {
		return ((T (*)(WeaponSelfAniComponent*, int32_t, float, int32_t, bool, bool))(Il2CppBase() + 0x33A54EC))(this, animID, speed, resetID, bRetrigger, resetLast);
	}
	template <typename T = bool> T EnableWeaponAttchmentAnimator() {
		return ((T (*)(WeaponSelfAniComponent*))(Il2CppBase() + 0x33A564C))(this);
	}
	template <typename T = uintptr_t> T GetAnimatorToPawn() {
		return ((T (*)(WeaponSelfAniComponent*))(Il2CppBase() + 0x33A56EC))(this);
	}
	template <typename T = bool> T CanLeanToOneSide() {
		return ((T (*)(WeaponSelfAniComponent*))(Il2CppBase() + 0x33A578C))(this);
	}
	template <typename T = Il2CppString*> T GetFireAnimationName(bool isHeavyAttack) {
		return ((T (*)(WeaponSelfAniComponent*, bool))(Il2CppBase() + 0x33A582C))(this, isHeavyAttack);
	}
	template <typename T = void> T ChangeWeaponFireMode(int32_t FireModeIndex) {
		return ((T (*)(WeaponSelfAniComponent*, int32_t))(Il2CppBase() + 0x33A5924))(this, FireModeIndex);
	}

};

}
