#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class SwimmingTransitionToSprintState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "SwimmingTransitionToSprintState"));
	}

	template <typename T = bool> T& m_IsHiddenWeapon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_TickTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_TransitionTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_ShouldAttachWeaponToHand() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_TPAttachWeaponTimeRate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SholdShowWeaponInSwim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(SwimmingTransitionToSprintState*))(Il2CppBase() + 0x35A9F24))(this);
	}
	template <typename T = bool> T SholdShowWeaponInSwim(uintptr_t weaponAttachment) {
		return ((T (*)(SwimmingTransitionToSprintState*, uintptr_t))(Il2CppBase() + 0x35AA308))(this, weaponAttachment);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SwimmingTransitionToSprintState*, float))(Il2CppBase() + 0x35AA498))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(SwimmingTransitionToSprintState*))(Il2CppBase() + 0x35AA674))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SwimmingTransitionToSprintState*, float))(Il2CppBase() + 0x35AA678))(this, P0);
	}

};

}
