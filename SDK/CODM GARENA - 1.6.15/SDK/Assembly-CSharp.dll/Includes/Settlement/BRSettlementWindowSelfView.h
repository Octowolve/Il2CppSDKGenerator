#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementWindowSelfView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementWindowSelfView"));
	}

	template <typename T = uintptr_t> T& LabelRank() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& LabelTotal() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& LabelSlogan() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& BtnExit() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& All3() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& All2() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& ContainerSpreadButton() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& ContainerRetractButton() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& BtnSpread() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& BtnRetract() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankSlogan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDetailInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpreadDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetRankSlogan(uint32_t rank, int32_t total) {
		return ((T (*)(BRSettlementWindowSelfView*, uint32_t, int32_t))(Il2CppBase() + 0x3C373C0))(this, rank, total);
	}
	template <typename T = void> T SetDetailInfo(uintptr_t matchType, uint32_t totalGold, uint32_t goldByRank, uint32_t goldByKill, uint32_t totalExp, uint32_t expByRank, uint32_t expByKill, int32_t trophyChange) {
		return ((T (*)(BRSettlementWindowSelfView*, uintptr_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x3C37604))(this, matchType, totalGold, goldByRank, goldByKill, totalExp, expByRank, expByKill, trophyChange);
	}
	template <typename T = void> T SpreadDetail(bool show) {
		return ((T (*)(BRSettlementWindowSelfView*, bool))(Il2CppBase() + 0x3C37B8C))(this, show);
	}

};

}
