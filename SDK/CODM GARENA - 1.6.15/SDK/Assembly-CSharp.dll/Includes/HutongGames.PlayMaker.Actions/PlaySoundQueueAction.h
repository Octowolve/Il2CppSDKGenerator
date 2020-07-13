#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class PlaySoundQueueAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "PlaySoundQueueAction"));
	}

	template <typename T = Il2CppString*> T& SoundName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& PlayNow() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(PlaySoundQueueAction*))(Il2CppBase() + 0x4D7ECD4))(this);
	}

};

}
