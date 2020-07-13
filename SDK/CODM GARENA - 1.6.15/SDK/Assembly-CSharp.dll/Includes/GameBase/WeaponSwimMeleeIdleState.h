#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponSwimMeleeIdleState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponSwimMeleeIdleState"));
	}

	template <typename T = float> T& m_BeginStateTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponSwimMeleeIdleState*))(Il2CppBase() + 0x4588494))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponSwimMeleeIdleState*, float))(Il2CppBase() + 0x4588718))(this, deltaTime);
	}
	template <typename T = void> T StartSwimming() {
		return ((T (*)(WeaponSwimMeleeIdleState*))(Il2CppBase() + 0x4588850))(this);
	}
	template <typename T = void> T StopSwimming() {
		return ((T (*)(WeaponSwimMeleeIdleState*))(Il2CppBase() + 0x458894C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponSwimMeleeIdleState*))(Il2CppBase() + 0x4588A0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponSwimMeleeIdleState*, float))(Il2CppBase() + 0x4588A14))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartSwimming() {
		return ((T (*)(WeaponSwimMeleeIdleState*))(Il2CppBase() + 0x4588A1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopSwimming() {
		return ((T (*)(WeaponSwimMeleeIdleState*))(Il2CppBase() + 0x4588A24))(this);
	}

};

}
