#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AsyncLoadMuzzleFlashEffectcAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AsyncLoadMuzzleFlashEffect>c__AnonStorey4"));
	}

	template <typename T = uintptr_t> T& socket() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0(uintptr_t effect) {
		return ((T (*)(AsyncLoadMuzzleFlashEffectcAnonStorey4*, uintptr_t))(Il2CppBase() + 0x2EB2A18))(this, effect);
	}

};

}
