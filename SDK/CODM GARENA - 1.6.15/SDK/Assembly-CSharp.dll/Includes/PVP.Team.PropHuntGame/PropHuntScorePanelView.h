#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntScorePanelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntScorePanelView"));
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
	template <typename T = uintptr_t> T& TitlePHRed() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& TitlePHBlue() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& leftSideIconTransform() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& leftSideNameTransform() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& leftSideScoreTransform() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& rightSideIconTransform() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& rightSideNameTransform() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& rightSideScoreTransform() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& leftSideNameLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& leftSideScoreLabel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& rightSideNameLabel() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& rightSideScoreLabel() {
		return *(T*)((uintptr_t)this + 0xC4);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetGameModeTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PropHuntScorePanelView*))(Il2CppBase() + 0x34B66B0))(this);
	}
	template <typename T = void> T PrepareGrids() {
		return ((T (*)(PropHuntScorePanelView*))(Il2CppBase() + 0x34B6760))(this);
	}
	template <typename T = void> T SetGameModeTitle(uintptr_t mode) {
		return ((T (*)(PropHuntScorePanelView*, uintptr_t))(Il2CppBase() + 0x34B401C))(this, mode);
	}
	template <typename T = void> T SetCampStats(uintptr_t blueData, uintptr_t redData, uintptr_t rankBlue, uintptr_t rankRed) {
		return ((T (*)(PropHuntScorePanelView*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x34B4124))(this, blueData, redData, rankBlue, rankRed);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PropHuntScorePanelView*))(Il2CppBase() + 0x34B6DDC))(this);
	}

};

}
