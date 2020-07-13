#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRGrenadeExplodeCountdownHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRGrenadeExplodeCountdownHUD"));
	}

	template <typename T = uintptr_t> T& WeaponIcon() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& CountdownLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CountdownSprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_CountdownValue() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_CountdownElapse() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& m_CountdownStartTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& m_ClientProjectileID() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideCountdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCountdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T HideCountdown(int32_t clientProjectileID) {
		return ((T (*)(BRGrenadeExplodeCountdownHUD*, int32_t))(Il2CppBase() + 0x2D90F34))(this, clientProjectileID);
	}
	template <typename T = void> T StartCountdown(Il2CppString* inWeaponIcon, float countdown, int32_t clientProjectileID) {
		return ((T (*)(BRGrenadeExplodeCountdownHUD*, Il2CppString*, float, int32_t))(Il2CppBase() + 0x2D91040))(this, inWeaponIcon, countdown, clientProjectileID);
	}
	template <typename T = void> T RefreshCountDown(int32_t clientProjectileID, float countDown) {
		return ((T (*)(BRGrenadeExplodeCountdownHUD*, int32_t, float))(Il2CppBase() + 0x2D91438))(this, clientProjectileID, countDown);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRGrenadeExplodeCountdownHUD*))(Il2CppBase() + 0x2D91524))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRGrenadeExplodeCountdownHUD*, float))(Il2CppBase() + 0x2D9152C))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRGrenadeExplodeCountdownHUD*, float))(Il2CppBase() + 0x2D91878))(this, P0);
	}

};

}
