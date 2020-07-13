#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetJointConnectedBody
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetJointConnectedBody"));
	}

	template <typename T = uintptr_t> T& joint() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& rigidBody() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetJointConnectedBody*))(Il2CppBase() + 0x5026CC0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetJointConnectedBody*))(Il2CppBase() + 0x5026CCC))(this);
	}

};

}
