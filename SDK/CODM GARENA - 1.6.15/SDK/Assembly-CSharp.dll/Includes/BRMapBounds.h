#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRMapBounds
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRMapBounds"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_ServerOnly() {
		return ((T (*)(BRMapBounds*))(Il2CppBase() + 0x52F4E48))(this);
	}

};

}
