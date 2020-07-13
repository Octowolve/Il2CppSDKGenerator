#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEInventoryManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEInventoryManager"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFirstSecondWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveInventoryByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UpdateFirstSecondWeapon() {
		return ((T (*)(PVEInventoryManager*))(Il2CppBase() + 0x4394728))(this);
	}
	template <typename T = bool> T RemoveInventoryByID(int32_t inItemID, unsigned char inSlot, int32_t inActorID, bool bAutoSwitch) {
		return ((T (*)(PVEInventoryManager*, int32_t, unsigned char, int32_t, bool))(Il2CppBase() + 0x43947EC))(this, inItemID, inSlot, inActorID, bAutoSwitch);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateFirstSecondWeapon() {
		return ((T (*)(PVEInventoryManager*))(Il2CppBase() + 0x4394998))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_RemoveInventoryByID(int32_t P0, unsigned char P1, int32_t P2, bool P3) {
		return ((T (*)(PVEInventoryManager*, int32_t, unsigned char, int32_t, bool))(Il2CppBase() + 0x43949A0))(this, P0, P1, P2, P3);
	}

};

}
