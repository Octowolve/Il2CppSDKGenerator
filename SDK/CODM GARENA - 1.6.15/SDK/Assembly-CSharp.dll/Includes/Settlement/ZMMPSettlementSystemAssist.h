#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class ZMMPSettlementSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "ZMMPSettlementSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqMPCardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqCardLottery() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqCardLotteryEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ReqCardLotteryEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T ReqMPCardInfo() {
		return ((T (*)(ZMMPSettlementSystemAssist*))(Il2CppBase() + 0x298B648))(this);
	}
	template <typename T = void> T ReqCardLottery(bool all) {
		return ((T (*)(ZMMPSettlementSystemAssist*, bool))(Il2CppBase() + 0x298B7CC))(this, all);
	}
	template <typename T = void> T ReqCardLotteryEnd(uint32_t playerId) {
		return ((T (*)(ZMMPSettlementSystemAssist*, uint32_t))(Il2CppBase() + 0x298B928))(this, playerId);
	}
	template <typename T = void> T ReqCardLotteryEnd_1() {
		return ((T (*)(ZMMPSettlementSystemAssist*))(Il2CppBase() + 0x298B444))(this);
	}

};

}
