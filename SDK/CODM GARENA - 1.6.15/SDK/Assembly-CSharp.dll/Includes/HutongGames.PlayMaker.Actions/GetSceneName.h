#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetSceneName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetSceneName"));
	}

	template <typename T = uintptr_t> T& name() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetSceneName*))(Il2CppBase() + 0x4EFE268))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetSceneName*))(Il2CppBase() + 0x4EFE288))(this);
	}
	template <typename T = void> T DoGetSceneName() {
		return ((T (*)(GetSceneName*))(Il2CppBase() + 0x4EFE2B4))(this);
	}

};

}
