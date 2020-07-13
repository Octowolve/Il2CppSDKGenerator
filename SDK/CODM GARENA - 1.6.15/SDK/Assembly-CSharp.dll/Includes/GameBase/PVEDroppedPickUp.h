#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PVEDroppedPickUp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PVEDroppedPickUp"));
	}

	template <typename T = uint32_t> T& m_OwnerID() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwnerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnPickUpMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetOwnerID(uint32_t OwnerId) {
		return ((T (*)(PVEDroppedPickUp*, uint32_t))(Il2CppBase() + 0x2DC69B4))(this, OwnerId);
	}
	template <typename T = uint32_t> T GetOwnerID() {
		return ((T (*)(PVEDroppedPickUp*))(Il2CppBase() + 0x2DC6A5C))(this);
	}
	template <typename T = void> T Despawn(uint32_t pickedByPlayerId) {
		return ((T (*)(PVEDroppedPickUp*, uint32_t))(Il2CppBase() + 0x2DC6AFC))(this, pickedByPlayerId);
	}
	template <typename T = void> T SpawnPickUpMesh() {
		return ((T (*)(PVEDroppedPickUp*))(Il2CppBase() + 0x2DC6D10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Despawn(uint32_t P0) {
		return ((T (*)(PVEDroppedPickUp*, uint32_t))(Il2CppBase() + 0x2DC6E74))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SpawnPickUpMesh() {
		return ((T (*)(PVEDroppedPickUp*))(Il2CppBase() + 0x2DC6E7C))(this);
	}

};

}
