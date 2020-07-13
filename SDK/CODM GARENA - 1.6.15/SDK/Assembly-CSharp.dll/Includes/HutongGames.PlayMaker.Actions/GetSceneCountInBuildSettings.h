#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetSceneCountInBuildSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetSceneCountInBuildSettings"));
	}

	template <typename T = uintptr_t> T& sceneCountInBuildSettings() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetSceneCountInBuildSettings*))(Il2CppBase() + 0x5093068))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetSceneCountInBuildSettings*))(Il2CppBase() + 0x5093074))(this);
	}
	template <typename T = void> T DoGetSceneCountInBuildSettings() {
		return ((T (*)(GetSceneCountInBuildSettings*))(Il2CppBase() + 0x5093094))(this);
	}

};

}
