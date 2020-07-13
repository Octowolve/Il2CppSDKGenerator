#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class RandomBool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "RandomBool"));
	}

	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(RandomBool*))(Il2CppBase() + 0x4D81954))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(RandomBool*))(Il2CppBase() + 0x4D81960))(this);
	}

};

}
