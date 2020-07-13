#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class PlayVoiceAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "PlayVoiceAction"));
	}

	template <typename T = Il2CppString*> T& VoiceName() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(PlayVoiceAction*))(Il2CppBase() + 0x4D7EEF4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(PlayVoiceAction*))(Il2CppBase() + 0x4D7EFAC))(this);
	}

};

}
