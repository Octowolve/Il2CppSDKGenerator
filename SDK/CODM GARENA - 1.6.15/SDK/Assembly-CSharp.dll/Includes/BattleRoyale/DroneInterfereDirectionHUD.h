#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class DroneInterfereDirectionHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "DroneInterfereDirectionHUD"));
	}

	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_ItemDictionary() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Remove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(DroneInterfereDirectionHUD*))(Il2CppBase() + 0x3D478C0))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(DroneInterfereDirectionHUD*, float))(Il2CppBase() + 0x3D478C8))(this, dt);
	}
	template <typename T = void> T TickItems(float deltaTime) {
		return ((T (*)(DroneInterfereDirectionHUD*, float))(Il2CppBase() + 0x3D47988))(this, deltaTime);
	}
	template <typename T = void> T Add(uint32_t droneID) {
		return ((T (*)(DroneInterfereDirectionHUD*, uint32_t))(Il2CppBase() + 0x3D480B4))(this, droneID);
	}
	template <typename T = void> T Remove(uint32_t droneID) {
		return ((T (*)(DroneInterfereDirectionHUD*, uint32_t))(Il2CppBase() + 0x3D48558))(this, droneID);
	}
	template <typename T = void> T RemoveAllItems() {
		return ((T (*)(DroneInterfereDirectionHUD*))(Il2CppBase() + 0x3D486FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(DroneInterfereDirectionHUD*, float))(Il2CppBase() + 0x3D48A08))(this, P0);
	}

};

}
