#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponSparrowActiveState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponSparrowActiveState"));
	}

	template <typename T = uintptr_t> T& m_ProjComponent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_StateMachine() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpectated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponSparrowActiveState*))(Il2CppBase() + 0x3A886BC))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponSparrowActiveState*))(Il2CppBase() + 0x3A8888C))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponSparrowActiveState*, float))(Il2CppBase() + 0x3A88A8C))(this, DeltaTime);
	}
	template <typename T = bool> T IsSpectated() {
		return ((T (*)(WeaponSparrowActiveState*))(Il2CppBase() + 0x3A889D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponSparrowActiveState*))(Il2CppBase() + 0x3A88B40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponSparrowActiveState*))(Il2CppBase() + 0x3A88B48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponSparrowActiveState*, float))(Il2CppBase() + 0x3A88B50))(this, P0);
	}

};

}
