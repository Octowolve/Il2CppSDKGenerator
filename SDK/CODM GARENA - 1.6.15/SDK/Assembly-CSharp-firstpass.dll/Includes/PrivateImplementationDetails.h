#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrivateImplementationDetails
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "<PrivateImplementationDetails>"));
	}

	template <typename T = uintptr_t> static T& $field-59F5BD34B6C013DEACC784F69C67E95150033A84() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
