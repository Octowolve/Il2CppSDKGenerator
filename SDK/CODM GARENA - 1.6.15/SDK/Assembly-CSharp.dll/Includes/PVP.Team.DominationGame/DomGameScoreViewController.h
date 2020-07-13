#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.DominationGame {

class DomGameScoreViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.DominationGame", "DomGameScoreViewController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnDomAreaCampChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundCountChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(DomGameScoreViewController*))(Il2CppBase() + 0x2B33E80))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DomGameScoreViewController*))(Il2CppBase() + 0x2B33F40))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(DomGameScoreViewController*))(Il2CppBase() + 0x2B34048))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(DomGameScoreViewController*))(Il2CppBase() + 0x2B34170))(this);
	}
	template <typename T = void> T OnDomAreaCampChanged(uintptr_t msg) {
		return ((T (*)(DomGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x2B34228))(this, msg);
	}
	template <typename T = void> T OnRoundCountChanged(uintptr_t msg) {
		return ((T (*)(DomGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x2B343A0))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(DomGameScoreViewController*))(Il2CppBase() + 0x2B344B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DomGameScoreViewController*))(Il2CppBase() + 0x2B344BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(DomGameScoreViewController*))(Il2CppBase() + 0x2B344C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(DomGameScoreViewController*))(Il2CppBase() + 0x2B344C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundCountChanged(uintptr_t P0) {
		return ((T (*)(DomGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x2B344C8))(this, P0);
	}

};

}
