#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class DestroySelf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "DestroySelf"));
	}

	template <typename T = uintptr_t> T& detachChildren() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(DestroySelf*))(Il2CppBase() + 0x4FC61B4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(DestroySelf*))(Il2CppBase() + 0x4FC61D8))(this);
	}

};

}
