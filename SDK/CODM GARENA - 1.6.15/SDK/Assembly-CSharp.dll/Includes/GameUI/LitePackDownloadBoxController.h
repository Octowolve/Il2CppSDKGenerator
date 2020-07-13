#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LitePackDownloadBoxController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LitePackDownloadBoxController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_Callback() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_ReconnectAction() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnRetryCancelBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRetrySureBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNetNoticeCancelBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNetNoticeSureBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRetry() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNetNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRetyBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNetNoticeBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LitePackDownloadBoxController*))(Il2CppBase() + 0x233C88C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LitePackDownloadBoxController*))(Il2CppBase() + 0x233C930))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LitePackDownloadBoxController*))(Il2CppBase() + 0x233CA3C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LitePackDownloadBoxController*))(Il2CppBase() + 0x233CCB0))(this);
	}
	template <typename T = void> T OnRetryCancelBtnClick() {
		return ((T (*)(LitePackDownloadBoxController*))(Il2CppBase() + 0x233CEEC))(this);
	}
	template <typename T = void> T OnRetrySureBtnClick() {
		return ((T (*)(LitePackDownloadBoxController*))(Il2CppBase() + 0x233D074))(this);
	}
	template <typename T = void> T OnNetNoticeCancelBtnClick() {
		return ((T (*)(LitePackDownloadBoxController*))(Il2CppBase() + 0x233D134))(this);
	}
	template <typename T = void> T OnNetNoticeSureBtnClick() {
		return ((T (*)(LitePackDownloadBoxController*))(Il2CppBase() + 0x233D1F4))(this);
	}
	template <typename T = void> T DoCallBack(uintptr_t result) {
		return ((T (*)(LitePackDownloadBoxController*, uintptr_t))(Il2CppBase() + 0x233CFAC))(this, result);
	}
	template <typename T = void> T ShowRetry(uintptr_t retryNoticeType, uintptr_t callback) {
		return ((T (*)(LitePackDownloadBoxController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x233D2B4))(this, retryNoticeType, callback);
	}
	template <typename T = void> T ShowNetNotice(uintptr_t netNoticeType, uint32_t needDownSize, uintptr_t callback) {
		return ((T (*)(LitePackDownloadBoxController*, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x233D4A8))(this, netNoticeType, needDownSize, callback);
	}
	template <typename T = void> static T ShowRetyBox(uintptr_t retryNoticeType, uintptr_t callback) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x233D6C4))(0, retryNoticeType, callback);
	}
	template <typename T = void> static T ShowNetNoticeBox(uintptr_t netNoticeType, uint32_t needDownSize, uintptr_t callback) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x233D844))(0, netNoticeType, needDownSize, callback);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LitePackDownloadBoxController*))(Il2CppBase() + 0x233D9C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LitePackDownloadBoxController*))(Il2CppBase() + 0x233D9D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LitePackDownloadBoxController*))(Il2CppBase() + 0x233D9D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LitePackDownloadBoxController*))(Il2CppBase() + 0x233D9E0))(this);
	}

};

}
