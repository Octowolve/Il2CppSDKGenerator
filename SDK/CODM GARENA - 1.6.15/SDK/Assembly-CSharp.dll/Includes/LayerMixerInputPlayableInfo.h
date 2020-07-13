#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LayerMixerInputPlayableInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LayerMixerInputPlayableInfo"));
	}

	template <typename T = uintptr_t> T& PlayableNode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Mask() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& IsAdditive() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Weight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
