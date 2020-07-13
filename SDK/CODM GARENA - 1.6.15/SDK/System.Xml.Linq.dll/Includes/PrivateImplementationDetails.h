#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrivateImplementationDetails
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "", "<PrivateImplementationDetails>"));
	}

	template <typename T = uintptr_t> static T& $$field-0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
