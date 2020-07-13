#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class VehicleDronePerspectiveHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "VehicleDronePerspectiveHUD"));
	}

	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_InitTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_ItemInfoDictionary() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemCnt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Remove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Hide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(VehicleDronePerspectiveHUD*))(Il2CppBase() + 0x3D9A860))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(VehicleDronePerspectiveHUD*))(Il2CppBase() + 0x3D9A868))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(VehicleDronePerspectiveHUD*, float))(Il2CppBase() + 0x3D9A920))(this, dt);
	}
	template <typename T = int32_t> T GetItemCnt() {
		return ((T (*)(VehicleDronePerspectiveHUD*))(Il2CppBase() + 0x3D9B320))(this);
	}
	template <typename T = void> T Add(uintptr_t pawn) {
		return ((T (*)(VehicleDronePerspectiveHUD*, uintptr_t))(Il2CppBase() + 0x3D9B3F0))(this, pawn);
	}
	template <typename T = void> T Remove(uint32_t playerID) {
		return ((T (*)(VehicleDronePerspectiveHUD*, uint32_t))(Il2CppBase() + 0x3D9BAC4))(this, playerID);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(VehicleDronePerspectiveHUD*))(Il2CppBase() + 0x3D9BCEC))(this);
	}
	template <typename T = void> T TickItems(float deltaTime) {
		return ((T (*)(VehicleDronePerspectiveHUD*, float))(Il2CppBase() + 0x3D9A9F8))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(VehicleDronePerspectiveHUD*))(Il2CppBase() + 0x3D9C868))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(VehicleDronePerspectiveHUD*, float))(Il2CppBase() + 0x3D9C870))(this, P0);
	}

};

}
