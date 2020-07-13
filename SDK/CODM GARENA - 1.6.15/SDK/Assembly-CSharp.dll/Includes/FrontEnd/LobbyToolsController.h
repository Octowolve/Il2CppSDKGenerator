#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyToolsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyToolsController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& m_LabelPlayEndPos() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& m_LabelRestartPlayEndPos() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& m_LabelStartPos() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& BACKGROUNDFIXSEDSIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LABELMAXWIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_AnnouncementDataStore() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_NeedConsectiveRepeatNum() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& m_SpriteMinWidth() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_CurrentAnnoucement() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& tp() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& m_RootNavigationIsActive() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& m_FinishOnePlayProcess() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = float> T& PlayNextAnnoucementWaitTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> static T& MIN_QUERY_LOTTERY_INFO_INVERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_LastQueryLotteryTime() {
		return *(T*)((uintptr_t)this + 0x80);
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
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckOrPlayTweenLaternAnnoucement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimFinishedHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartPlayNextAnnoucemnt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNextAnnoucement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyNewLanternAnnoucement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyRootNavigationIsActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClkButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LobbyToolsController*))(Il2CppBase() + 0x36AB8CC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LobbyToolsController*))(Il2CppBase() + 0x36AB970))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(LobbyToolsController*))(Il2CppBase() + 0x36ABC10))(this);
	}
	template <typename T = void> T StartPlay() {
		return ((T (*)(LobbyToolsController*))(Il2CppBase() + 0x36ABCB8))(this);
	}
	template <typename T = void> T CheckOrPlayTweenLaternAnnoucement() {
		return ((T (*)(LobbyToolsController*))(Il2CppBase() + 0x36AC190))(this);
	}
	template <typename T = void> T OnAnimFinishedHandler() {
		return ((T (*)(LobbyToolsController*))(Il2CppBase() + 0x36AC474))(this);
	}
	template <typename T = void> T StartPlayNextAnnoucemnt() {
		return ((T (*)(LobbyToolsController*))(Il2CppBase() + 0x36AC6CC))(this);
	}
	template <typename T = void> T ShowNextAnnoucement() {
		return ((T (*)(LobbyToolsController*))(Il2CppBase() + 0x36AC770))(this);
	}
	template <typename T = void> T ResetController() {
		return ((T (*)(LobbyToolsController*))(Il2CppBase() + 0x36AC808))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LobbyToolsController*))(Il2CppBase() + 0x36ACA44))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LobbyToolsController*))(Il2CppBase() + 0x36ACC14))(this);
	}
	template <typename T = void> T NotifyNewLanternAnnoucement(uintptr_t Msg) {
		return ((T (*)(LobbyToolsController*, uintptr_t))(Il2CppBase() + 0x36ACD78))(this, Msg);
	}
	template <typename T = void> T NotifyRootNavigationIsActive(bool isActive) {
		return ((T (*)(LobbyToolsController*, bool))(Il2CppBase() + 0x36ACF40))(this, isActive);
	}
	template <typename T = void> T OnClkButton() {
		return ((T (*)(LobbyToolsController*))(Il2CppBase() + 0x36AD000))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LobbyToolsController*))(Il2CppBase() + 0x36AD098))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LobbyToolsController*))(Il2CppBase() + 0x36AD0A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(LobbyToolsController*))(Il2CppBase() + 0x36AD0A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LobbyToolsController*))(Il2CppBase() + 0x36AD0B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LobbyToolsController*))(Il2CppBase() + 0x36AD0B8))(this);
	}

};

}
