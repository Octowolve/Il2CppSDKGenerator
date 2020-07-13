#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TakeDamageEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TakeDamageEffect"));
	}

	template <typename T = float> T& healthRatio() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& assetID() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
