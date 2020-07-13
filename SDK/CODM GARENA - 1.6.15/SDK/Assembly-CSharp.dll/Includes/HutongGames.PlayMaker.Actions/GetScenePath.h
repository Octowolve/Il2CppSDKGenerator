#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetScenePath
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetScenePath"));
	}

	template <typename T = uintptr_t> T& path() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetScenePath*))(Il2CppBase() + 0x4EFE348))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetScenePath*))(Il2CppBase() + 0x4EFE368))(this);
	}
	template <typename T = void> T DoGetScenePath() {
		return ((T (*)(GetScenePath*))(Il2CppBase() + 0x4EFE394))(this);
	}

};

}
