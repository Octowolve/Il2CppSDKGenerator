#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIPawn"));
	}

	template <typename T = int32_t> T& m_AIPawnType() {
		return *(T*)((uintptr_t)this + 0x9AC);
	}
	template <typename T = int32_t> T& m_MeshAssetID() {
		return *(T*)((uintptr_t)this + 0x9B0);
	}
	template <typename T = float> T& m_Damage() {
		return *(T*)((uintptr_t)this + 0x9B4);
	}
	template <typename T = float> T& m_CorpseLifeTime() {
		return *(T*)((uintptr_t)this + 0x9B8);
	}
	template <typename T = bool> T& bBossKillDid() {
		return *(T*)((uintptr_t)this + 0x9BC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTakeDamageComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBossPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAIInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDamageByLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAIMovementPara() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimationResetTriggerInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRandomAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimationFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimatorPara() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAIPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_ZombieType() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49A93A0))(this);
	}
	template <typename T = uintptr_t> T get_LogicType() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49A93A8))(this);
	}
	template <typename T = int32_t> T get_AIPawnType() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49A93B0))(this);
	}
	template <typename T = bool> T get_ShouldShowPawnNameWhenAimedAt() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49A93B8))(this);
	}
	template <typename T = float> T get_Damage() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49A93C0))(this);
	}
	template <typename T = Il2CppString*> T get_m_FireSndAssetPath() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49A93C8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49A9478))(this);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(AIPawn*, uintptr_t))(Il2CppBase() + 0x49A9538))(this, info);
	}
	template <typename T = uintptr_t> T GetTakeDamageComponentType() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49A970C))(this);
	}
	template <typename T = bool> T IsBossPawn() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49A9808))(this);
	}
	template <typename T = uintptr_t> T GetAIInfo() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49A98A8))(this);
	}
	template <typename T = int32_t> T GetMeshAssetID_3P() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49A99A8))(this);
	}
	template <typename T = bool> T get_BossKillDid() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49A9A48))(this);
	}
	template <typename T = void> T set_BossKillDid(bool value) {
		return ((T (*)(AIPawn*, bool))(Il2CppBase() + 0x49A9A50))(this, value);
	}
	template <typename T = int32_t> T get_MeshAssetId() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49A9A58))(this);
	}
	template <typename T = void> T set_MeshAssetId(int32_t value) {
		return ((T (*)(AIPawn*, int32_t))(Il2CppBase() + 0x49A9A60))(this, value);
	}
	template <typename T = bool> T CheckDamageByLocalPlayer(uintptr_t inDamageInfo) {
		return ((T (*)(AIPawn*, uintptr_t))(Il2CppBase() + 0x49A9A68))(this, inDamageInfo);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(AIPawn*, bool, uintptr_t))(Il2CppBase() + 0x49A9BD0))(this, isHeadShot, damageType);
	}
	template <typename T = void> T DoDestroy() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49A9E08))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49A9EB8))(this);
	}
	template <typename T = void> T SetAIMovementPara(float forwardSpeed, float lateralSpeed) {
		return ((T (*)(AIPawn*, float, float))(Il2CppBase() + 0x49A9F84))(this, forwardSpeed, lateralSpeed);
	}
	template <typename T = void> T SwitchAnimatorController(uintptr_t controller, bool firstPersonAnimator) {
		return ((T (*)(AIPawn*, uintptr_t, bool))(Il2CppBase() + 0x49AA0CC))(this, controller, firstPersonAnimator);
	}
	template <typename T = void> T PlayAnimationResetTriggerInner(int32_t animID, float speed, int32_t resetID) {
		return ((T (*)(AIPawn*, int32_t, float, int32_t))(Il2CppBase() + 0x49AA180))(this, animID, speed, resetID);
	}
	template <typename T = void> T PlayRandomAnimation(Il2CppString* animName, int32_t rand, float speed) {
		return ((T (*)(AIPawn*, Il2CppString*, int32_t, float))(Il2CppBase() + 0x49AA2D8))(this, animName, rand, speed);
	}
	template <typename T = void> T OnAnimationFinished(Il2CppString* animName) {
		return ((T (*)(AIPawn*, Il2CppString*))(Il2CppBase() + 0x49AA424))(this, animName);
	}
	template <typename T = void> T SetAnimatorPara(float deltaTime) {
		return ((T (*)(AIPawn*, float))(Il2CppBase() + 0x49AA4C4))(this, deltaTime);
	}
	template <typename T = bool> T IsAIPawn() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49AA564))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49AA604))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(AIPawn*, uintptr_t))(Il2CppBase() + 0x49AA60C))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetTakeDamageComponentType() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49AA614))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetMeshAssetID_3P() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49AA61C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(AIPawn*, bool, uintptr_t))(Il2CppBase() + 0x49AA624))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49AA62C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchAnimatorController(uintptr_t P0, bool P1) {
		return ((T (*)(AIPawn*, uintptr_t, bool))(Il2CppBase() + 0x49AA634))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAnimationResetTriggerInner(int32_t P0, float P1, int32_t P2) {
		return ((T (*)(AIPawn*, int32_t, float, int32_t))(Il2CppBase() + 0x49AA63C))(this, P0, P1, P2);
	}
	template <typename T = bool> T xLuaBaseProxy_IsAIPawn() {
		return ((T (*)(AIPawn*))(Il2CppBase() + 0x49AA65C))(this);
	}

};

}
