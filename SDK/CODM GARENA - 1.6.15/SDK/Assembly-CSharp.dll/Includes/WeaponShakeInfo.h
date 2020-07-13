#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponShakeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponShakeInfo"));
	}

	template <typename T = bool> T& StartShake() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_GradualTurn() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& HadInitTransform() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& shakeModeList() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
