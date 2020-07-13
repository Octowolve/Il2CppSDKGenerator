#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LitePackDownloadBoxView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LitePackDownloadBoxView"));
	}

	template <typename T = uintptr_t> T& BoxRoot_Retry() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& BoxRoot_NetNotice() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& Label_Retry() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& Label_NetNotice() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& RetryQuitBtn_Box() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& RetryQuitBtn_Label() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& RetryBtn_Box() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& RetryBtn_Label() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& NoticeQuitBtn_Box() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& NoticeQuitBtn_Label() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& NoticeSureBtn_Box() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& NoticeSureBtn_Label() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& _retryNoticeType() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _netNoticeType() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DontCacheFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRetry() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNetNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRetryNoticeLable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateNetNoticeLable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T DontCacheFlag() {
		return ((T (*)(LitePackDownloadBoxView*))(Il2CppBase() + 0x233DA8C))(this);
	}
	template <typename T = void> T ShowRetry(uintptr_t retryNoticeType) {
		return ((T (*)(LitePackDownloadBoxView*, uintptr_t))(Il2CppBase() + 0x233D394))(this, retryNoticeType);
	}
	template <typename T = void> T ShowNetNotice(uintptr_t netNoticeType, uint32_t needDownloadSize) {
		return ((T (*)(LitePackDownloadBoxView*, uintptr_t, uint32_t))(Il2CppBase() + 0x233D594))(this, netNoticeType, needDownloadSize);
	}
	template <typename T = void> T UpdateRetryNoticeLable() {
		return ((T (*)(LitePackDownloadBoxView*))(Il2CppBase() + 0x233DB2C))(this);
	}
	template <typename T = void> T UpdateNetNoticeLable(uint32_t needDownloadSize) {
		return ((T (*)(LitePackDownloadBoxView*, uint32_t))(Il2CppBase() + 0x233DD04))(this, needDownloadSize);
	}
	template <typename T = bool> T xLuaBaseProxy_DontCacheFlag() {
		return ((T (*)(LitePackDownloadBoxView*))(Il2CppBase() + 0x233DFB8))(this);
	}

};

}
