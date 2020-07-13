#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponSwimUnequipState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponSwimUnequipState"));
	}

	template <typename T = float> T& m_FPUnequipRate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_ShouldHiddenWeapon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_TPAttachWeaponTimeRate() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_ShouldAttachWeaponToHand() {
		return *(T*)((uintptr_t)this + 0x38);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponSwimUnequipState*))(Il2CppBase() + 0x33C22E0))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponSwimUnequipState*, float))(Il2CppBase() + 0x33C290C))(this, DeltaTime);
	}
	template <typename T = void> T StartSwimming() {
		return ((T (*)(WeaponSwimUnequipState*))(Il2CppBase() + 0x33C2A84))(this);
	}
	template <typename T = void> T StopSwimming() {
		return ((T (*)(WeaponSwimUnequipState*))(Il2CppBase() + 0x33C2B88))(this);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WeaponSwimUnequipState*))(Il2CppBase() + 0x33C2C48))(this);
	}
	template <typename T = void> T OnCountDown() {
		return ((T (*)(WeaponSwimUnequipState*))(Il2CppBase() + 0x33C2DDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponSwimUnequipState*))(Il2CppBase() + 0x33C3028))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponSwimUnequipState*, float))(Il2CppBase() + 0x33C3030))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartSwimming() {
		return ((T (*)(WeaponSwimUnequipState*))(Il2CppBase() + 0x33C3038))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopSwimming() {
		return ((T (*)(WeaponSwimUnequipState*))(Il2CppBase() + 0x33C303C))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WeaponSwimUnequipState*))(Il2CppBase() + 0x33C3040))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCountDown() {
		return ((T (*)(WeaponSwimUnequipState*))(Il2CppBase() + 0x33C3048))(this);
	}

};

}
