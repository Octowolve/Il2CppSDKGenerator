#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class PVPStorageEquipmentBaseView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "PVPStorageEquipmentBaseView"));
	}

	template <typename T = uintptr_t> T& EquipmentIcon() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& EquipSV() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ScrollerViewRoot() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PVPStorageEquipmentBaseView*))(Il2CppBase() + 0x4C5EA3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PVPStorageEquipmentBaseView*))(Il2CppBase() + 0x4C5EB18))(this);
	}

};

}
