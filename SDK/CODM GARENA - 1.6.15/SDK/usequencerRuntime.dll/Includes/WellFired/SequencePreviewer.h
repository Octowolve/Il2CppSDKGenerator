#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class SequencePreviewer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "SequencePreviewer"));
	}

	template <typename T = uintptr_t> T& sequenceToPreview() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SequencePreviewer*))(Il2CppBase() + 0x485A194))(this);
	}
	template <typename T = void> T SetRunningTime(float runningTime) {
		return ((T (*)(SequencePreviewer*, float))(Il2CppBase() + 0x485A404))(this, runningTime);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SequencePreviewer*))(Il2CppBase() + 0x485A43C))(this);
	}
	template <typename T = void> T Startm__28(float value) {
		return ((T (*)(SequencePreviewer*, float))(Il2CppBase() + 0x485A4FC))(this, value);
	}

};

}
