#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPScorePanelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPScorePanelView"));
	}

	template <typename T = uintptr_t> T& buttonMask() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& template() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& gridRootBlue() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& gridRootRed() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& playerListBlue() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& playerListRed() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& TitleTDMENRed() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& TitleDOMENRed() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& TitleHPENRed() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& TitleSDENRed() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& TitleTDMENBlue() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& TitleDOMENBlue() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& TitleHPENBlue() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& TitleSDENBlue() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& TitleMLKTFENRed() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& TitleMLKTFENBlue() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& TitleCTFENRed() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& TitleCTFENBlue() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& TitleGFENRed() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& TitleGFENBlue() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& TitleKCENRed() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& TitleKCENBlue() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& TitleDuelENRed() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& TitleDuelENBlue() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& TitleTDMCNRed() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& TitleDOMCNRed() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& TitleHPCNRed() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& TitleSDCNRed() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& TitleTDMCNBlue() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& TitleDOMCNBlue() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& TitleHPCNBlue() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& TitleSDCNBlue() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& TitleMLKTFCNRed() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& TitleMLKTFCNBlue() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& TitleCTFCNRed() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& TitleCTFCNBlue() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& TitleGFCNRed() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& TitleGFCNBlue() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& TitleKCCNBlue() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& TitleKCCNRed() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& TitleDuelCNRed() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& TitleDuelCNBlue() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& leftSideIconTransform() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& leftSideNameTransform() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& leftSideScoreTransform() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& rightSideIconTransform() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& rightSideNameTransform() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& rightSideScoreTransform() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& leftSideNameLabel() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& leftSideScoreLabel() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& rightSideNameLabel() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& rightSideScoreLabel() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = int32_t> static T& MAX_GRID_COUNT_PER_CAMP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareGrids() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGameModeTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillCampTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillPlayerStatis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSelfName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSelfPic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOpponentName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOpponentPic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PVPScorePanelView*))(Il2CppBase() + 0x2B166E0))(this);
	}
	template <typename T = void> T PrepareGrids() {
		return ((T (*)(PVPScorePanelView*))(Il2CppBase() + 0x2B16790))(this);
	}
	template <typename T = void> T SetCamp(uintptr_t localPlayerCamp) {
		return ((T (*)(PVPScorePanelView*, uintptr_t))(Il2CppBase() + 0x2B0DC34))(this, localPlayerCamp);
	}
	template <typename T = void> T SetGameModeTitle(uintptr_t mode) {
		return ((T (*)(PVPScorePanelView*, uintptr_t))(Il2CppBase() + 0x2B0D3C8))(this, mode);
	}
	template <typename T = void> T SetCampStats(uintptr_t gameMode, Il2CppList<uintptr_t>* blueData, Il2CppList<uintptr_t>* redData, uintptr_t myCamp) {
		return ((T (*)(PVPScorePanelView*, uintptr_t, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2B0DEF0))(this, gameMode, blueData, redData, myCamp);
	}
	template <typename T = void> T FillCampTitle(uintptr_t localPlayerCamp) {
		return ((T (*)(PVPScorePanelView*, uintptr_t))(Il2CppBase() + 0x2B16E0C))(this, localPlayerCamp);
	}
	template <typename T = void> T FillPlayerStatis(uintptr_t gameMode, uintptr_t localPlayerCamp, uintptr_t blueData, uintptr_t redData) {
		return ((T (*)(PVPScorePanelView*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B1713C))(this, gameMode, localPlayerCamp, blueData, redData);
	}
	template <typename T = Il2CppString*> T GetSelfName() {
		return ((T (*)(PVPScorePanelView*))(Il2CppBase() + 0x2B17684))(this);
	}
	template <typename T = uintptr_t> T GetSelfPic() {
		return ((T (*)(PVPScorePanelView*))(Il2CppBase() + 0x2B17768))(this);
	}
	template <typename T = Il2CppString*> T GetOpponentName() {
		return ((T (*)(PVPScorePanelView*))(Il2CppBase() + 0x2B1784C))(this);
	}
	template <typename T = uintptr_t> T GetOpponentPic() {
		return ((T (*)(PVPScorePanelView*))(Il2CppBase() + 0x2B179CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PVPScorePanelView*))(Il2CppBase() + 0x2B17B4C))(this);
	}

};

}
