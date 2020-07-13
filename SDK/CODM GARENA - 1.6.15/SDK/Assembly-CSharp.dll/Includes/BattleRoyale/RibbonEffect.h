#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class RibbonEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "RibbonEffect"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& RibbonEffectLocation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& EffectDuration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RibbonEffects() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroySubcomponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRibbonEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(RibbonEffect*))(Il2CppBase() + 0x3D68574))(this);
	}
	template <typename T = void> T DestroySubcomponent() {
		return ((T (*)(RibbonEffect*))(Il2CppBase() + 0x3D68A28))(this);
	}
	template <typename T = void> T PlayRibbonEffect(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(RibbonEffect*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3D68E68))(this, args);
	}
	template <typename T = void> T Initm__0(uintptr_t effect) {
		return ((T (*)(RibbonEffect*, uintptr_t))(Il2CppBase() + 0x3D69048))(this, effect);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RibbonEffect*))(Il2CppBase() + 0x3D69170))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroySubcomponent() {
		return ((T (*)(RibbonEffect*))(Il2CppBase() + 0x3D69174))(this);
	}

};

}
