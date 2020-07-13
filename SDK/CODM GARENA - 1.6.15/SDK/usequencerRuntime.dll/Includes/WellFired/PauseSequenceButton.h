#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class PauseSequenceButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "PauseSequenceButton"));
	}

	template <typename T = uintptr_t> T& sequenceToPause() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& manageInteractiveState() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PauseSequenceButton*))(Il2CppBase() + 0x4856D68))(this);
	}
	template <typename T = void> T PauseSequence() {
		return ((T (*)(PauseSequenceButton*))(Il2CppBase() + 0x4857670))(this);
	}

};

}
