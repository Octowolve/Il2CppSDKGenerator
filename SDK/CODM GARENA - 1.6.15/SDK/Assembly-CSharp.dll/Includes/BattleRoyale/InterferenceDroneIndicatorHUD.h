#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class InterferenceDroneIndicatorHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "InterferenceDroneIndicatorHUD"));
	}

	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& FollowingInfoGO() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& FollowInfoAnchor() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_ItemDictionary() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(InterferenceDroneIndicatorHUD*))(Il2CppBase() + 0x3D4F850))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(InterferenceDroneIndicatorHUD*))(Il2CppBase() + 0x3D4F9C0))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(InterferenceDroneIndicatorHUD*, float))(Il2CppBase() + 0x3D4F9C8))(this, dt);
	}
	template <typename T = void> T TickItems(float deltaTime) {
		return ((T (*)(InterferenceDroneIndicatorHUD*, float))(Il2CppBase() + 0x3D4FA88))(this, deltaTime);
	}
	template <typename T = void> T UpdateItemInfo(uint32_t droneID) {
		return ((T (*)(InterferenceDroneIndicatorHUD*, uint32_t))(Il2CppBase() + 0x3D50480))(this, droneID);
	}
	template <typename T = void> T AddItem(uintptr_t drone) {
		return ((T (*)(InterferenceDroneIndicatorHUD*, uintptr_t))(Il2CppBase() + 0x3D50DB8))(this, drone);
	}
	template <typename T = void> T RemoveItem(uint32_t droneID) {
		return ((T (*)(InterferenceDroneIndicatorHUD*, uint32_t))(Il2CppBase() + 0x3D509D4))(this, droneID);
	}
	template <typename T = void> T RemoveAllItems() {
		return ((T (*)(InterferenceDroneIndicatorHUD*))(Il2CppBase() + 0x3D510E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(InterferenceDroneIndicatorHUD*))(Il2CppBase() + 0x3D51428))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(InterferenceDroneIndicatorHUD*, float))(Il2CppBase() + 0x3D51430))(this, P0);
	}

};

}
