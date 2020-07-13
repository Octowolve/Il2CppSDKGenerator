#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetOwner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetOwner"));
	}

	template <typename T = uintptr_t> T& storeGameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetOwner*))(Il2CppBase() + 0x508F954))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetOwner*))(Il2CppBase() + 0x508F960))(this);
	}

};

}
