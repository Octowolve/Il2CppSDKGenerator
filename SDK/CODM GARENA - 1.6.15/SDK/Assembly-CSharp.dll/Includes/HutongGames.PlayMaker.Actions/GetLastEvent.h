#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetLastEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetLastEvent"));
	}

	template <typename T = uintptr_t> T& storeEvent() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetLastEvent*))(Il2CppBase() + 0x508DD38))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetLastEvent*))(Il2CppBase() + 0x508DD44))(this);
	}

};

}
