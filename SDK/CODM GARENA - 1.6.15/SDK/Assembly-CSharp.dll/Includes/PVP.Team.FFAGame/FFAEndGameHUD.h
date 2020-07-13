#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.FFAGame {

class FFAEndGameHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.FFAGame", "FFAEndGameHUD"));
	}

	template <typename T = uintptr_t> T& widgetWin() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& labelRank() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& widgetLose() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& widgetTop3() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& labelResultReasonWin() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& labelResultReasonLose() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Tops() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& RankContent() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ResWinEffectAnimator() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& ResLostEffectAnimator() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& DelayEndGame() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRoundResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTopInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWidgets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginShowRankContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(FFAEndGameHUD*))(Il2CppBase() + 0x401466C))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(FFAEndGameHUD*))(Il2CppBase() + 0x4014674))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(FFAEndGameHUD*))(Il2CppBase() + 0x4014680))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(FFAEndGameHUD*))(Il2CppBase() + 0x4014770))(this);
	}
	template <typename T = void> T ShowRoundResult() {
		return ((T (*)(FFAEndGameHUD*))(Il2CppBase() + 0x4014860))(this);
	}
	template <typename T = int32_t> T ShowTopInfos() {
		return ((T (*)(FFAEndGameHUD*))(Il2CppBase() + 0x401496C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T PrepareData() {
		return ((T (*)(FFAEndGameHUD*))(Il2CppBase() + 0x4015DCC))(this);
	}
	template <typename T = void> T ShowWidgets(int32_t myRank) {
		return ((T (*)(FFAEndGameHUD*, int32_t))(Il2CppBase() + 0x4015328))(this, myRank);
	}
	template <typename T = void> T BeginShowRankContent() {
		return ((T (*)(FFAEndGameHUD*))(Il2CppBase() + 0x40163B4))(this);
	}
	template <typename T = void> T BeginSettlement() {
		return ((T (*)(FFAEndGameHUD*))(Il2CppBase() + 0x40164A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(FFAEndGameHUD*))(Il2CppBase() + 0x40166E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(FFAEndGameHUD*))(Il2CppBase() + 0x40166F0))(this);
	}

};

}
