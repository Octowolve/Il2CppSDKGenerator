#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetSceneBuildIndex
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetSceneBuildIndex"));
	}

	template <typename T = uintptr_t> T& buildIndex() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetSceneBuildIndex*))(Il2CppBase() + 0x5092EF0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetSceneBuildIndex*))(Il2CppBase() + 0x5092F24))(this);
	}
	template <typename T = void> T DoGetSceneBuildIndex() {
		return ((T (*)(GetSceneBuildIndex*))(Il2CppBase() + 0x5092F4C))(this);
	}

};

}
