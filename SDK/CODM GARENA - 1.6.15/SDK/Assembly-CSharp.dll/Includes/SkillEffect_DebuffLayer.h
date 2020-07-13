#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkillEffectDebuffLayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillEffect_DebuffLayer"));
	}

	template <typename T = uintptr_t> T& mCtxData() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTriggerEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ProcessTriggerEvent(uintptr_t optype, Il2CppArray<uintptr_t>* extraCtx) {
		return ((T (*)(SkillEffectDebuffLayer*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3907FA4))(this, optype, extraCtx);
	}
	template <typename T = void> T StartEffect() {
		return ((T (*)(SkillEffectDebuffLayer*))(Il2CppBase() + 0x39081A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessTriggerEvent(uintptr_t P0, Il2CppArray<uintptr_t>* P1) {
		return ((T (*)(SkillEffectDebuffLayer*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3908238))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_StartEffect() {
		return ((T (*)(SkillEffectDebuffLayer*))(Il2CppBase() + 0x3908240))(this);
	}

};

}
