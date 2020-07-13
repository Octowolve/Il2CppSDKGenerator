#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PresetPromotionLevelItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PresetPromotionLevelItem"));
	}

	template <typename T = int32_t> T& minLevel() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& maxLevel() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& originalPreset() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& promotePreset() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
