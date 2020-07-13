#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BloodFX
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BloodFX"));
	}

	template <typename T = float> T& DelayDestroyTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BloodFX*))(Il2CppBase() + 0x35BC864))(this);
	}
	template <typename T = void> T DelayHide() {
		return ((T (*)(BloodFX*))(Il2CppBase() + 0x35BC9CC))(this);
	}

};

}
