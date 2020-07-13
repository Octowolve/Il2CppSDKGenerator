#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class DrawStateLabel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "DrawStateLabel"));
	}

	template <typename T = uintptr_t> T& showLabel() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(DrawStateLabel*))(Il2CppBase() + 0x4FC7258))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(DrawStateLabel*))(Il2CppBase() + 0x4FC727C))(this);
	}

};

}
