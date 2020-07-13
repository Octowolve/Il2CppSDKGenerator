#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VehicleNetWeaponInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VehicleNetWeaponInfo"));
	}

	template <typename T = int32_t> T& SeatId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& ItemId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& IsCoolingDown() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& CurCoolingDownValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& EnterCoolingDownTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& StopWeaponTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
