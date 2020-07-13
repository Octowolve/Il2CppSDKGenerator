#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SentryGunTopFlagHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SentryGunTopFlagHud"));
	}

	template <typename T = uintptr_t> T& m_owner() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_transform() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_mainCameraTransform() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& scaleA() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector3> T& m_cacheScale() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SenterGunIcon() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> static T& SAMTurret_UI_ICON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SentryGun_UI_ICON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SentryGun_Name_LOC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SAMTurretGun_Name_LOC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_RootWidget() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& WeaponNameLabel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init(uintptr_t owner) {
		return ((T (*)(SentryGunTopFlagHud*, uintptr_t))(Il2CppBase() + 0x2E04430))(this, owner);
	}
	template <typename T = void> T UpdateUI(float deltaTime) {
		return ((T (*)(SentryGunTopFlagHud*, float))(Il2CppBase() + 0x2E04778))(this, deltaTime);
	}

};

}
