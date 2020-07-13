#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetSceneRootCount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetSceneRootCount"));
	}

	template <typename T = uintptr_t> T& rootCount() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetSceneRootCount*))(Il2CppBase() + 0x4EFE738))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetSceneRootCount*))(Il2CppBase() + 0x4EFE75C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetSceneRootCount*))(Il2CppBase() + 0x4EFE820))(this);
	}
	template <typename T = void> T DoGetSceneRootCount() {
		return ((T (*)(GetSceneRootCount*))(Il2CppBase() + 0x4EFE794))(this);
	}

};

}
