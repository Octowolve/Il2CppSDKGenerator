#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FloatSignTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FloatSignTest"));
	}

	template <typename T = uintptr_t> T& floatValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& isPositive() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& isNegative() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FloatSignTest*))(Il2CppBase() + 0x505115C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FloatSignTest*))(Il2CppBase() + 0x5051190))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FloatSignTest*))(Il2CppBase() + 0x5051234))(this);
	}
	template <typename T = void> T DoSignTest() {
		return ((T (*)(FloatSignTest*))(Il2CppBase() + 0x50511BC))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(FloatSignTest*))(Il2CppBase() + 0x5051238))(this);
	}

};

}
