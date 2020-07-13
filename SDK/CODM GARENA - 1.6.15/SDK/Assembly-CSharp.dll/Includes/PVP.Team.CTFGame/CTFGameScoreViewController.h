#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.CTFGame {

class CTFGameScoreViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.CTFGame", "CTFGameScoreViewController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshHoldingFlagTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CTFGameScoreViewController*))(Il2CppBase() + 0x2B2BC54))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CTFGameScoreViewController*))(Il2CppBase() + 0x2B2BCF8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CTFGameScoreViewController*))(Il2CppBase() + 0x2B2BE00))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CTFGameScoreViewController*))(Il2CppBase() + 0x2B2BF24))(this);
	}
	template <typename T = void> T OnRefreshHoldingFlagTag(uintptr_t MSG) {
		return ((T (*)(CTFGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x2B2BFDC))(this, MSG);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CTFGameScoreViewController*))(Il2CppBase() + 0x2B2C0A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CTFGameScoreViewController*))(Il2CppBase() + 0x2B2C0A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CTFGameScoreViewController*))(Il2CppBase() + 0x2B2C0A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CTFGameScoreViewController*))(Il2CppBase() + 0x2B2C0AC))(this);
	}

};

}
