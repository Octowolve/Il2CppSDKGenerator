#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VehicleUIInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VehicleUIInfo"));
	}

	template <typename T = uintptr_t> T& vehicleType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& VehicleIconPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& VehicleIconSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& VehicleIconSpriteName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& BrokenIconSpriteName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SeatsPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& HaveHorn() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& HaveBrake() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = Il2CppVector3> T& CenterVehicleStatePos() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& CenterVehicleIconName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& SkillRootId() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
