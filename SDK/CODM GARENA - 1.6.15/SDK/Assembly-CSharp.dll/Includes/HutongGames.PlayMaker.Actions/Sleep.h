#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Sleep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Sleep"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Sleep*))(Il2CppBase() + 0x502F74C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Sleep*))(Il2CppBase() + 0x502F758))(this);
	}
	template <typename T = void> T DoSleep() {
		return ((T (*)(Sleep*))(Il2CppBase() + 0x502F778))(this);
	}

};

}
