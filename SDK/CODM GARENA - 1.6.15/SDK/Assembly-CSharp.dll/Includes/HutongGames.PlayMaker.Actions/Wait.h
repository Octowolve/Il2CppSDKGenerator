#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Wait
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Wait"));
	}

	template <typename T = uintptr_t> T& time() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& realTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Wait*))(Il2CppBase() + 0x4F1F0AC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Wait*))(Il2CppBase() + 0x4F1F0DC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Wait*))(Il2CppBase() + 0x4F1F164))(this);
	}

};

}
