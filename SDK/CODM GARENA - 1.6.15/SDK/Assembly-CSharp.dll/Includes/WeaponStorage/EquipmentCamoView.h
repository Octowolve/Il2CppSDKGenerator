#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class EquipmentCamoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "EquipmentCamoView"));
	}

	template <typename T = uintptr_t> T& CamosRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& FadeInTarget() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeInView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T FadeInView() {
		return ((T (*)(EquipmentCamoView*))(Il2CppBase() + 0x4C589DC))(this);
	}

};

}
