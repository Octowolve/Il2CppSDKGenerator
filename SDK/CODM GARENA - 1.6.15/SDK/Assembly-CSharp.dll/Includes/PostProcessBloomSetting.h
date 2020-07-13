#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PostProcessBloomSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PostProcessBloomSetting"));
	}

	template <typename T = float> T& bloomThreshold() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& bloomScale() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& bloomThresholdHDR() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& bloomScaleHDR() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& exposure() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& enableBloomHints() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& bloomHint0() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& bloomWeight0() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& bloomHint1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& bloomWeight1() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& bloomHint2() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& bloomWeight2() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& bloomHint3() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& bloomWeight3() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
