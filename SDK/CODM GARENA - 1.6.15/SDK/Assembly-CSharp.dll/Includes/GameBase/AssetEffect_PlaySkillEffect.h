#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AssetEffectPlaySkillEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AssetEffect_PlaySkillEffect"));
	}

	template <typename T = Il2CppVector3> T& m_StartPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_Dir() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_TargetPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_Speed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_Effect() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_IsFinished() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& m_Velocity() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& m_CurPos() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_AssetID() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_DelayTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetServerData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadEffectAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T TriggerEffect(Il2CppString* value, bool isStart, uintptr_t target) {
		return ((T (*)(AssetEffectPlaySkillEffect*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B83B94))(this, value, isStart, target);
	}
	template <typename T = void> T SetServerData(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(AssetEffectPlaySkillEffect*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3B8A988))(this, args);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AssetEffectPlaySkillEffect*, float))(Il2CppBase() + 0x3B8AFCC))(this, deltaTime);
	}
	template <typename T = void> T StartEffect() {
		return ((T (*)(AssetEffectPlaySkillEffect*))(Il2CppBase() + 0x3B83730))(this);
	}
	template <typename T = void> T UpdateEffect(float deltaTime) {
		return ((T (*)(AssetEffectPlaySkillEffect*, float))(Il2CppBase() + 0x3B83DC0))(this, deltaTime);
	}
	template <typename T = void> T DestroyEffect() {
		return ((T (*)(AssetEffectPlaySkillEffect*))(Il2CppBase() + 0x3B8AB48))(this);
	}
	template <typename T = void> static T PreLoadEffectAsset(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3B80B5C))(0, value);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffect(Il2CppString* P0, bool P1, uintptr_t P2) {
		return ((T (*)(AssetEffectPlaySkillEffect*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B8B0D8))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SetServerData(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(AssetEffectPlaySkillEffect*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3B8B0F0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AssetEffectPlaySkillEffect*, float))(Il2CppBase() + 0x3B8B0F4))(this, P0);
	}

};

}
