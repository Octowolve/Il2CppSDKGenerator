#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class DontDestroyOnLoad
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "DontDestroyOnLoad"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(DontDestroyOnLoad*))(Il2CppBase() + 0x4FC69B4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(DontDestroyOnLoad*))(Il2CppBase() + 0x4FC69C0))(this);
	}

};

}
