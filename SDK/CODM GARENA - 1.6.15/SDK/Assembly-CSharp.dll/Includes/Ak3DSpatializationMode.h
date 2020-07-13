#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Ak3DSpatializationMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Ak3DSpatializationMode"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& AK_SpatializationMode_None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AK_SpatializationMode_PositionOnly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AK_SpatializationMode_PositionAndOrientation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
