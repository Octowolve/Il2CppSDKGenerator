#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTrainingGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTrainingGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(BRTrainingGameBuilder*))(Il2CppBase() + 0x2638BE0))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(BRTrainingGameBuilder*))(Il2CppBase() + 0x2638BE8))(this);
	}
	template <typename T = Il2CppString*> T get_m_GameCfgPath() {
		return ((T (*)(BRTrainingGameBuilder*))(Il2CppBase() + 0x2638CA4))(this);
	}

};

}
