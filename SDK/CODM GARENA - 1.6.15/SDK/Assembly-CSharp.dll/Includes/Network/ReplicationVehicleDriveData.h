#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class ReplicationVehicleDriveData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "ReplicationVehicleDriveData"));
	}

	template <typename T = uintptr_t> T& MovedMsg() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
