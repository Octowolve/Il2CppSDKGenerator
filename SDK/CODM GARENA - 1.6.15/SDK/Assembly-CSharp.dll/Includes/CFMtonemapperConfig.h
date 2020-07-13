#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CFMtonemapperConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CFMtonemapperConfig"));
	}

	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& runtimeData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DefaultRuntimeData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T DefaultRuntimeData() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D1DEF0))(0);
	}

};

}
