#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.INFGame {

class InfectGameLoadoutUIViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.INFGame", "InfectGameLoadoutUIViewController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& sentryGunSkillSelected() {
		return *(T*)((uintptr_t)this + 0x68);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnTransformShieldSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSentryGunSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(InfectGameLoadoutUIViewController*))(Il2CppBase() + 0x4032EC8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(InfectGameLoadoutUIViewController*))(Il2CppBase() + 0x4032F6C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(InfectGameLoadoutUIViewController*))(Il2CppBase() + 0x4033070))(this);
	}
	template <typename T = void> T OnTransformShieldSelected() {
		return ((T (*)(InfectGameLoadoutUIViewController*))(Il2CppBase() + 0x40333B8))(this);
	}
	template <typename T = void> T OnSentryGunSelected() {
		return ((T (*)(InfectGameLoadoutUIViewController*))(Il2CppBase() + 0x4033590))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(InfectGameLoadoutUIViewController*))(Il2CppBase() + 0x4033768))(this);
	}
	template <typename T = void> T OnChangeBag() {
		return ((T (*)(InfectGameLoadoutUIViewController*))(Il2CppBase() + 0x4033AB0))(this);
	}
	template <typename T = void> T RefreshLoadout() {
		return ((T (*)(InfectGameLoadoutUIViewController*))(Il2CppBase() + 0x4033C70))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(InfectGameLoadoutUIViewController*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4034724))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(InfectGameLoadoutUIViewController*, uintptr_t))(Il2CppBase() + 0x40349B8))(this, itemType);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(InfectGameLoadoutUIViewController*))(Il2CppBase() + 0x4034AA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(InfectGameLoadoutUIViewController*))(Il2CppBase() + 0x4034AB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(InfectGameLoadoutUIViewController*))(Il2CppBase() + 0x4034AB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(InfectGameLoadoutUIViewController*))(Il2CppBase() + 0x4034AC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnChangeBag() {
		return ((T (*)(InfectGameLoadoutUIViewController*))(Il2CppBase() + 0x4034AC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshLoadout() {
		return ((T (*)(InfectGameLoadoutUIViewController*))(Il2CppBase() + 0x4034AD0))(this);
	}

};

}
