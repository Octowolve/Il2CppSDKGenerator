#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.ShootOutGame {

class ShootOutCampHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.ShootOutGame", "ShootOutCampHUD"));
	}

	template <typename T = uintptr_t> T& campInfoRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& campSprite() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& campLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& campTargetLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& campSwitchRoot() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& preCampSprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& curCampSprite() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& campSwitchLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_showCampDuration() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_showTargetDuration() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& m_duration() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& m_showCamp() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCampSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayShowCampSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCampTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T ShowCamp(Il2CppString* campSpriteNameStr, Il2CppString* campNameStr, Il2CppString* campTargetStr) {
		return ((T (*)(ShootOutCampHUD*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x34BFBD8))(this, campSpriteNameStr, campNameStr, campTargetStr);
	}
	template <typename T = void> T ShowCampSwitch(Il2CppString* preCampSpriteName, Il2CppString* curCampSpriteName, Il2CppString* campSwitchLabelStr) {
		return ((T (*)(ShootOutCampHUD*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x34BFD94))(this, preCampSpriteName, curCampSpriteName, campSwitchLabelStr);
	}
	template <typename T = void> T DelayShowCampSwitch() {
		return ((T (*)(ShootOutCampHUD*))(Il2CppBase() + 0x34BFEFC))(this);
	}
	template <typename T = void> T ShowCampTarget() {
		return ((T (*)(ShootOutCampHUD*))(Il2CppBase() + 0x34C0014))(this);
	}
	template <typename T = void> T ResetCamp() {
		return ((T (*)(ShootOutCampHUD*))(Il2CppBase() + 0x34C0140))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ShootOutCampHUD*))(Il2CppBase() + 0x34C0248))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ShootOutCampHUD*))(Il2CppBase() + 0x34C0258))(this);
	}

};

}
