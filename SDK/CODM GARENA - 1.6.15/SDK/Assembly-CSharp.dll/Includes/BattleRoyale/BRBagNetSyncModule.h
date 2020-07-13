#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRBagNetSyncModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRBagNetSyncModule"));
	}

	template <typename T = uintptr_t> T& m_CahcedPawn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_Pawn() {
		return ((T (*)(BRBagNetSyncModule*))(Il2CppBase() + 0x24D2900))(this);
	}
	template <typename T = uintptr_t> T get_PawnInfo() {
		return ((T (*)(BRBagNetSyncModule*))(Il2CppBase() + 0x24D2A0C))(this);
	}

};

}
