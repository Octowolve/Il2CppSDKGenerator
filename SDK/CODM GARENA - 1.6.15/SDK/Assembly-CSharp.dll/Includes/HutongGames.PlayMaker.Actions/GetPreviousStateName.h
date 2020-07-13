#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetPreviousStateName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetPreviousStateName"));
	}

	template <typename T = uintptr_t> T& storeName() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetPreviousStateName*))(Il2CppBase() + 0x508FE14))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetPreviousStateName*))(Il2CppBase() + 0x508FE20))(this);
	}

};

}
