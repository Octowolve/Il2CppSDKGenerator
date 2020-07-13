#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class PlayPauseSequenceToggleButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "PlayPauseSequenceToggleButton"));
	}

	template <typename T = Il2CppString*> T& pausedText() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& playingText() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& sequenceToPlay() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& cachedButtonLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PlayPauseSequenceToggleButton*))(Il2CppBase() + 0x4857988))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PlayPauseSequenceToggleButton*))(Il2CppBase() + 0x4857BF8))(this);
	}
	template <typename T = void> T ToggleSequence() {
		return ((T (*)(PlayPauseSequenceToggleButton*))(Il2CppBase() + 0x4857C60))(this);
	}
	template <typename T = void> T Startm__1C() {
		return ((T (*)(PlayPauseSequenceToggleButton*))(Il2CppBase() + 0x485807C))(this);
	}

};

}
