#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetName"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& name() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetName*))(Il2CppBase() + 0x5029B7C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetName*))(Il2CppBase() + 0x5029B88))(this);
	}
	template <typename T = void> T DoSetLayer() {
		return ((T (*)(SetName*))(Il2CppBase() + 0x5029BA8))(this);
	}

};

}
