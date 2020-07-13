#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class PerSecond
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "PerSecond"));
	}

	template <typename T = uintptr_t> T& floatValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(PerSecond*))(Il2CppBase() + 0x4D7BC54))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(PerSecond*))(Il2CppBase() + 0x4D7BC68))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(PerSecond*))(Il2CppBase() + 0x4D7BD00))(this);
	}
	template <typename T = void> T DoPerSecond() {
		return ((T (*)(PerSecond*))(Il2CppBase() + 0x4D7BC94))(this);
	}

};

}
