#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StopTimelinecAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "", "<StopTimeline>c__AnonStorey2"));
	}

	template <typename T = float> T& prevElapsedTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__12(uintptr_t e) {
		return ((T (*)(StopTimelinecAnonStorey2*, uintptr_t))(Il2CppBase() + 0x4877678))(this, e);
	}

};

}
