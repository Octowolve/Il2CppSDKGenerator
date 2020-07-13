#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FunctionalActorType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FunctionalActorType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& E_Model() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_Model_CampDiff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_CTF_Flag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
