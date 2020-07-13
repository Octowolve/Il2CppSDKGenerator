#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class EUSEMACHINEGUNRES
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "EUSE_MACHINE_GUN_RES"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eUSE_RES_OK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUSE_RES_HAS_PLAYER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUSE_RES_NOT_IN_AREA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
