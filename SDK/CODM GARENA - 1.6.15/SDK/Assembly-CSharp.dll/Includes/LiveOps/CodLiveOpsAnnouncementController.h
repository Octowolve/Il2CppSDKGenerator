#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsAnnouncementController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsAnnouncementController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_AnnouncementDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_Announcement() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadAnnouncementPicFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSubscribeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubscribeBtnGoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubscribeResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnGoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_AnnouncementDS() {
		return ((T (*)(CodLiveOpsAnnouncementController*))(Il2CppBase() + 0x3532270))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CodLiveOpsAnnouncementController*))(Il2CppBase() + 0x3532320))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CodLiveOpsAnnouncementController*))(Il2CppBase() + 0x353242C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CodLiveOpsAnnouncementController*))(Il2CppBase() + 0x35324D0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CodLiveOpsAnnouncementController*))(Il2CppBase() + 0x35326D4))(this);
	}
	template <typename T = void> T UpdateView(int32_t index) {
		return ((T (*)(CodLiveOpsAnnouncementController*, int32_t))(Il2CppBase() + 0x3532864))(this, index);
	}
	template <typename T = void> T OnDownloadAnnouncementPicFinish(Il2CppString* url, bool isSuccess, uintptr_t delivery) {
		return ((T (*)(CodLiveOpsAnnouncementController*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3533420))(this, url, isSuccess, delivery);
	}
	template <typename T = void> T UpdateSubscribeInfo() {
		return ((T (*)(CodLiveOpsAnnouncementController*))(Il2CppBase() + 0x3533284))(this);
	}
	template <typename T = void> T OnSubscribeBtnGoClick() {
		return ((T (*)(CodLiveOpsAnnouncementController*))(Il2CppBase() + 0x3533874))(this);
	}
	template <typename T = void> T OnSubscribeResponse(uintptr_t Msg) {
		return ((T (*)(CodLiveOpsAnnouncementController*, uintptr_t))(Il2CppBase() + 0x3533A5C))(this, Msg);
	}
	template <typename T = void> T OnBtnGoClick() {
		return ((T (*)(CodLiveOpsAnnouncementController*))(Il2CppBase() + 0x3533C9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodLiveOpsAnnouncementController*))(Il2CppBase() + 0x35340D8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CodLiveOpsAnnouncementController*))(Il2CppBase() + 0x35340E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CodLiveOpsAnnouncementController*))(Il2CppBase() + 0x35340E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CodLiveOpsAnnouncementController*))(Il2CppBase() + 0x35340F0))(this);
	}

};

}
