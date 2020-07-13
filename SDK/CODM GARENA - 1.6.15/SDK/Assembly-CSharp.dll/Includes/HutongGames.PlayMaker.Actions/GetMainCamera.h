#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetMainCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetMainCamera"));
	}

	template <typename T = uintptr_t> T& storeGameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetMainCamera*))(Il2CppBase() + 0x508DFE4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetMainCamera*))(Il2CppBase() + 0x508DFF0))(this);
	}

};

}
