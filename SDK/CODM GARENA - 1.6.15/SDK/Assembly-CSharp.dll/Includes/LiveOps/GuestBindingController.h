#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class GuestBindingController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "GuestBindingController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& ds() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& enableLink() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& bindPlatform() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> static T& LOC_PREFAB_GUEST_BIND_VIEW_CONTENT_TIP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LOC_PREFAB_GUEST_BIND_VIEW_CONTENT_TIP_WITHGOOGLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& LOC_PREFAB_GUEST_BIND_VIEW_CONTENT_TIP_FULL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChannelItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetGroupButtons() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetGroup1Buttons() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetGroup2Buttons() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetGroup3Buttons() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetGroup4Buttons() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetGroup5Buttons() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGroup2RelatedButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLinkedButtons() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInstalledLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_platformReloginFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuestBindCallbackHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Logout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGarenaBindFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBindFacebook() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBindGarena() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBindLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGooglePlayLinkBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameCenterLinkBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUNOLinkBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAppleLinkBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLinkTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLinkFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSuccessContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFakeChannelName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x3555724))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x35557F8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T SetChannelItems() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x3555B5C))(this);
	}
	template <typename T = void> T ResetGroupButtons(Il2CppList<uintptr_t>* buttons) {
		return ((T (*)(GuestBindingController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3555CB4))(this, buttons);
	}
	template <typename T = void> T ResetGroup1Buttons(Il2CppList<uintptr_t>* buttons) {
		return ((T (*)(GuestBindingController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3556B1C))(this, buttons);
	}
	template <typename T = void> T ResetGroup2Buttons(Il2CppList<uintptr_t>* buttons) {
		return ((T (*)(GuestBindingController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3556FB0))(this, buttons);
	}
	template <typename T = void> T ResetGroup3Buttons(Il2CppList<uintptr_t>* buttons) {
		return ((T (*)(GuestBindingController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x35569C4))(this, buttons);
	}
	template <typename T = void> T ResetGroup4Buttons(Il2CppList<uintptr_t>* buttons) {
		return ((T (*)(GuestBindingController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3556E58))(this, buttons);
	}
	template <typename T = void> T ResetGroup5Buttons(Il2CppList<uintptr_t>* buttons) {
		return ((T (*)(GuestBindingController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3556D00))(this, buttons);
	}
	template <typename T = uintptr_t> T GetGroup2RelatedButton(uintptr_t channel) {
		return ((T (*)(GuestBindingController*, uintptr_t))(Il2CppBase() + 0x3557A9C))(this, channel);
	}
	template <typename T = bool> T ResetLinkedButtons(Il2CppList<uintptr_t>* buttons, uintptr_t channel, uintptr_t button) {
		return ((T (*)(GuestBindingController*, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35573B0))(this, buttons, channel, button);
	}
	template <typename T = bool> T IsInstalledLine() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x3557504))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x3557CE4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x35581C0))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x3558584))(this);
	}
	template <typename T = void> T platformReloginFail(uintptr_t msg) {
		return ((T (*)(GuestBindingController*, uintptr_t))(Il2CppBase() + 0x3558770))(this, msg);
	}
	template <typename T = void> T OnGuestBindCallbackHandler(uintptr_t Msg) {
		return ((T (*)(GuestBindingController*, uintptr_t))(Il2CppBase() + 0x3558BAC))(this, Msg);
	}
	template <typename T = void> T Logout() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x35595CC))(this);
	}
	template <typename T = void> T OnGarenaBindFail() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x35596DC))(this);
	}
	template <typename T = void> T OnBindFacebook() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x355998C))(this);
	}
	template <typename T = void> T OnBindGarena() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x3559D88))(this);
	}
	template <typename T = void> T OnBindLine() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x3559E60))(this);
	}
	template <typename T = void> T OnGooglePlayLinkBtnClicked() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x355A104))(this);
	}
	template <typename T = void> T OnGameCenterLinkBtnClicked() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x355A1DC))(this);
	}
	template <typename T = void> T OnUNOLinkBtnClicked() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x355A2B4))(this);
	}
	template <typename T = void> T OnAppleLinkBtnClicked() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x355A38C))(this);
	}
	template <typename T = void> T BindPlatform(uintptr_t platform) {
		return ((T (*)(GuestBindingController*, uintptr_t))(Il2CppBase() + 0x3559A64))(this, platform);
	}
	template <typename T = void> T OnLinkTimeout(uintptr_t msg) {
		return ((T (*)(GuestBindingController*, uintptr_t))(Il2CppBase() + 0x355A808))(this, msg);
	}
	template <typename T = void> T OnLinkFailed(bool timeout) {
		return ((T (*)(GuestBindingController*, bool))(Il2CppBase() + 0x35593A8))(this, timeout);
	}
	template <typename T = Il2CppString*> T GetContent() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x35571B8))(this);
	}
	template <typename T = Il2CppString*> T GetSuccessContent(uintptr_t channel) {
		return ((T (*)(GuestBindingController*, uintptr_t))(Il2CppBase() + 0x35590BC))(this, channel);
	}
	template <typename T = Il2CppString*> T GetFakeChannelName(uintptr_t channelType) {
		return ((T (*)(GuestBindingController*, uintptr_t))(Il2CppBase() + 0x3559244))(this, channelType);
	}
	template <typename T = int32_t> T get_linkTimeoutTime() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x355A464))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x355AB24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x355AB2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x355AB34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x355AB3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(GuestBindingController*))(Il2CppBase() + 0x355AB44))(this);
	}

};

}
