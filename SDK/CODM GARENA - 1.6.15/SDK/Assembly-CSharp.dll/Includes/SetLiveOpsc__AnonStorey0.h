#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetLiveOpscAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetLiveOps>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& topNum() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& leftNum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
