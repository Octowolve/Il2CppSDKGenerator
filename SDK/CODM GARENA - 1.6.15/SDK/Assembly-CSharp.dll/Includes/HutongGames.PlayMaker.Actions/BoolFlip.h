#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class BoolFlip
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "BoolFlip"));
	}

	template <typename T = uintptr_t> T& boolVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(BoolFlip*))(Il2CppBase() + 0x4F34664))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(BoolFlip*))(Il2CppBase() + 0x4F34670))(this);
	}

};

}
