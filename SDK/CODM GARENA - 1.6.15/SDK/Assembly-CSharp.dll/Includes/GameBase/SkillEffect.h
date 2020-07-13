#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SkillEffect"));
	}

	template <typename T = bool> T& m_EffectActive() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_EffectValid() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> T& m_Skill() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_EffectIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_SkillEffectConfig() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AssetEffectGroups() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetServerData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDataForAssetEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTriggerEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = bool> T get_EffectActive() {
		return ((T (*)(SkillEffect*))(Il2CppBase() + 0x3083A1C))(this);
	}
	template <typename T = bool> T get_EffectValid() {
		return ((T (*)(SkillEffect*))(Il2CppBase() + 0x3083A24))(this);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t effectType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3083A2C))(0, effectType);
	}
	template <typename T = void> T InitEffect(int32_t index, uintptr_t skill) {
		return ((T (*)(SkillEffect*, int32_t, uintptr_t))(Il2CppBase() + 0x3083EA4))(this, index, skill);
	}
	template <typename T = void> T SetActive(bool value) {
		return ((T (*)(SkillEffect*, bool))(Il2CppBase() + 0x3084150))(this, value);
	}
	template <typename T = void> T StartEffect() {
		return ((T (*)(SkillEffect*))(Il2CppBase() + 0x30841F8))(this);
	}
	template <typename T = void> T SetServerData(Il2CppArray<uintptr_t>* extraCtx) {
		return ((T (*)(SkillEffect*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3084624))(this, extraCtx);
	}
	template <typename T = void> T InitDataForAssetEffect(uintptr_t type, uintptr_t effect) {
		return ((T (*)(SkillEffect*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30846C4))(this, type, effect);
	}
	template <typename T = void> T EndEffect() {
		return ((T (*)(SkillEffect*))(Il2CppBase() + 0x3084778))(this);
	}
	template <typename T = bool> T UseEffect() {
		return ((T (*)(SkillEffect*))(Il2CppBase() + 0x3084924))(this);
	}
	template <typename T = void> T ProcessTriggerEvent(uintptr_t optype, Il2CppArray<uintptr_t>* extraCtx) {
		return ((T (*)(SkillEffect*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30849C4))(this, optype, extraCtx);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SkillEffect*, float))(Il2CppBase() + 0x3084A78))(this, deltaTime);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(SkillEffect*))(Il2CppBase() + 0x3084BB4))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(SkillEffect*, bool))(Il2CppBase() + 0x3084BBC))(this, value);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SkillEffect*))(Il2CppBase() + 0x3084BC4))(this);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(SkillEffect*))(Il2CppBase() + 0x3084D80))(this);
	}

};

}
