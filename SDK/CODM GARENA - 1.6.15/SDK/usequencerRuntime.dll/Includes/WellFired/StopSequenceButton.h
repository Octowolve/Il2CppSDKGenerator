#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class StopSequenceButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "StopSequenceButton"));
	}

	template <typename T = uintptr_t> T& sequenceToStop() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& manageInteractiveState() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(StopSequenceButton*))(Il2CppBase() + 0x485BA18))(this);
	}
	template <typename T = void> T StopSequence() {
		return ((T (*)(StopSequenceButton*))(Il2CppBase() + 0x485C304))(this);
	}

};

}
