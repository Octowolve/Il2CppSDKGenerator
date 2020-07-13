#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillEffectPositionExplode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SkillEffect_PositionExplode"));
	}

	template <typename T = uintptr_t> T& ProjectileType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& ExplodePosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_ProjectileCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& m_StartPos() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& m_Dir() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_Speed() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_CurDelayTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_InitialDelayTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_ExistTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& extraCtx() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTriggerEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDataForAssetEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProjectileCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetExplodeCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExplodePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = int32_t> T get_WeaponActorID() {
		return ((T (*)(SkillEffectPositionExplode*))(Il2CppBase() + 0x30874E8))(this);
	}
	template <typename T = uintptr_t> T get_Weapon() {
		return ((T (*)(SkillEffectPositionExplode*))(Il2CppBase() + 0x308759C))(this);
	}
	template <typename T = uintptr_t> T get_WeaponAttachment() {
		return ((T (*)(SkillEffectPositionExplode*))(Il2CppBase() + 0x30876A4))(this);
	}
	template <typename T = void> T InitEffect(int32_t index, uintptr_t skill) {
		return ((T (*)(SkillEffectPositionExplode*, int32_t, uintptr_t))(Il2CppBase() + 0x30877AC))(this, index, skill);
	}
	template <typename T = void> T ProcessTriggerEvent(uintptr_t optype, Il2CppArray<uintptr_t>* extraCtx) {
		return ((T (*)(SkillEffectPositionExplode*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3087AE4))(this, optype, extraCtx);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SkillEffectPositionExplode*, float))(Il2CppBase() + 0x308817C))(this, deltaTime);
	}
	template <typename T = void> T InitDataForAssetEffect(uintptr_t type, uintptr_t assetEffect) {
		return ((T (*)(SkillEffectPositionExplode*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30884E4))(this, type, assetEffect);
	}
	template <typename T = void> T RequestExplode() {
		return ((T (*)(SkillEffectPositionExplode*))(Il2CppBase() + 0x3088270))(this);
	}
	template <typename T = int32_t> T GetProjectileCount() {
		return ((T (*)(SkillEffectPositionExplode*))(Il2CppBase() + 0x3087D4C))(this);
	}
	template <typename T = void> T SetExplodeCount(int32_t count) {
		return ((T (*)(SkillEffectPositionExplode*, int32_t))(Il2CppBase() + 0x3087EB8))(this, count);
	}
	template <typename T = bool> T UseEffect() {
		return ((T (*)(SkillEffectPositionExplode*))(Il2CppBase() + 0x3088B80))(this);
	}
	template <typename T = Il2CppVector3> T GetExplodePosition() {
		return ((T (*)(SkillEffectPositionExplode*))(Il2CppBase() + 0x3088D30))(this);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(SkillEffectPositionExplode*))(Il2CppBase() + 0x30891EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitEffect(int32_t P0, uintptr_t P1) {
		return ((T (*)(SkillEffectPositionExplode*, int32_t, uintptr_t))(Il2CppBase() + 0x3089290))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessTriggerEvent(uintptr_t P0, Il2CppArray<uintptr_t>* P1) {
		return ((T (*)(SkillEffectPositionExplode*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3089294))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SkillEffectPositionExplode*, float))(Il2CppBase() + 0x3089298))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitDataForAssetEffect(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(SkillEffectPositionExplode*, uintptr_t, uintptr_t))(Il2CppBase() + 0x308929C))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_UseEffect() {
		return ((T (*)(SkillEffectPositionExplode*))(Il2CppBase() + 0x30892A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRecycle() {
		return ((T (*)(SkillEffectPositionExplode*))(Il2CppBase() + 0x30892A4))(this);
	}

};

}
