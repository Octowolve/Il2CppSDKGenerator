#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class VehicleDriveData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "VehicleDriveData"));
	}

	template <typename T = Il2CppVector3> T& SimPosition() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& SimRotation() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& driveMsg() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
