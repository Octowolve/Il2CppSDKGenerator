#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CODBigCrossHair
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "COD_BigCrossHair"));
	}

	template <typename T = Il2CppVector2> static T& DepthRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector2> static T& ScaleRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& From() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& To() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& Big() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& LockRoot() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_AmmoCount() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_CarriedAmmoCount() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_HUDBigCrossFire() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_AmmoShowWidge() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_CurrentWeapon() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& m_LastCarriedAmmoCount() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& m_LastAmmoCount() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_CarriedAmmoCountStrB() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_AmmoCountStrB() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mLockRootTweeners() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& Mark() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& MarkList() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& mLastHasEnemy() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& mLastLockedEnemy() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCrosshairDisplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayTweens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = Il2CppVector3> T CalcScale(float depth) {
		return ((T (*)(CODBigCrossHair*, float))(Il2CppBase() + 0x3C757AC))(this, depth);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CODBigCrossHair*))(Il2CppBase() + 0x3C759A0))(this);
	}
	template <typename T = void> T SetCrosshairDisplay(bool isShow) {
		return ((T (*)(CODBigCrossHair*, bool))(Il2CppBase() + 0x3C75B70))(this, isShow);
	}
	template <typename T = void> T UpdateTransform(uintptr_t trans, uintptr_t info) {
		return ((T (*)(CODBigCrossHair*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C75E20))(this, trans, info);
	}
	template <typename T = void> T PlayTweens(Il2CppArray<uintptr_t>* tweens) {
		return ((T (*)(CODBigCrossHair*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3C76234))(this, tweens);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CODBigCrossHair*))(Il2CppBase() + 0x3C7636C))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(CODBigCrossHair*, float))(Il2CppBase() + 0x3C76374))(this, dt);
	}
	template <typename T = void> T UpdateAmmoCount() {
		return ((T (*)(CODBigCrossHair*))(Il2CppBase() + 0x3C76B34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CODBigCrossHair*))(Il2CppBase() + 0x3C77004))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetCrosshairDisplay(bool P0) {
		return ((T (*)(CODBigCrossHair*, bool))(Il2CppBase() + 0x3C7700C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(CODBigCrossHair*, float))(Il2CppBase() + 0x3C77014))(this, P0);
	}

};

}
