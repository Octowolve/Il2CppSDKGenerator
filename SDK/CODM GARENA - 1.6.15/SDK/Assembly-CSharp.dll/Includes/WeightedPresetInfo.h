#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeightedPresetInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeightedPresetInfo"));
	}

	template <typename T = uintptr_t> T& preset() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& weight() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
