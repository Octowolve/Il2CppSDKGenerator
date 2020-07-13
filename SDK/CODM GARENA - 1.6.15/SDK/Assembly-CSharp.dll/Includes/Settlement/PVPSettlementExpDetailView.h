#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVPSettlementExpDetailView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVPSettlementExpDetailView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& GoBtnContainer() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& BtnDetail() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& BtnExit() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& BtnPlayagain() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& LabelNextLevel() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ScoreAnimObj() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& expBuffView() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& expWeaponView() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = float> T& AnimDelayDelta() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitExpDetailList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SkipLevelUpView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T InitView(uintptr_t ds, Il2CppList<uintptr_t>* weaponItemDatas) {
		return ((T (*)(PVPSettlementExpDetailView*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3B472E4))(this, ds, weaponItemDatas);
	}
	template <typename T = void> T InitExpDetailList() {
		return ((T (*)(PVPSettlementExpDetailView*))(Il2CppBase() + 0x3B475C4))(this);
	}
	template <typename T = void> T T_SkipLevelUpView() {
		return ((T (*)(PVPSettlementExpDetailView*))(Il2CppBase() + 0x3B48750))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitView(uintptr_t P0, Il2CppList<uintptr_t>* P1) {
		return ((T (*)(PVPSettlementExpDetailView*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3B489C8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_InitExpDetailList() {
		return ((T (*)(PVPSettlementExpDetailView*))(Il2CppBase() + 0x3B489D0))(this);
	}

};

}
