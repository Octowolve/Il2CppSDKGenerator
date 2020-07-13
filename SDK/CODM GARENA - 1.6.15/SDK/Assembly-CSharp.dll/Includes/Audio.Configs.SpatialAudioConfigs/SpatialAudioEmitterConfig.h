#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Configs.SpatialAudioConfigs {

class SpatialAudioEmitterConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Configs.SpatialAudioConfigs", "SpatialAudioEmitterConfig"));
	}

	template <typename T = uintptr_t> T& CfgFor1P() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& CfgFor3P() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CfgForVehicle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
