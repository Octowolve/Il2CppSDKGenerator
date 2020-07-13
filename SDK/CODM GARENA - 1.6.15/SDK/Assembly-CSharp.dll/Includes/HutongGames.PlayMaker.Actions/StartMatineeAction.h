#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StartMatineeAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StartMatineeAction"));
	}

	template <typename T = Il2CppString*> T& MatineeName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& PlaybackRate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& IsReset() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& ResetTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& BlendInTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(StartMatineeAction*))(Il2CppBase() + 0x5032DA4))(this);
	}
	template <typename T = void> T OnMatineeFinished() {
		return ((T (*)(StartMatineeAction*))(Il2CppBase() + 0x5032EE0))(this);
	}

};

}
