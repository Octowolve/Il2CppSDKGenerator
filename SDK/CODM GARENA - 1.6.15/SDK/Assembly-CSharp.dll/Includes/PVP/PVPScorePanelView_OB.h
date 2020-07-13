#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPScorePanelViewOB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPScorePanelView_OB"));
	}

	template <typename T = uintptr_t> T& MatchTabBtn() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& FirstCampTabBtn() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& SecondCampTabBtn() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& FFATabBtn() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& FFAInfoObj() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& MatchGroupObj() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& GuerrillaGroupObj() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& SpecialForcesGroupObj() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& FirstCampItemList() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SecondCampItemList() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& CampNameInTab2() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& CampSpriteInTab2() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& CampNameInTab3() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& CampSpriteInTab3() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& WeaponDetail() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& BlueScrollView() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& RedScrollView() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& gridTop3() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& gridOthers() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& templateItemSmaller() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& templateItemBigger() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& gridList() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> static T& TOP_3_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& OTHER_5_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_SHOW_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerItemsInTabPage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayersVolatileInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCamp_OB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGrids() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T UpdatePlayerItemsInTabPage(uintptr_t gameMode, Il2CppList<uintptr_t>* blueData, Il2CppList<uintptr_t>* redData, uintptr_t myCamp) {
		return ((T (*)(PVPScorePanelViewOB*, uintptr_t, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2B120AC))(this, gameMode, blueData, redData, myCamp);
	}
	template <typename T = void> T UpdatePlayersVolatileInfo() {
		return ((T (*)(PVPScorePanelViewOB*))(Il2CppBase() + 0x2B13348))(this);
	}
	template <typename T = void> T SetCamp_OB(uintptr_t localPlayerCamp) {
		return ((T (*)(PVPScorePanelViewOB*, uintptr_t))(Il2CppBase() + 0x2B13B3C))(this, localPlayerCamp);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PVPScorePanelViewOB*))(Il2CppBase() + 0x2B17C78))(this);
	}
	template <typename T = void> T InitGrids() {
		return ((T (*)(PVPScorePanelViewOB*))(Il2CppBase() + 0x2B17D24))(this);
	}
	template <typename T = void> T SetCampStats(Il2CppList<uintptr_t>* psList) {
		return ((T (*)(PVPScorePanelViewOB*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2B13760))(this, psList);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PVPScorePanelViewOB*))(Il2CppBase() + 0x2B18008))(this);
	}

};

}
