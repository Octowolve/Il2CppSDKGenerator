#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class EUSEMACHINEGUNUSEFLAG
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "EUSE_MACHINE_GUN_USE_FLAG"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eUSE_FLAG_UP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eUSE_FLAG_DOWN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
