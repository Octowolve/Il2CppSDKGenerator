#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class BossHealthPlayerSoundConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "BossHealthPlayerSoundConfig"));
	}

	template <typename T = uint32_t> T& SoundId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& healthRatio() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
