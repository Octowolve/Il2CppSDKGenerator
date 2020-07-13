#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ThrowTypeChangedBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ThrowTypeChangedBtnView"));
	}

	template <typename T = uintptr_t> T& HighSprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& LowSprite() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& m_IsHighThrow() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_SelfTransform() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& m_curWeaponActorID() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActiveSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnThrowTypeChangedBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ThrowTypeChangedBtnView*))(Il2CppBase() + 0x27C7EB8))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ThrowTypeChangedBtnView*))(Il2CppBase() + 0x27C7EC0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ThrowTypeChangedBtnView*))(Il2CppBase() + 0x27C7ED0))(this);
	}
	template <typename T = void> T ActiveSelf(bool active) {
		return ((T (*)(ThrowTypeChangedBtnView*, bool))(Il2CppBase() + 0x27C8000))(this, active);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(ThrowTypeChangedBtnView*))(Il2CppBase() + 0x27C82D8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(ThrowTypeChangedBtnView*, float))(Il2CppBase() + 0x27C82E0))(this, dt);
	}
	template <typename T = void> T OnThrowTypeChangedBtnClick(uintptr_t obj) {
		return ((T (*)(ThrowTypeChangedBtnView*, uintptr_t))(Il2CppBase() + 0x27C8928))(this, obj);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ThrowTypeChangedBtnView*))(Il2CppBase() + 0x27C8AD8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ThrowTypeChangedBtnView*, float))(Il2CppBase() + 0x27C8AE0))(this, P0);
	}

};

}
