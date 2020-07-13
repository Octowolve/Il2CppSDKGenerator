#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FloatChanged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FloatChanged"));
	}

	template <typename T = uintptr_t> T& floatVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& changedEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& previousValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FloatChanged*))(Il2CppBase() + 0x50502F4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FloatChanged*))(Il2CppBase() + 0x5050308))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FloatChanged*))(Il2CppBase() + 0x5050368))(this);
	}

};

}
