#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsAnnouncementVideoControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsAnnouncementVideoController_CA"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenVedio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsAnnouncementVideoControllerCA*))(Il2CppBase() + 0x356A2AC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsAnnouncementVideoControllerCA*))(Il2CppBase() + 0x356A350))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LiveOpsAnnouncementVideoControllerCA*))(Il2CppBase() + 0x356A45C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(LiveOpsAnnouncementVideoControllerCA*))(Il2CppBase() + 0x356A504))(this);
	}
	template <typename T = void> T OnCloseButtonClick() {
		return ((T (*)(LiveOpsAnnouncementVideoControllerCA*))(Il2CppBase() + 0x356A5AC))(this);
	}
	template <typename T = void> T OpenVedio(Il2CppString* vediopath) {
		return ((T (*)(LiveOpsAnnouncementVideoControllerCA*, Il2CppString*))(Il2CppBase() + 0x356A654))(this, vediopath);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LiveOpsAnnouncementVideoControllerCA*))(Il2CppBase() + 0x356A770))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsAnnouncementVideoControllerCA*))(Il2CppBase() + 0x356A844))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsAnnouncementVideoControllerCA*))(Il2CppBase() + 0x356A84C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LiveOpsAnnouncementVideoControllerCA*))(Il2CppBase() + 0x356A854))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(LiveOpsAnnouncementVideoControllerCA*))(Il2CppBase() + 0x356A85C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCloseButtonClick() {
		return ((T (*)(LiveOpsAnnouncementVideoControllerCA*))(Il2CppBase() + 0x356A864))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LiveOpsAnnouncementVideoControllerCA*))(Il2CppBase() + 0x356A86C))(this);
	}

};

}
