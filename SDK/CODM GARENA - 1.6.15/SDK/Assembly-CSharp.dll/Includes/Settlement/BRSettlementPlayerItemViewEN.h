#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementPlayerItemViewEN
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementPlayerItemViewEN"));
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
	template <typename T = uintptr_t> T& LabelRescue() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& LabelMileage() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& LabelSkill() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& StatisticRoot() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& StillAliveRoot() {
		return *(T*)((uintptr_t)this + 0x144);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrHealInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T UpdateView(uintptr_t playerInfo, uint64_t matchGuid, uintptr_t gameMode) {
		return ((T (*)(BRSettlementPlayerItemViewEN*, uintptr_t, uint64_t, uintptr_t))(Il2CppBase() + 0x3C212C4))(this, playerInfo, matchGuid, gameMode);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t playerInfo, uintptr_t gameMode) {
		return ((T (*)(BRSettlementPlayerItemViewEN*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C23FD8))(this, playerInfo, gameMode);
	}
	template <typename T = void> T SetBrHealInfo(uintptr_t playerInfo) {
		return ((T (*)(BRSettlementPlayerItemViewEN*, uintptr_t))(Il2CppBase() + 0x3C213BC))(this, playerInfo);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlayerInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRSettlementPlayerItemViewEN*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C249AC))(this, P0, P1);
	}

};

}
