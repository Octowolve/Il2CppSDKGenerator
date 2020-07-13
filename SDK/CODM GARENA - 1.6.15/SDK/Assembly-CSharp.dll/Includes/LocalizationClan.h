#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocalizationClan
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalizationClan"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_BuildUnknownErrorString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T BuildUnknownErrorString(int32_t result) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x434D3C4))(0, result);
	}

};

}
