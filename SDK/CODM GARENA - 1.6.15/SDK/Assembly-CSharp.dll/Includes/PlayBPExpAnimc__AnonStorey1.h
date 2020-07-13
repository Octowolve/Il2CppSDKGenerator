#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayBPExpAnimcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayBPExpAnim>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& aquiredExp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& preExp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& conf() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& totalAquiredExp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
