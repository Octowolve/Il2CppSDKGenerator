#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PVPPawnTopName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PVPPawnTopName"));
	}

	template <typename T = uintptr_t> T& TeamProgressBar() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& WeaponLevelSprite() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& bLastWeaponLvlShow() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponLevelSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustLevelSpriteLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBloodValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init(uintptr_t owner) {
		return ((T (*)(PVPPawnTopName*, uintptr_t))(Il2CppBase() + 0x2DCB42C))(this, owner);
	}
	template <typename T = void> T UpdateWeaponLevelSprite() {
		return ((T (*)(PVPPawnTopName*))(Il2CppBase() + 0x2DD5F70))(this);
	}
	template <typename T = void> T AdjustLevelSpriteLocation() {
		return ((T (*)(PVPPawnTopName*))(Il2CppBase() + 0x2DD618C))(this);
	}
	template <typename T = void> T SetBloodValue(float crtHealth, float maxHealth) {
		return ((T (*)(PVPPawnTopName*, float, float))(Il2CppBase() + 0x2DD65CC))(this, crtHealth, maxHealth);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(PVPPawnTopName*, uintptr_t))(Il2CppBase() + 0x2DD6748))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetBloodValue(float P0, float P1) {
		return ((T (*)(PVPPawnTopName*, float, float))(Il2CppBase() + 0x2DD6750))(this, P0, P1);
	}

};

}
