#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TimiAudio.AudioLogic {

class InGameAudioLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TimiAudio.AudioLogic", "InGameAudioLogic"));
	}


	template <typename T = uintptr_t> T get_SndCfg() {
		return ((T (*)(InGameAudioLogic*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetGameMode(uintptr_t pMode, int32_t iMapID) {
		return ((T (*)(InGameAudioLogic*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, pMode, iMapID);
	}
	template <typename T = void> T RegisterEventHandler() {
		return ((T (*)(InGameAudioLogic*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T UnregisterEventHandler() {
		return ((T (*)(InGameAudioLogic*))(Il2CppBase() + 0x0))(this);
	}

};

}
