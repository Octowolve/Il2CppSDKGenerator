#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NZWheeledVehicleExportHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NZWheeledVehicleExportHelper"));
	}

	template <typename T = uintptr_t> T& wheelFL() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& wheelFR() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& wheelRL() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& wheelRR() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWheelInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T GetWheelInfo(int32_t index) {
		return ((T (*)(NZWheeledVehicleExportHelper*, int32_t))(Il2CppBase() + 0x3EE4094))(this, index);
	}

};

}
