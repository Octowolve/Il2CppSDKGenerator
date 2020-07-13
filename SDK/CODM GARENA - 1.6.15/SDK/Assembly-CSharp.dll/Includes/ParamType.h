#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ParamType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ParamType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& paramType_stateName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& paramType_trigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
