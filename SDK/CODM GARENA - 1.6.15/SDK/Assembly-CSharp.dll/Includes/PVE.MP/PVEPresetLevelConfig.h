#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class PVEPresetLevelConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "PVEPresetLevelConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& presetLevelConfig() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& presetPromoteLevelConfig() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
