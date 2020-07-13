#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class CreateScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "CreateScene"));
	}

	template <typename T = uintptr_t> T& sceneName() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(CreateScene*))(Il2CppBase() + 0x4FBF81C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(CreateScene*))(Il2CppBase() + 0x4FBF828))(this);
	}

};

}
