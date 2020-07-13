#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class ReplaySequenceButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "ReplaySequenceButton"));
	}

	template <typename T = uintptr_t> T& sequenceToPlay() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& manageInteractiveState() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ReplaySequenceButton*))(Il2CppBase() + 0x4859758))(this);
	}
	template <typename T = void> T RunningTimeUpdated(uintptr_t sequence) {
		return ((T (*)(ReplaySequenceButton*, uintptr_t))(Il2CppBase() + 0x4859F24))(this, sequence);
	}
	template <typename T = void> T PlaySequence() {
		return ((T (*)(ReplaySequenceButton*))(Il2CppBase() + 0x485A050))(this);
	}

};

}
