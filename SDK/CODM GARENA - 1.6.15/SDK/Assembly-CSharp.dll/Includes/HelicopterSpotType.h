#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HelicopterSpotType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HelicopterSpotType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& SPAWN_SPOT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& TRANSPORT_SPOT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LEAVE_SPOT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
