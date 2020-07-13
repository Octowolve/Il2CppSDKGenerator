#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassSettlementAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassSettlementAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_BeforeLv() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_BeforeExp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_FinalLv() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_FinalExp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_IsCaching() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCacheFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFinalLvExp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBattlePassSettlementData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T ResetData() {
		return ((T (*)(BattlePassSettlementAssist*))(Il2CppBase() + 0x2C13D70))(this);
	}
	template <typename T = void> T SetCacheFlag() {
		return ((T (*)(BattlePassSettlementAssist*))(Il2CppBase() + 0x2C32B9C))(this);
	}
	template <typename T = void> T SetFinalLvExp(int32_t lv, int32_t exp) {
		return ((T (*)(BattlePassSettlementAssist*, int32_t, int32_t))(Il2CppBase() + 0x2C32D10))(this, lv, exp);
	}
	template <typename T = uintptr_t> T GetBattlePassSettlementData() {
		return ((T (*)(BattlePassSettlementAssist*))(Il2CppBase() + 0x2C32E08))(this);
	}

};

}
