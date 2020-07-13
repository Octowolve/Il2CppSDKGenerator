#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFireComponentShadowBladeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFireComponent_ShadowBladeData"));
	}

	template <typename T = float> T& MaxAttackDistance() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = float> T& MaxSprintDistance() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& SprintDuration() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& DelayMeleeHitTime() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AniAttackRate() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AniEffectRate_Root() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EffectAssetIDArray_Root() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AniEffectRate_Spine() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EffectAssetIDArray_Spine() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = int32_t> T& MaxTargetCount() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppVector3> T& CameraOffset() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(WeaponFireComponentShadowBladeData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C3FA88))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(WeaponFireComponentShadowBladeData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C400C8))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
