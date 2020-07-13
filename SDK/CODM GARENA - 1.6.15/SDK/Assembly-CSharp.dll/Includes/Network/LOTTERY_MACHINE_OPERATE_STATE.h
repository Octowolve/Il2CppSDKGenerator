#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class LOTTERYMACHINEOPERATESTATE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "LOTTERY_MACHINE_OPERATE_STATE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eLOTTERY_MACHINE_OPERATE_CHOOSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eLOTTERY_MACHINE_OPERATE_CONFIRM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eLOTTERY_MACHINE_OPERATE_CANCEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
