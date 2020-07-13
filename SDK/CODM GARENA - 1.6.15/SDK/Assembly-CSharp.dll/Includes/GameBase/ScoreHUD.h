#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ScoreHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ScoreHUD"));
	}

	template <typename T = uintptr_t> T& widgetRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& labelScore() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& reasonItemList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_Animator() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& m_CumulativeScore() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& m_ShowRoundEndTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> static T& m_RoundEndShowDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_ScoringClearDealy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& reasonLocalPosList() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = void*> T& inActiveQueue() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = void*> T& activeQueue() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& normalColor() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& cachedScoringList() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& UseOptimize() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& DoOptimizeRebind() {
		return *(T*)((uintptr_t)this + 0xB5);
	}
	template <typename T = bool> T& m_EnableCheckAnimationFinish() {
		return *(T*)((uintptr_t)this + 0xB6);
	}
	template <typename T = float> T& m_StartCheckAnimationFinishTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> static T& AnimationFinishTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeadReplayEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecutePlayScoring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayScoring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCumulativeScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemPlayFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCheckAnimationFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickCheckAnimationFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoAnimationFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimationFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ScoreHUD*))(Il2CppBase() + 0x2DF9B9C))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ScoreHUD*))(Il2CppBase() + 0x2DF9BA8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ScoreHUD*))(Il2CppBase() + 0x2DF9BB0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ScoreHUD*))(Il2CppBase() + 0x2DF9F4C))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(ScoreHUD*))(Il2CppBase() + 0x2DFA250))(this);
	}
	template <typename T = bool> T get_TickEnabled() {
		return ((T (*)(ScoreHUD*))(Il2CppBase() + 0x2DFA258))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(ScoreHUD*, float))(Il2CppBase() + 0x2DFA260))(this, dt);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(ScoreHUD*))(Il2CppBase() + 0x2DFA400))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ScoreHUD*))(Il2CppBase() + 0x2DF9FFC))(this);
	}
	template <typename T = void> T OnDeadReplayEnd() {
		return ((T (*)(ScoreHUD*))(Il2CppBase() + 0x2DFA7E0))(this);
	}
	template <typename T = void> T ExecutePlayScoring() {
		return ((T (*)(ScoreHUD*))(Il2CppBase() + 0x2DFB2E4))(this);
	}
	template <typename T = void> T PlayScoring(int32_t score, Il2CppString* reasonStr, bool AddOrSub, int32_t scoreCategory) {
		return ((T (*)(ScoreHUD*, int32_t, Il2CppString*, bool, int32_t))(Il2CppBase() + 0x2DFA9BC))(this, score, reasonStr, AddOrSub, scoreCategory);
	}
	template <typename T = void> T ClearCumulativeScore() {
		return ((T (*)(ScoreHUD*))(Il2CppBase() + 0x2DFA4EC))(this);
	}
	template <typename T = void> T OnItemPlayFinished(uintptr_t item) {
		return ((T (*)(ScoreHUD*, uintptr_t))(Il2CppBase() + 0x2DFBB7C))(this, item);
	}
	template <typename T = void> T StartCheckAnimationFinish() {
		return ((T (*)(ScoreHUD*))(Il2CppBase() + 0x2DFB3C0))(this);
	}
	template <typename T = void> T TickCheckAnimationFinish(float deltaTime) {
		return ((T (*)(ScoreHUD*, float))(Il2CppBase() + 0x2DFA320))(this, deltaTime);
	}
	template <typename T = void> T DoAnimationFinished() {
		return ((T (*)(ScoreHUD*))(Il2CppBase() + 0x2DFBD48))(this);
	}
	template <typename T = void> T OnAnimationFinished() {
		return ((T (*)(ScoreHUD*))(Il2CppBase() + 0x2DFBECC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ScoreHUD*))(Il2CppBase() + 0x2DFBF64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(ScoreHUD*))(Il2CppBase() + 0x2DFBF6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ScoreHUD*, float))(Il2CppBase() + 0x2DFBF74))(this, P0);
	}

};

}
