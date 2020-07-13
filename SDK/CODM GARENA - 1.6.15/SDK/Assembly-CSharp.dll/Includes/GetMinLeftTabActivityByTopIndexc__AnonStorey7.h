#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetMinLeftTabActivityByTopIndexcAnonStorey7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetMinLeftTabActivityByTopIndex>c__AnonStorey7"));
	}

	template <typename T = int32_t> T& topNum() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& GlobalDS() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& LocalPlayerDS() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetMinLeftTabActivityByTopIndexcAnonStorey7*, uintptr_t))(Il2CppBase() + 0x3531A5C))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(GetMinLeftTabActivityByTopIndexcAnonStorey7*, uintptr_t))(Il2CppBase() + 0x3531B28))(this, it);
	}

};

}
