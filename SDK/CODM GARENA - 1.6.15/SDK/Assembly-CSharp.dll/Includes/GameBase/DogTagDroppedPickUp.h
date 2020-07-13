#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DogTagDroppedPickUp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DogTagDroppedPickUp"));
	}

	template <typename T = bool> T& bSelfCamp() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_signTargetVolume() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& signBoardAttachObj() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& BoardNearDisapear() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& BoardFarDisapear() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& BoardHeightDisapear() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DogTagDroppedPickUp*))(Il2CppBase() + 0x40E4690))(this);
	}
	template <typename T = void> T TickDroppedPickUp(float deltaTime) {
		return ((T (*)(DogTagDroppedPickUp*, float))(Il2CppBase() + 0x40E487C))(this, deltaTime);
	}
	template <typename T = void> T SetCamp(bool bSelf) {
		return ((T (*)(DogTagDroppedPickUp*, bool))(Il2CppBase() + 0x40E4DA4))(this, bSelf);
	}
	template <typename T = bool> T GetCamp() {
		return ((T (*)(DogTagDroppedPickUp*))(Il2CppBase() + 0x40E4E4C))(this);
	}
	template <typename T = void> T Despawn(uint32_t pickedByPlayerId) {
		return ((T (*)(DogTagDroppedPickUp*, uint32_t))(Il2CppBase() + 0x40E4EF4))(this, pickedByPlayerId);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(DogTagDroppedPickUp*))(Il2CppBase() + 0x40E54F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickDroppedPickUp(float P0) {
		return ((T (*)(DogTagDroppedPickUp*, float))(Il2CppBase() + 0x40E5500))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Despawn(uint32_t P0) {
		return ((T (*)(DogTagDroppedPickUp*, uint32_t))(Il2CppBase() + 0x40E5504))(this, P0);
	}

};

}
