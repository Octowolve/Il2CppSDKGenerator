#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillEffectAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SkillEffect_Attribute"));
	}

	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& m_AttributeDic() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_EffectCnt() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTriggerEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAttribute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeClipAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T ProcessTriggerEvent(uintptr_t optype, Il2CppArray<uintptr_t>* extraCtx) {
		return ((T (*)(SkillEffectAttribute*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30857C8))(this, optype, extraCtx);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(SkillEffectAttribute*))(Il2CppBase() + 0x3085D00))(this);
	}
	template <typename T = void> T SetActive(bool value) {
		return ((T (*)(SkillEffectAttribute*, bool))(Il2CppBase() + 0x3085FCC))(this, value);
	}
	template <typename T = void> T UpdateAttribute(int32_t signal, uintptr_t pair) {
		return ((T (*)(SkillEffectAttribute*, int32_t, uintptr_t))(Il2CppBase() + 0x3085AE8))(this, signal, pair);
	}
	template <typename T = void> T ChangeClipAmmoCount(uintptr_t proType, uintptr_t calType, float delta) {
		return ((T (*)(SkillEffectAttribute*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x308627C))(this, proType, calType, delta);
	}
	template <typename T = void> T ChangeProperty(uintptr_t proType, uintptr_t calType, float delta) {
		return ((T (*)(SkillEffectAttribute*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x3086574))(this, proType, calType, delta);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessTriggerEvent(uintptr_t P0, Il2CppArray<uintptr_t>* P1) {
		return ((T (*)(SkillEffectAttribute*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30866E4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnRecycle() {
		return ((T (*)(SkillEffectAttribute*))(Il2CppBase() + 0x30866E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0) {
		return ((T (*)(SkillEffectAttribute*, bool))(Il2CppBase() + 0x30866EC))(this, P0);
	}

};

}
