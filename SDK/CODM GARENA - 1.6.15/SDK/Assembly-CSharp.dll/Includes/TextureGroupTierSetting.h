#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TextureGroupTierSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextureGroupTierSetting"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& TierSetting() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
