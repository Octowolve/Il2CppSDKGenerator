#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ReplicationDataType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ReplicationDataType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Rep_MoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Rep_VehicleMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Rep_VehicleDriveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
