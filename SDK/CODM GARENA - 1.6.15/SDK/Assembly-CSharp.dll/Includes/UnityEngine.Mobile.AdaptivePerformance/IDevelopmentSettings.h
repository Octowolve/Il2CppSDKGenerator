#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class IDevelopmentSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "IDevelopmentSettings"));
	}


	template <typename T = bool> T get_Logging() {
		return ((T (*)(IDevelopmentSettings*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Logging(bool value) {
		return ((T (*)(IDevelopmentSettings*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = int32_t> T get_LoggingFrequencyInFrames() {
		return ((T (*)(IDevelopmentSettings*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_LoggingFrequencyInFrames(int32_t value) {
		return ((T (*)(IDevelopmentSettings*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
