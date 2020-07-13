#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AirstrikeIndicatorHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AirstrikeIndicatorHUD"));
	}

	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& ItemLifeSpan() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_ItemDictionary() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Remove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(AirstrikeIndicatorHUD*))(Il2CppBase() + 0x3B76B24))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(AirstrikeIndicatorHUD*, float))(Il2CppBase() + 0x3B76B2C))(this, dt);
	}
	template <typename T = void> T Add(uint32_t ownerPlayerID, int32_t projectileActorID, Il2CppVector3 ownerPosition) {
		return ((T (*)(AirstrikeIndicatorHUD*, uint32_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x3B76F24))(this, ownerPlayerID, projectileActorID, ownerPosition);
	}
	template <typename T = void> T Remove(int32_t actorID) {
		return ((T (*)(AirstrikeIndicatorHUD*, int32_t))(Il2CppBase() + 0x3B773B0))(this, actorID);
	}
	template <typename T = void> T TickItems(float deltaTime) {
		return ((T (*)(AirstrikeIndicatorHUD*, float))(Il2CppBase() + 0x3B76BEC))(this, deltaTime);
	}
	template <typename T = void> T RemoveAllItems() {
		return ((T (*)(AirstrikeIndicatorHUD*))(Il2CppBase() + 0x3B77CD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AirstrikeIndicatorHUD*, float))(Il2CppBase() + 0x3B77FE0))(this, P0);
	}

};

}
