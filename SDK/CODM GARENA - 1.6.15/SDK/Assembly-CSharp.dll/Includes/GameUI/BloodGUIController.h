#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BloodGUIController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BloodGUIController"));
	}

	template <typename T = uintptr_t> T& RawItem() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& BuffSprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& FadeOutTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& KeepTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& MaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& MinAngleIntv() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> static T& MaxAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& DeactiveItems() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ActiveItems() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& mPawnSpawnTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_ShowBuff() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_LeftTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOverlapped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePawnEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBuffSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseBuffSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BloodGUIController*))(Il2CppBase() + 0x2D76610))(this);
	}
	template <typename T = bool> T IsOverlapped(float angle, int32_t range) {
		return ((T (*)(BloodGUIController*, float, int32_t))(Il2CppBase() + 0x2D76B7C))(this, angle, range);
	}
	template <typename T = void> T UpdatePawnEffect(uintptr_t pawn, float dt) {
		return ((T (*)(BloodGUIController*, uintptr_t, float))(Il2CppBase() + 0x2D76D88))(this, pawn, dt);
	}
	template <typename T = uintptr_t> T PlayHitEffect(Il2CppVector3 pos) {
		return ((T (*)(BloodGUIController*, Il2CppVector3))(Il2CppBase() + 0x2D77A88))(this, pos);
	}
	template <typename T = void> T RefreshBuffSprite() {
		return ((T (*)(BloodGUIController*))(Il2CppBase() + 0x2D7785C))(this);
	}
	template <typename T = void> T CloseBuffSprite() {
		return ((T (*)(BloodGUIController*))(Il2CppBase() + 0x2D774C0))(this);
	}
	template <typename T = int32_t> static T UpdatePawnEffectm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D78034))(0, a, b);
	}

};

}
