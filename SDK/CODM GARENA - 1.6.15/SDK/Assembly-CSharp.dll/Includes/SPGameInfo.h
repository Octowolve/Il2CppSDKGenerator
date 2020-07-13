#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SPGameInfo"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_CanUseULTSkill() {
		return ((T (*)(SPGameInfo*))(Il2CppBase() + 0x3915B68))(this);
	}

};

}
