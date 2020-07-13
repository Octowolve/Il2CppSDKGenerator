#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponElectricTripWireActiveState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponElectricTripWireActiveState"));
	}

	template <typename T = bool> T& m_HasStartFire() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_ProjComponent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& MAX_POINT_NUM() {
		return *(T*)((uintptr_t)this + 0x24);
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

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponElectricTripWireActiveState*))(Il2CppBase() + 0x1C65E00))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponElectricTripWireActiveState*))(Il2CppBase() + 0x1C65F08))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponElectricTripWireActiveState*, float))(Il2CppBase() + 0x1C65FDC))(this, DeltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponElectricTripWireActiveState*))(Il2CppBase() + 0x1C666D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponElectricTripWireActiveState*))(Il2CppBase() + 0x1C666E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponElectricTripWireActiveState*, float))(Il2CppBase() + 0x1C666E8))(this, P0);
	}

};

}
