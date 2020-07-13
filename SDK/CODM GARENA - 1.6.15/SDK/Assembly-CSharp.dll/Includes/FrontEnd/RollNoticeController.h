#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class RollNoticeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "RollNoticeController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CacheSystemNoticeList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CacheSelfNoticeList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_pendingAddToCacheList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& bShowingSelfNotice() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllCacheList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyClientOnlyNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyBeingLiked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShowNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShouldShowNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetRollNoticeResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetBoardCastAnnouncementNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScreenCapture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerBeginAddSystemRollNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RollNoticeController*))(Il2CppBase() + 0x3853604))(this);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(RollNoticeController*))(Il2CppBase() + 0x38536A8))(this);
	}
	template <typename T = void> T ClearAllCacheList() {
		return ((T (*)(RollNoticeController*))(Il2CppBase() + 0x3853758))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RollNoticeController*))(Il2CppBase() + 0x385382C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RollNoticeController*))(Il2CppBase() + 0x3853C3C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RollNoticeController*))(Il2CppBase() + 0x3853E30))(this);
	}
	template <typename T = void> T AddNotice(uintptr_t data) {
		return ((T (*)(RollNoticeController*, uintptr_t))(Il2CppBase() + 0x3853ED8))(this, data);
	}
	template <typename T = void> T NotifyClientOnlyNotice(uintptr_t Msg) {
		return ((T (*)(RollNoticeController*, uintptr_t))(Il2CppBase() + 0x385409C))(this, Msg);
	}
	template <typename T = void> T NotifyBeingLiked(uintptr_t msg) {
		return ((T (*)(RollNoticeController*, uintptr_t))(Il2CppBase() + 0x38543DC))(this, msg);
	}
	template <typename T = uintptr_t> T GetShowNotice() {
		return ((T (*)(RollNoticeController*))(Il2CppBase() + 0x385459C))(this);
	}
	template <typename T = bool> T CheckShouldShowNotice(uintptr_t uiScene) {
		return ((T (*)(RollNoticeController*, uintptr_t))(Il2CppBase() + 0x38548D0))(this, uiScene);
	}
	template <typename T = void> T OnGetRollNoticeResp(uintptr_t Msg) {
		return ((T (*)(RollNoticeController*, uintptr_t))(Il2CppBase() + 0x3854978))(this, Msg);
	}
	template <typename T = void> T OnGetBoardCastAnnouncementNtf(uintptr_t Msg) {
		return ((T (*)(RollNoticeController*, uintptr_t))(Il2CppBase() + 0x38550E4))(this, Msg);
	}
	template <typename T = void> T OnScreenCapture(uintptr_t msg) {
		return ((T (*)(RollNoticeController*, uintptr_t))(Il2CppBase() + 0x38552D8))(this, msg);
	}
	template <typename T = void> T TimerBeginAddSystemRollNotice() {
		return ((T (*)(RollNoticeController*))(Il2CppBase() + 0x3855524))(this);
	}
	template <typename T = int32_t> static T NotifyClientOnlyNoticem__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3855650))(0, a, b);
	}
	template <typename T = int32_t> static T OnGetRollNoticeRespm__1(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3855680))(0, a, b);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RollNoticeController*))(Il2CppBase() + 0x38556B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(RollNoticeController*))(Il2CppBase() + 0x38556B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RollNoticeController*))(Il2CppBase() + 0x38556C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RollNoticeController*))(Il2CppBase() + 0x38556C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RollNoticeController*))(Il2CppBase() + 0x38556D0))(this);
	}

};

}
