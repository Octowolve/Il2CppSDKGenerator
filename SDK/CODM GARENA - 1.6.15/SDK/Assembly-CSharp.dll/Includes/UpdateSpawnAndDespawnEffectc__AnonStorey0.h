#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateSpawnAndDespawnEffectcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateSpawnAndDespawnEffect>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& effectInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T m__0(uintptr_t e) {
		return ((T (*)(UpdateSpawnAndDespawnEffectcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3959EF8))(this, e);
	}

};

}
