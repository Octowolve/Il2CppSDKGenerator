#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetSceneRootGameObjects
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetSceneRootGameObjects"));
	}

	template <typename T = uintptr_t> T& rootGameObjects() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetSceneRootGameObjects*))(Il2CppBase() + 0x4EFE82C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetSceneRootGameObjects*))(Il2CppBase() + 0x4EFE850))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetSceneRootGameObjects*))(Il2CppBase() + 0x4EFE914))(this);
	}
	template <typename T = void> T DoGetSceneRootGameObjects() {
		return ((T (*)(GetSceneRootGameObjects*))(Il2CppBase() + 0x4EFE888))(this);
	}

};

}
