#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class IntAdd
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "IntAdd"));
	}

	template <typename T = uintptr_t> T& intVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& add() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(IntAdd*))(Il2CppBase() + 0x4F09458))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(IntAdd*))(Il2CppBase() + 0x4F0946C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(IntAdd*))(Il2CppBase() + 0x4F094E0))(this);
	}

};

}
