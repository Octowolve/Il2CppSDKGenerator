#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFireComponentVTOLWeaponSecendData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFireComponent_VTOLWeapon_SecendData"));
	}

	template <typename T = int32_t> T& RadamStartPosRauis() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = int32_t> T& OneShotAmmoCount() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = float> T& OneShotCD() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(WeaponFireComponentVTOLWeaponSecendData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C424F4))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(WeaponFireComponentVTOLWeaponSecendData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C427C4))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
