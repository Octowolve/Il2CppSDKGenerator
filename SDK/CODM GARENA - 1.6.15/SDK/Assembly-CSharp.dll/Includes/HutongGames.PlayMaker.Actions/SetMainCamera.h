#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetMainCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetMainCamera"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetMainCamera*))(Il2CppBase() + 0x502824C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetMainCamera*))(Il2CppBase() + 0x5028258))(this);
	}

};

}