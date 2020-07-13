#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CTFRoundEndGameHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CTFRoundEndGameHUD"));
	}

	template <typename T = uintptr_t> T& CTFCampLeft_Flag() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& CTFCampRight_Flag() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CTFLeftCampIcon_Flag() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& CTFRightCampIcon_Flag() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CTFCampLeft_Score() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& CTFCampRight_Score() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& CTFLeftCampIcon_Score() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& CTFRightCampIcon_Score() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& RoundWin() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& RoundLose() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& RoundDraw() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& RoundFlagRoot() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& RoundFlagRoot_Win() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& RoundFlagRoot_Lose() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MineFlags() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EnemyFlags() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& GameScoreRoot() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& GameScoreRoot_Win() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& GameScoreRoot_Lose() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MineScores() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EnemyScores() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& MineScoreLabel() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& EnemyScoreLabel() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppString*> T& OpsSpriteName() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppString*> T& CDPSpriteName() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRoundResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelaySwitchShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CTFRoundEndGameHUD*))(Il2CppBase() + 0x40D7D1C))(this);
	}
	template <typename T = void> T ShowRoundResult(uintptr_t inGameResult) {
		return ((T (*)(CTFRoundEndGameHUD*, uintptr_t))(Il2CppBase() + 0x40D7E78))(this, inGameResult);
	}
	template <typename T = void> T DelaySwitchShow() {
		return ((T (*)(CTFRoundEndGameHUD*))(Il2CppBase() + 0x40D8930))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CTFRoundEndGameHUD*))(Il2CppBase() + 0x40D8A30))(this);
	}

};

}
