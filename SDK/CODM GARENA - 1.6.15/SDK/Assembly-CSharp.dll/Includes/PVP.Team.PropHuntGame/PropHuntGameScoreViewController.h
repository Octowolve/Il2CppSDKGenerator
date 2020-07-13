#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntGameScoreViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntGameScoreViewController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeadingStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundCountChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PropHuntGameScoreViewController*))(Il2CppBase() + 0x34A4350))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PropHuntGameScoreViewController*))(Il2CppBase() + 0x34A445C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PropHuntGameScoreViewController*, float))(Il2CppBase() + 0x34A451C))(this, deltaTime);
	}
	template <typename T = void> T PrepareData(uintptr_t scoreModel) {
		return ((T (*)(PropHuntGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x34A45BC))(this, scoreModel);
	}
	template <typename T = uintptr_t> T UpdateLeadingStatus(uintptr_t scoreModel) {
		return ((T (*)(PropHuntGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x34A477C))(this, scoreModel);
	}
	template <typename T = void> T OnRoundCountChanged(uintptr_t msg) {
		return ((T (*)(PropHuntGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x34A4860))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PropHuntGameScoreViewController*))(Il2CppBase() + 0x34A4978))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PropHuntGameScoreViewController*))(Il2CppBase() + 0x34A4980))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PropHuntGameScoreViewController*, float))(Il2CppBase() + 0x34A4988))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PrepareData(uintptr_t P0) {
		return ((T (*)(PropHuntGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x34A4990))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_UpdateLeadingStatus(uintptr_t P0) {
		return ((T (*)(PropHuntGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x34A4998))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundCountChanged(uintptr_t P0) {
		return ((T (*)(PropHuntGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x34A49A0))(this, P0);
	}

};

}
