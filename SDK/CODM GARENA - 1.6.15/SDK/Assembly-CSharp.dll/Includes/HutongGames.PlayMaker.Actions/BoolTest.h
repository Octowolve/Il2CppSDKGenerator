#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class BoolTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "BoolTest"));
	}

	template <typename T = uintptr_t> T& boolVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& isTrue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& isFalse() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(BoolTest*))(Il2CppBase() + 0x4F34934))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(BoolTest*))(Il2CppBase() + 0x4F3494C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(BoolTest*))(Il2CppBase() + 0x4F349C4))(this);
	}

};

}
