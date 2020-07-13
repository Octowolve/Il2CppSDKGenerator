#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTrainingGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTrainingGame"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnRoundStart() {
		return ((T (*)(BRTrainingGame*))(Il2CppBase() + 0x2638998))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart() {
		return ((T (*)(BRTrainingGame*))(Il2CppBase() + 0x2638B34))(this);
	}

};

}
