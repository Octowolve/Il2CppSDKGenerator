#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USRecord"));
	}


	template <typename T = int32_t> static T GetResolutionX() {
		return ((T (*)(void *))(Il2CppBase() + 0x486A02C))(0);
	}
	template <typename T = int32_t> static T GetResolutionY() {
		return ((T (*)(void *))(Il2CppBase() + 0x486A264))(0);
	}
	template <typename T = int32_t> static T GetFramerate() {
		return ((T (*)(void *))(Il2CppBase() + 0x486A324))(0);
	}
	template <typename T = int32_t> static T GetUpscaleAmount() {
		return ((T (*)(void *))(Il2CppBase() + 0x486A55C))(0);
	}

};

}
