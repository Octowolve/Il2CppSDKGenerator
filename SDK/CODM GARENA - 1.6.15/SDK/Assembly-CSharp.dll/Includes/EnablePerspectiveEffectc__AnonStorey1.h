#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnablePerspectiveEffectcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<EnablePerspectiveEffect>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& assetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(EnablePerspectiveEffectcAnonStorey1*))(Il2CppBase() + 0x273858C))(this);
	}

};

}
