#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShadowbladeShowState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShadowbladeShowState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnGUI() {
		return ((T (*)(ShadowbladeShowState*))(Il2CppBase() + 0x38D84C0))(this);
	}

};

}
