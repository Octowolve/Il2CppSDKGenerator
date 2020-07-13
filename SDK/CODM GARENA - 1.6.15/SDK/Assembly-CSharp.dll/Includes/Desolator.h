#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Desolator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Desolator"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& RadiateRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& RadiateDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
