#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementPlayerItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementPlayerItemView"));
	}

	template <typename T = uintptr_t> T& LabelKill() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& LabelScore() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& LabelSurvive() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& LabelTotalDamage() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& LabelAccuracy() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& LabelWeakPointAccuracy() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& LabelAssist() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& LabelForwardDistance() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& LabelSkill() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& StatisticRoot() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& StillAliveRoot() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnReportClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T UpdateView(uintptr_t playerInfo, uint64_t matchGuid, uintptr_t gameMode) {
		return ((T (*)(BRSettlementPlayerItemView*, uintptr_t, uint64_t, uintptr_t))(Il2CppBase() + 0x3C2391C))(this, playerInfo, matchGuid, gameMode);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t playerInfo, uintptr_t gameMode) {
		return ((T (*)(BRSettlementPlayerItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C23A14))(this, playerInfo, gameMode);
	}
	template <typename T = void> T OnBtnReportClick() {
		return ((T (*)(BRSettlementPlayerItemView*))(Il2CppBase() + 0x3C23E08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlayerInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRSettlementPlayerItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C23EEC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnReportClick() {
		return ((T (*)(BRSettlementPlayerItemView*))(Il2CppBase() + 0x3C23EF4))(this);
	}

};

}
