#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ladder {

class LadderRankMedalItemViewEN
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ladder", "LadderRankMedalItemViewEN"));
	}

	template <typename T = uintptr_t> T& SpriteMedal() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& SpriteLock() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LabelRank() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& LabelCurrRank() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& mTweenAlpha() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& mTweenScale() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& mTweenPosition() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& NonLoopingFX() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& MedalTweenScale() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MedalScaleAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T InitView(int32_t rank, int32_t currRank, bool bIsPVP, bool bLocked) {
		return ((T (*)(LadderRankMedalItemViewEN*, int32_t, int32_t, bool, bool))(Il2CppBase() + 0x492487C))(this, rank, currRank, bIsPVP, bLocked);
	}
	template <typename T = void> T PlayAnim(float fromAlpha, float toAlpha, Il2CppVector3 fromScale, Il2CppVector3 toScale, Il2CppVector3 fromPos, Il2CppVector3 toPos, float Duration) {
		return ((T (*)(LadderRankMedalItemViewEN*, float, float, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4924C68))(this, fromAlpha, toAlpha, fromScale, toScale, fromPos, toPos, Duration);
	}
	template <typename T = void> T PlayAnim_1(Il2CppVector3 fromScale, Il2CppVector3 toScale, float DurationFirst, float DurationSecond) {
		return ((T (*)(LadderRankMedalItemViewEN*, Il2CppVector3, Il2CppVector3, float, float))(Il2CppBase() + 0x4925048))(this, fromScale, toScale, DurationFirst, DurationSecond);
	}
	template <typename T = uintptr_t> T MedalScaleAnim(Il2CppVector3 fromScale, Il2CppVector3 toScale, float DurationFirst, float DurationSecond) {
		return ((T (*)(LadderRankMedalItemViewEN*, Il2CppVector3, Il2CppVector3, float, float))(Il2CppBase() + 0x4925164))(this, fromScale, toScale, DurationFirst, DurationSecond);
	}

};

}
