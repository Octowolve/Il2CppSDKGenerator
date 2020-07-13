#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrologueStepInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrologueStepInfo"));
	}

	template <typename T = int64_t> T& clientmsts() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& msSinceLastStep() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& deltaTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& practMode() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& fTUEstepID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isSuccess() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
