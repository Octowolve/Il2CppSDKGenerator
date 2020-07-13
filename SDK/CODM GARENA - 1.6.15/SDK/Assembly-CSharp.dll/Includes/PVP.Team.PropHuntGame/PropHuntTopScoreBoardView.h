#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntTopScoreBoardView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntTopScoreBoardView"));
	}

	template <typename T = uintptr_t> T& PropIcon() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& HunterIcon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& WhistlingIcon() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& GameTimeLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& WhistlingTimeLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ItemList() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ItemBGList() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& TipsRoot() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& TipsText() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& TipsBackground() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_TimeText() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_TargetScoreText() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_SelfScoreText() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_EnemyScoreText() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_TargetHintText() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGameTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimeForbidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAliveCnt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWhistleTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWhistleTimeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(PropHuntTopScoreBoardView*))(Il2CppBase() + 0x34B7FF4))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(PropHuntTopScoreBoardView*))(Il2CppBase() + 0x34B7FFC))(this);
	}
	template <typename T = void> T UpdateGameTime(int32_t totalTime, int32_t leftTime) {
		return ((T (*)(PropHuntTopScoreBoardView*, int32_t, int32_t))(Il2CppBase() + 0x34B800C))(this, totalTime, leftTime);
	}
	template <typename T = void> T SetTimeColor(uintptr_t color, float interval) {
		return ((T (*)(PropHuntTopScoreBoardView*, uintptr_t, float))(Il2CppBase() + 0x34B8224))(this, color, interval);
	}
	template <typename T = void> T SetTimeForbidden(uintptr_t color) {
		return ((T (*)(PropHuntTopScoreBoardView*, uintptr_t))(Il2CppBase() + 0x34B8328))(this, color);
	}
	template <typename T = void> T UpdateIcon(bool isPropItem) {
		return ((T (*)(PropHuntTopScoreBoardView*, bool))(Il2CppBase() + 0x34B8540))(this, isPropItem);
	}
	template <typename T = void> T UpdateAliveCnt(int32_t totalItemCnt, int32_t aliveItemCnt) {
		return ((T (*)(PropHuntTopScoreBoardView*, int32_t, int32_t))(Il2CppBase() + 0x34B8648))(this, totalItemCnt, aliveItemCnt);
	}
	template <typename T = void> T UpdateWhistleTime(int32_t leftTime) {
		return ((T (*)(PropHuntTopScoreBoardView*, int32_t))(Il2CppBase() + 0x34B883C))(this, leftTime);
	}
	template <typename T = void> T SetWhistleTimeColor(uintptr_t color) {
		return ((T (*)(PropHuntTopScoreBoardView*, uintptr_t))(Il2CppBase() + 0x34B8A90))(this, color);
	}

};

}
