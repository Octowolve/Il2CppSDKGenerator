#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsGuestBindFBPopupControllerEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsGuestBindFBPopupController_En"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_Ds() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_ActivityData() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_data() {
		return *(T*)((uintptr_t)this + 0x54);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnLickBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnClaimBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsGuestBindFBPopupControllerEn*))(Il2CppBase() + 0x34E6E18))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsGuestBindFBPopupControllerEn*))(Il2CppBase() + 0x34E6F68))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsGuestBindFBPopupControllerEn*))(Il2CppBase() + 0x34E700C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsGuestBindFBPopupControllerEn*))(Il2CppBase() + 0x34E7258))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t data) {
		return ((T (*)(LiveOpsGuestBindFBPopupControllerEn*, uintptr_t))(Il2CppBase() + 0x34E7470))(this, data);
	}
	template <typename T = void> T SetTextureContent(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(LiveOpsGuestBindFBPopupControllerEn*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x34E7CEC))(this, url, bSuccess, texture);
	}
	template <typename T = void> T _OnBtnCloseClick() {
		return ((T (*)(LiveOpsGuestBindFBPopupControllerEn*))(Il2CppBase() + 0x34E7EB8))(this);
	}
	template <typename T = void> T _OnLickBtnClick() {
		return ((T (*)(LiveOpsGuestBindFBPopupControllerEn*))(Il2CppBase() + 0x34E7F6C))(this);
	}
	template <typename T = void> T _OnClaimBtnClick() {
		return ((T (*)(LiveOpsGuestBindFBPopupControllerEn*))(Il2CppBase() + 0x34E80B0))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(LiveOpsGuestBindFBPopupControllerEn*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x34E824C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsGuestBindFBPopupControllerEn*))(Il2CppBase() + 0x34E8328))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsGuestBindFBPopupControllerEn*))(Il2CppBase() + 0x34E8330))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsGuestBindFBPopupControllerEn*))(Il2CppBase() + 0x34E8338))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsGuestBindFBPopupControllerEn*))(Il2CppBase() + 0x34E8340))(this);
	}

};

}
