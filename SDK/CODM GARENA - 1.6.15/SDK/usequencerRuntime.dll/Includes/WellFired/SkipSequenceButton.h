#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class SkipSequenceButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "SkipSequenceButton"));
	}

	template <typename T = uintptr_t> T& sequenceToSkip() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& manageInteractiveState() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SkipSequenceButton*))(Il2CppBase() + 0x485A510))(this);
	}
	template <typename T = void> T SkipSequence() {
		return ((T (*)(SkipSequenceButton*))(Il2CppBase() + 0x485AE08))(this);
	}

};

}
