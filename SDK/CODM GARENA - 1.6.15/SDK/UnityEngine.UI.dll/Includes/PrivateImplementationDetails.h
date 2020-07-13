#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrivateImplementationDetails
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "<PrivateImplementationDetails>"));
	}

	template <typename T = uintptr_t> static T& $field-7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
