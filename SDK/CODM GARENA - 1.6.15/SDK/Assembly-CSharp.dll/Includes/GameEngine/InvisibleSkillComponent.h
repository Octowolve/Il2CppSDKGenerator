#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class InvisibleSkillComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "InvisibleSkillComponent"));
	}

	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayInvisibleSwitchEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayInvisibleSwitchEndEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayInvisibleRibbonEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayInvisibleSwitchSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayInvisibleSwitchEndSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayKeepingInvisibleSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayStopInvisibleSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInvisibleEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideInvisibleEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInvisibleEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T PlayInvisibleSwitchEffect(bool attachToPawn) {
		return ((T (*)(InvisibleSkillComponent*, bool))(Il2CppBase() + 0x2475C18))(this, attachToPawn);
	}
	template <typename T = void> T PlayInvisibleSwitchEndEffect(bool attachToPawn) {
		return ((T (*)(InvisibleSkillComponent*, bool))(Il2CppBase() + 0x2475EB8))(this, attachToPawn);
	}
	template <typename T = void> T PlayInvisibleRibbonEffect(bool attachToPawn, float fLifeTime) {
		return ((T (*)(InvisibleSkillComponent*, bool, float))(Il2CppBase() + 0x247614C))(this, attachToPawn, fLifeTime);
	}
	template <typename T = void> T PlayInvisibleSwitchSound(bool isFirstPersonView) {
		return ((T (*)(InvisibleSkillComponent*, bool))(Il2CppBase() + 0x24763C8))(this, isFirstPersonView);
	}
	template <typename T = void> T PlayInvisibleSwitchEndSound(bool isFirstPersonView) {
		return ((T (*)(InvisibleSkillComponent*, bool))(Il2CppBase() + 0x24765B8))(this, isFirstPersonView);
	}
	template <typename T = void> T PlayKeepingInvisibleSound() {
		return ((T (*)(InvisibleSkillComponent*))(Il2CppBase() + 0x2476940))(this);
	}
	template <typename T = void> T PlayStopInvisibleSound() {
		return ((T (*)(InvisibleSkillComponent*))(Il2CppBase() + 0x24767BC))(this);
	}
	template <typename T = bool> T get_m_IsShowingInvisibleEffect() {
		return ((T (*)(InvisibleSkillComponent*))(Il2CppBase() + 0x2476AC4))(this);
	}
	template <typename T = void> T ShowInvisibleEffect() {
		return ((T (*)(InvisibleSkillComponent*))(Il2CppBase() + 0x2476B04))(this);
	}
	template <typename T = void> T HideInvisibleEffect() {
		return ((T (*)(InvisibleSkillComponent*))(Il2CppBase() + 0x2476C30))(this);
	}
	template <typename T = void> T RefreshInvisibleEffect() {
		return ((T (*)(InvisibleSkillComponent*))(Il2CppBase() + 0x2476D18))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(InvisibleSkillComponent*, float))(Il2CppBase() + 0x2477000))(this, deltaTime);
	}
	template <typename T = void> T OnPawnDead() {
		return ((T (*)(InvisibleSkillComponent*))(Il2CppBase() + 0x24770BC))(this);
	}
	template <typename T = void> static T PlayInvisibleSwitchEffectm__0(uintptr_t switchEffect) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x247733C))(0, switchEffect);
	}
	template <typename T = void> static T PlayInvisibleSwitchEndEffectm__1(uintptr_t switchEndEffect) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2477418))(0, switchEndEffect);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(InvisibleSkillComponent*, float))(Il2CppBase() + 0x24774F4))(this, P0);
	}

};

}
