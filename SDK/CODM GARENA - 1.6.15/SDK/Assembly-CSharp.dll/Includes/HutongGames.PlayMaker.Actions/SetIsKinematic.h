#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetIsKinematic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetIsKinematic"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& isKinematic() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetIsKinematic*))(Il2CppBase() + 0x5026B5C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetIsKinematic*))(Il2CppBase() + 0x5026B88))(this);
	}
	template <typename T = void> T DoSetIsKinematic() {
		return ((T (*)(SetIsKinematic*))(Il2CppBase() + 0x5026BA8))(this);
	}

};

}
