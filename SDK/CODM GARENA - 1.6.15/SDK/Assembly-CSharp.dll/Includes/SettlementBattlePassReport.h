#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettlementBattlePassReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettlementBattlePassReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(SettlementBattlePassReport*))(Il2CppBase() + 0x49590B8))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(int32_t buttonType, int32_t actionType, int32_t num, int32_t vipVersionType) {
		return ((T (*)(SettlementBattlePassReport*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4959130))(this, buttonType, actionType, num, vipVersionType);
	}

};

}
