#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SPVP.Ladder {

class SpvpLadderScoreFeedbackWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SPVP.Ladder", "SpvpLadderScoreFeedbackWindowView"));
	}

	template <typename T = uintptr_t> T& LabelLastLadderScore() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& LabelLadderScoreChange() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& SpriteRankIcon() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& LabelRankName() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& SpriteLastScore() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& SpriteAddScore() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& SpriteDeleteScore() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& m_OriginalPer() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& m_CurPer() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& m_TagetPer() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& m_Progress() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetProgressActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Update() {
		return ((T (*)(SpvpLadderScoreFeedbackWindowView*))(Il2CppBase() + 0x4306808))(this);
	}
	template <typename T = void> T SetProgressActive() {
		return ((T (*)(SpvpLadderScoreFeedbackWindowView*))(Il2CppBase() + 0x430644C))(this);
	}
	template <typename T = void> T UpdateView(int32_t lastScore, int32_t changeScore) {
		return ((T (*)(SpvpLadderScoreFeedbackWindowView*, int32_t, int32_t))(Il2CppBase() + 0x4305B28))(this, lastScore, changeScore);
	}

};

}
