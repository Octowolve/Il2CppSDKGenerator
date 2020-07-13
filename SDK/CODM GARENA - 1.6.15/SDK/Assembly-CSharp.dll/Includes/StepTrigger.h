#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StepTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StepTrigger"));
	}

	template <typename T = uintptr_t> T& Step() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Trigger() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Param() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& SkipTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
