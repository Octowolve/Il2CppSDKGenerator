#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class NoneUseUnpilotedVehicle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "NoneUseUnpilotedVehicle"));
	}

	template <typename T = float> T& createTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& shouldShow() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& vehicleType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& location() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppQuaternion> T& quaternion() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
