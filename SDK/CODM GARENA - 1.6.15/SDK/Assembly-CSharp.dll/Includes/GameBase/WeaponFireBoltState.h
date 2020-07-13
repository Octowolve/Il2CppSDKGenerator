#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponFireBoltState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponFireBoltState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBoltName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsButtonDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCurrentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = Il2CppString*> T GetBoltName() {
		return ((T (*)(WeaponFireBoltState*))(Il2CppBase() + 0x1C4DC30))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponFireBoltState*))(Il2CppBase() + 0x1C67B48))(this);
	}
	template <typename T = void> T OnCountDown() {
		return ((T (*)(WeaponFireBoltState*))(Il2CppBase() + 0x1C67CDC))(this);
	}
	template <typename T = float> T GetAnimRate() {
		return ((T (*)(WeaponFireBoltState*))(Il2CppBase() + 0x1C67DA4))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponFireBoltState*))(Il2CppBase() + 0x1C67EA4))(this);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WeaponFireBoltState*))(Il2CppBase() + 0x1C68374))(this);
	}
	template <typename T = void> T CheckIsButtonDown() {
		return ((T (*)(WeaponFireBoltState*))(Il2CppBase() + 0x1C6848C))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponFireBoltState*, float))(Il2CppBase() + 0x1C685A4))(this, DeltaTime);
	}
	template <typename T = void> T StopCurrentState() {
		return ((T (*)(WeaponFireBoltState*))(Il2CppBase() + 0x1C686C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponFireBoltState*))(Il2CppBase() + 0x1C687A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCountDown() {
		return ((T (*)(WeaponFireBoltState*))(Il2CppBase() + 0x1C687AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponFireBoltState*))(Il2CppBase() + 0x1C687B4))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WeaponFireBoltState*))(Il2CppBase() + 0x1C687BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckIsButtonDown() {
		return ((T (*)(WeaponFireBoltState*))(Il2CppBase() + 0x1C687C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponFireBoltState*, float))(Il2CppBase() + 0x1C687CC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StopCurrentState() {
		return ((T (*)(WeaponFireBoltState*))(Il2CppBase() + 0x1C687D4))(this);
	}

};

}
