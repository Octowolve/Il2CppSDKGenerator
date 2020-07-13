#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTrainingGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTrainingGameInfo"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBRTrainingGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T IsBRTrainingGame() {
		return ((T (*)(BRTrainingGameInfo*))(Il2CppBase() + 0x2638DF8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsBRTrainingGame() {
		return ((T (*)(BRTrainingGameInfo*))(Il2CppBase() + 0x2638E98))(this);
	}

};

}
