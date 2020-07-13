#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponSecondaryFireState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponSecondaryFireState"));
	}

	template <typename T = float> T& mFireTimeElapse() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& mRealFireInterval() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& bStopFire() {
		return *(T*)((uintptr_t)this + 0x24);
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
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponSecondaryFireState*))(Il2CppBase() + 0x33A37EC))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponSecondaryFireState*, float))(Il2CppBase() + 0x33A3988))(this, DeltaTime);
	}
	template <typename T = void> T WeaponFire() {
		return ((T (*)(WeaponSecondaryFireState*))(Il2CppBase() + 0x33A3B28))(this);
	}
	template <typename T = void> T BeginSecondaryFire() {
		return ((T (*)(WeaponSecondaryFireState*))(Il2CppBase() + 0x33A3C44))(this);
	}
	template <typename T = void> T StopSecondaryFire() {
		return ((T (*)(WeaponSecondaryFireState*))(Il2CppBase() + 0x33A3CE8))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponSecondaryFireState*))(Il2CppBase() + 0x33A3D8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponSecondaryFireState*))(Il2CppBase() + 0x33A3EA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponSecondaryFireState*, float))(Il2CppBase() + 0x33A3F50))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeginSecondaryFire() {
		return ((T (*)(WeaponSecondaryFireState*))(Il2CppBase() + 0x33A3FF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopSecondaryFire() {
		return ((T (*)(WeaponSecondaryFireState*))(Il2CppBase() + 0x33A4090))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponSecondaryFireState*))(Il2CppBase() + 0x33A412C))(this);
	}

};

}
