#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SeasonShowTimeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SeasonShowTimeView"));
	}

	template <typename T = uintptr_t> T& BackgroundRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LastSeasonRoot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LastSeasonTimeLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& MpSeasonRoot() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& MpSeasonDescriptionRoot() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& MpSeasonDescriptionSeasonUI() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& MpSeasonAwardRoot() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& MpSeasonAwardSeasonUI() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& MpSeasonAwardNameLabel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& MpSeasonAwardItemList() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& MpSeasonAwardBigSprite() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& MpSeasonBigLogo() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& MpSeasonAwardContinueBtn() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& BrSeasonRoot() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& BrSeasonDescriptionRoot() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& BrSeasonDescriptionSeasonUI() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& BrSeasonAwardRoot() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& BrSeasonAwardSeasonUI() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& BrSeasonAwardNameLabel() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BrSeasonAwardItemList() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& BrSeasonAwardBigSprite() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& BrSeasonBigLogo() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& BrSeasonAwardContinueBtn() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& MainMediaPlayer() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& MediaTexture() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& MediaPlayerAdapter() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& bPlaying() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& bMpShowFinish() {
		return *(T*)((uintptr_t)this + 0xE5);
	}
	template <typename T = uintptr_t> T& waitObj() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& mMpLadderSeasonInfo() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& mBrLadderSeasonInfo() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DontCacheFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMpContinueClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRContinueClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_bNotFoundVideoFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVideoPart1Name() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVideoPart2Name() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVideoSoundBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVideoSoundStartCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVideoSoundStopCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishShowImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SeasonShowTimeView*))(Il2CppBase() + 0x4486D64))(this);
	}
	template <typename T = bool> T DontCacheFlag() {
		return ((T (*)(SeasonShowTimeView*))(Il2CppBase() + 0x4486EFC))(this);
	}
	template <typename T = void> T OnMpContinueClick(uintptr_t obj) {
		return ((T (*)(SeasonShowTimeView*, uintptr_t))(Il2CppBase() + 0x4486F9C))(this, obj);
	}
	template <typename T = void> T OnBRContinueClick(uintptr_t obj) {
		return ((T (*)(SeasonShowTimeView*, uintptr_t))(Il2CppBase() + 0x4487048))(this, obj);
	}
	template <typename T = void> T StartShow() {
		return ((T (*)(SeasonShowTimeView*))(Il2CppBase() + 0x4486550))(this);
	}
	template <typename T = bool> T bNotFoundVideoFile() {
		return ((T (*)(SeasonShowTimeView*))(Il2CppBase() + 0x4487264))(this);
	}
	template <typename T = Il2CppString*> T GetVideoPart1Name() {
		return ((T (*)(SeasonShowTimeView*))(Il2CppBase() + 0x44874E0))(this);
	}
	template <typename T = Il2CppString*> T GetVideoPart2Name() {
		return ((T (*)(SeasonShowTimeView*))(Il2CppBase() + 0x4487864))(this);
	}
	template <typename T = Il2CppString*> T GetVideoSoundBank() {
		return ((T (*)(SeasonShowTimeView*))(Il2CppBase() + 0x4487BE8))(this);
	}
	template <typename T = Il2CppString*> T GetVideoSoundStartCmd() {
		return ((T (*)(SeasonShowTimeView*))(Il2CppBase() + 0x4487D40))(this);
	}
	template <typename T = Il2CppString*> T GetVideoSoundStopCmd() {
		return ((T (*)(SeasonShowTimeView*))(Il2CppBase() + 0x4487E98))(this);
	}
	template <typename T = uintptr_t> T Play() {
		return ((T (*)(SeasonShowTimeView*))(Il2CppBase() + 0x4487400))(this);
	}
	template <typename T = void> T FinishShow() {
		return ((T (*)(SeasonShowTimeView*))(Il2CppBase() + 0x44870F4))(this);
	}
	template <typename T = void> T FinishShowImpl() {
		return ((T (*)(SeasonShowTimeView*))(Il2CppBase() + 0x448447C))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(SeasonShowTimeView*))(Il2CppBase() + 0x4487FF8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(SeasonShowTimeView*, float))(Il2CppBase() + 0x44880B0))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SeasonShowTimeView*))(Il2CppBase() + 0x4488260))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_DontCacheFlag() {
		return ((T (*)(SeasonShowTimeView*))(Il2CppBase() + 0x4488268))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SeasonShowTimeView*, float))(Il2CppBase() + 0x4488270))(this, P0);
	}

};

}
