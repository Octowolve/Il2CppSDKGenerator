#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.INFGame {

class InfectGameScoreViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.INFGame", "InfectGameScoreViewController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeadingStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(InfectGameScoreViewController*))(Il2CppBase() + 0x403C508))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(InfectGameScoreViewController*))(Il2CppBase() + 0x403C5C8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(InfectGameScoreViewController*))(Il2CppBase() + 0x403C6D4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(InfectGameScoreViewController*))(Il2CppBase() + 0x403C77C))(this);
	}
	template <typename T = void> T OnRoundStarted(uintptr_t msg) {
		return ((T (*)(InfectGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x403C824))(this, msg);
	}
	template <typename T = void> T PrepareData(uintptr_t scoreModel) {
		return ((T (*)(InfectGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x403C8D8))(this, scoreModel);
	}
	template <typename T = uintptr_t> T UpdateLeadingStatus(uintptr_t scoreModel) {
		return ((T (*)(InfectGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x403CA50))(this, scoreModel);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(InfectGameScoreViewController*))(Il2CppBase() + 0x403CBAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(InfectGameScoreViewController*))(Il2CppBase() + 0x403CBB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(InfectGameScoreViewController*))(Il2CppBase() + 0x403CBBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(InfectGameScoreViewController*))(Il2CppBase() + 0x403CBC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStarted(uintptr_t P0) {
		return ((T (*)(InfectGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x403CBCC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PrepareData(uintptr_t P0) {
		return ((T (*)(InfectGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x403CBD4))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_UpdateLeadingStatus(uintptr_t P0) {
		return ((T (*)(InfectGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x403CBDC))(this, P0);
	}

};

}
