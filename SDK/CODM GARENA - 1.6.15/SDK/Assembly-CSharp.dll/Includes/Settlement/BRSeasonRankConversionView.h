#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSeasonRankConversionView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSeasonRankConversionView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& mMedals() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Pos() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& BtnNext() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SeasonName() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& SeasonNo() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& TurnFastDuration() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& TurnSlowDuration() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& StartWaitDuration() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& AudioAdvanceTime() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppVector3> T& SmallScale() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppVector3> T& BigScale() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& SmallAlpha() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& BigAlpha() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mLadderInfos() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = int32_t> static T& INTERVAL_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& bIsPlaying() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& mCurrentRank() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& mStartRank() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& mEndRank() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppString*> T& EFFECT_NAME() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRankConversionAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOneAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMedalView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRankView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayTweenAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSeasonName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BRSeasonRankConversionView*))(Il2CppBase() + 0x3C1D09C))(this);
	}
	template <typename T = void> T PlayRankConversionAnim(int32_t old_rank, int32_t new_rank) {
		return ((T (*)(BRSeasonRankConversionView*, int32_t, int32_t))(Il2CppBase() + 0x3C1D960))(this, old_rank, new_rank);
	}
	template <typename T = void> T OnAnimEnd() {
		return ((T (*)(BRSeasonRankConversionView*))(Il2CppBase() + 0x3C1DF50))(this);
	}
	template <typename T = void> T PlayOneAnim() {
		return ((T (*)(BRSeasonRankConversionView*))(Il2CppBase() + 0x3C1E1C8))(this);
	}
	template <typename T = void> T SetMedalView(int32_t rank, uintptr_t item) {
		return ((T (*)(BRSeasonRankConversionView*, int32_t, uintptr_t))(Il2CppBase() + 0x3C1E648))(this, rank, item);
	}
	template <typename T = void> T InitRankView() {
		return ((T (*)(BRSeasonRankConversionView*))(Il2CppBase() + 0x3C1DBE4))(this);
	}
	template <typename T = void> T PlayTweenAnim() {
		return ((T (*)(BRSeasonRankConversionView*))(Il2CppBase() + 0x3C1E8AC))(this);
	}
	template <typename T = void> T PlayEffect(int32_t index, bool flag) {
		return ((T (*)(BRSeasonRankConversionView*, int32_t, bool))(Il2CppBase() + 0x3C1D224))(this, index, flag);
	}
	template <typename T = void> T SetSeasonName(bool bLastSeason) {
		return ((T (*)(BRSeasonRankConversionView*, bool))(Il2CppBase() + 0x3C1D438))(this, bLastSeason);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRSeasonRankConversionView*))(Il2CppBase() + 0x3C1F1A8))(this);
	}
	template <typename T = void> T PlayRankConversionAnimm__0() {
		return ((T (*)(BRSeasonRankConversionView*))(Il2CppBase() + 0x3C1F30C))(this);
	}
	template <typename T = void> T PlayTweenAnimm__1() {
		return ((T (*)(BRSeasonRankConversionView*))(Il2CppBase() + 0x3C1F3D8))(this);
	}
	template <typename T = void> T PlayTweenAnimm__2() {
		return ((T (*)(BRSeasonRankConversionView*))(Il2CppBase() + 0x3C1F4A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRSeasonRankConversionView*))(Il2CppBase() + 0x3C1F5CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(BRSeasonRankConversionView*))(Il2CppBase() + 0x3C1F5D4))(this);
	}

};

}
