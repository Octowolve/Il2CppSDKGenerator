#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassSettlementData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassSettlementData"));
	}

	template <typename T = int32_t> T& BeforeLv() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& BeforeExp() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& FinalLv() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& FinalExp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(BattlePassSettlementData*))(Il2CppBase() + 0x2C333B0))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(BattlePassSettlementData*))(Il2CppBase() + 0x2C33468))(this);
	}

};

}
