#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FloatSubtract
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FloatSubtract"));
	}

	template <typename T = uintptr_t> T& floatVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& subtract() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& perSecond() {
		return *(T*)((uintptr_t)this + 0x31);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FloatSubtract*))(Il2CppBase() + 0x50513B0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FloatSubtract*))(Il2CppBase() + 0x50513C4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FloatSubtract*))(Il2CppBase() + 0x5051488))(this);
	}
	template <typename T = void> T DoFloatSubtract() {
		return ((T (*)(FloatSubtract*))(Il2CppBase() + 0x50513F0))(this);
	}

};

}
