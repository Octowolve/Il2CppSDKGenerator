#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BlinkData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlinkData"));
	}

	template <typename T = bool> T& IsBlueLight() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& IsRedLight() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& IsYellowLight() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
