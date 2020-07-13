#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class EaseColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "EaseColor"));
	}

	template <typename T = uintptr_t> T& fromValue() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& toValue() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& colorVariable() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& finishInNextStep() {
		return *(T*)((uintptr_t)this + 0x7C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(EaseColor*))(Il2CppBase() + 0x4FC78D4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(EaseColor*))(Il2CppBase() + 0x4FC7B0C))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(EaseColor*))(Il2CppBase() + 0x4FC7F60))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(EaseColor*))(Il2CppBase() + 0x4FC7F68))(this);
	}

};

}
