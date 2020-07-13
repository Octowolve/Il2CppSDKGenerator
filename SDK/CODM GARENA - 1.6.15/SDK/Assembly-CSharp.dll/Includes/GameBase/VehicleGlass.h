#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VehicleGlass
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VehicleGlass"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHitGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGlass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_IsAlive() {
		return ((T (*)(VehicleGlass*))(Il2CppBase() + 0x27DF630))(this);
	}
	template <typename T = uintptr_t> T GetHitGroup(uintptr_t hitObject) {
		return ((T (*)(VehicleGlass*, uintptr_t))(Il2CppBase() + 0x27DF638))(this, hitObject);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(VehicleGlass*, uintptr_t))(Il2CppBase() + 0x27DF6E0))(this, pawn);
	}
	template <typename T = void> T InitGlass() {
		return ((T (*)(VehicleGlass*))(Il2CppBase() + 0x27DF788))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetHitGroup(uintptr_t P0) {
		return ((T (*)(VehicleGlass*, uintptr_t))(Il2CppBase() + 0x27DF83C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(VehicleGlass*, uintptr_t))(Il2CppBase() + 0x27DF844))(this, P0);
	}

};

}
