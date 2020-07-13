#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Limits
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Limits"));
	}

	template <typename T = float> T& minSwing() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& maxSwing() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& swing2() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& twist() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
