#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class CONTROLLABLESTATUS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "CONTROLLABLE_STATUS"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& CONTROLLABLE_STATUS_IN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& CONTROLLABLE_STATUS_CRUISE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& CONTROLLABLE_STATUS_OUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
