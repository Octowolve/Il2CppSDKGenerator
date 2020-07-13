#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponShakeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponShakeController"));
	}

	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_curWeapon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_weaponTransform() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_avataTransform() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_avataVerticalTransform() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_roundTransform() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_verticalRoundTransform() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_roundAimTransform() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_verticalRoundAimTransform() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> static T& RoundTransformName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& VerticalRoundTransformName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& RoundAimTransformName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& VerticalRoundAimTransformName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> T& m_WeaponState2ClassDefine() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_WeaponState2ShakeInfoMap() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& mPause() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_WeaponShakeLocation() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_WeaponShakeRotate() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_PrePawnPhysicsState() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_CurPawnPhysicsState() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& FucUpdate() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_CurWeaponState() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_WeaponStateChangeTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& m_isDestroy() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& _CheckPoint() {
		return *(T*)((uintptr_t)this + 0x7D);
	}
	template <typename T = float> T& mPositionOffsetY() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& f__mg$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& f__mg$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& f__mg$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& f__mg$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T get_WeaponState2ShakeInfoMap() {
		return ((T (*)(WeaponShakeController*))(Il2CppBase() + 0x33A6B9C))(this);
	}
	template <typename T = bool> T ShouldUpdateOffset(uintptr_t stateType, bool ignoreAiming) {
		return ((T (*)(WeaponShakeController*, uintptr_t, bool))(Il2CppBase() + 0x33A6BA4))(this, stateType, ignoreAiming);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(WeaponShakeController*, uintptr_t))(Il2CppBase() + 0x33A6DD0))(this, pawn);
	}
	template <typename T = void> T OnTPStoFPS() {
		return ((T (*)(WeaponShakeController*))(Il2CppBase() + 0x33A7938))(this);
	}
	template <typename T = void> T OnSwithcWeapon() {
		return ((T (*)(WeaponShakeController*))(Il2CppBase() + 0x33A81AC))(this);
	}
	template <typename T = void> T _Reset() {
		return ((T (*)(WeaponShakeController*))(Il2CppBase() + 0x33A7A78))(this);
	}
	template <typename T = void> T PawnDie() {
		return ((T (*)(WeaponShakeController*))(Il2CppBase() + 0x33A82EC))(this);
	}
	template <typename T = void> T Pause() {
		return ((T (*)(WeaponShakeController*))(Il2CppBase() + 0x33A8624))(this);
	}
	template <typename T = void> T OnOperatorFireModeChanged() {
		return ((T (*)(WeaponShakeController*))(Il2CppBase() + 0x33A8634))(this);
	}
	template <typename T = bool> T UpdateTransformComonpent() {
		return ((T (*)(WeaponShakeController*))(Il2CppBase() + 0x33A8810))(this);
	}
	template <typename T = void> T ResetNode() {
		return ((T (*)(WeaponShakeController*))(Il2CppBase() + 0x33A94B0))(this);
	}
	template <typename T = void> T ResetInitTransform() {
		return ((T (*)(WeaponShakeController*))(Il2CppBase() + 0x33A8638))(this);
	}
	template <typename T = void> static T NullUpdate() {
		return ((T (*)(void *))(Il2CppBase() + 0x33A9DE4))(0);
	}
	template <typename T = void> T OnWantInit() {
		return ((T (*)(WeaponShakeController*))(Il2CppBase() + 0x33A9DE8))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(WeaponShakeController*))(Il2CppBase() + 0x33A9F44))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WeaponShakeController*))(Il2CppBase() + 0x33A9F70))(this);
	}
	template <typename T = void> T OnTick() {
		return ((T (*)(WeaponShakeController*))(Il2CppBase() + 0x33AA128))(this);
	}
	template <typename T = void> T OnWeaponBeginState(uintptr_t stateType) {
		return ((T (*)(WeaponShakeController*, uintptr_t))(Il2CppBase() + 0x33AC598))(this, stateType);
	}
	template <typename T = void> T OnWeaponEndState(uintptr_t stateType) {
		return ((T (*)(WeaponShakeController*, uintptr_t))(Il2CppBase() + 0x33ACC20))(this, stateType);
	}
	template <typename T = float> T GetPositionOffsetY() {
		return ((T (*)(WeaponShakeController*))(Il2CppBase() + 0x33AD2A0))(this);
	}

};

}
