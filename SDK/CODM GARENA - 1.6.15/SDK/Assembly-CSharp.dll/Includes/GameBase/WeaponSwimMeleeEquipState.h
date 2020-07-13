#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponSwimMeleeEquipState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponSwimMeleeEquipState"));
	}

	template <typename T = bool> T& m_IsLeaveSwim() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& m_CheckShowWeapon() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = int32_t> T& m_CheckShowWeaponStartFrame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_FrameLimit() {
		return *(T*)((uintptr_t)this + 0x30);
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
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySwimEquipAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponSwimMeleeEquipState*))(Il2CppBase() + 0x4587774))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponSwimMeleeEquipState*, float))(Il2CppBase() + 0x4587E70))(this, DeltaTime);
	}
	template <typename T = void> T CheckShowWeapon() {
		return ((T (*)(WeaponSwimMeleeEquipState*))(Il2CppBase() + 0x4587F4C))(this);
	}
	template <typename T = void> T OnCountDown() {
		return ((T (*)(WeaponSwimMeleeEquipState*))(Il2CppBase() + 0x458806C))(this);
	}
	template <typename T = void> T PlaySwimEquipAnimation() {
		return ((T (*)(WeaponSwimMeleeEquipState*))(Il2CppBase() + 0x4587998))(this);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WeaponSwimMeleeEquipState*))(Il2CppBase() + 0x458811C))(this);
	}
	template <typename T = void> T StartSwimming() {
		return ((T (*)(WeaponSwimMeleeEquipState*))(Il2CppBase() + 0x4588254))(this);
	}
	template <typename T = void> T StopSwimming() {
		return ((T (*)(WeaponSwimMeleeEquipState*))(Il2CppBase() + 0x45882F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponSwimMeleeEquipState*))(Il2CppBase() + 0x458839C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponSwimMeleeEquipState*, float))(Il2CppBase() + 0x45883A4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnCountDown() {
		return ((T (*)(WeaponSwimMeleeEquipState*))(Il2CppBase() + 0x45883AC))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WeaponSwimMeleeEquipState*))(Il2CppBase() + 0x45883B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartSwimming() {
		return ((T (*)(WeaponSwimMeleeEquipState*))(Il2CppBase() + 0x45883BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopSwimming() {
		return ((T (*)(WeaponSwimMeleeEquipState*))(Il2CppBase() + 0x45883C4))(this);
	}

};

}
