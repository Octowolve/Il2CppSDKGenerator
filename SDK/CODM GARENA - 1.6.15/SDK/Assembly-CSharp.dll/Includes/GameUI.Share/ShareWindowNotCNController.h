#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class ShareWindowNotCNController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "ShareWindowNotCNController"));
	}

	template <typename T = uintptr_t> T& _uiView() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareGarenaBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareLineBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareFacebookBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteBtnWorldChatClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteBtnMessengerClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteBtnWhatsappClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteBtnSMSClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteBtnGarenaClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteBtnLineClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteBtnMoreClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResetUIDefautLayout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPlatformContainer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRegisterDescCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetInvitePerson2GameDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowInvitePerson2GameDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowGarena() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C86FC4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C87068))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C875B8))(this);
	}
	template <typename T = void> T OnShareGarenaBtnClicked() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C87A8C))(this);
	}
	template <typename T = void> T OnShareLineBtnClicked() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C87B3C))(this);
	}
	template <typename T = void> T OnShareFacebookBtnClicked() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C87BEC))(this);
	}
	template <typename T = void> T OnInviteBtnWorldChatClick() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C87C9C))(this);
	}
	template <typename T = void> T OnInviteBtnMessengerClick() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C883CC))(this);
	}
	template <typename T = void> T OnInviteBtnWhatsappClick() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C88478))(this);
	}
	template <typename T = void> T OnInviteBtnSMSClick() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C88524))(this);
	}
	template <typename T = void> T OnInviteBtnGarenaClick() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C885D0))(this);
	}
	template <typename T = void> T OnInviteBtnLineClick() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C8867C))(this);
	}
	template <typename T = void> T OnInviteBtnMoreClick() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C88728))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C887D4))(this);
	}
	template <typename T = void> T OnInitComponent() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C888E0))(this);
	}
	template <typename T = void> T OnResetUIDefautLayout() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C88A60))(this);
	}
	template <typename T = void> T ResetPlatformContainer() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C88B90))(this);
	}
	template <typename T = void> T OnRegisterDescCallback() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C8925C))(this);
	}
	template <typename T = void> T ResetInvitePerson2GameDesc(uintptr_t data) {
		return ((T (*)(ShareWindowNotCNController*, uintptr_t))(Il2CppBase() + 0x3C8939C))(this, data);
	}
	template <typename T = bool> T IsShowInvitePerson2GameDesc() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C88E6C))(this);
	}
	template <typename T = bool> T IsShowGarena(uintptr_t platform) {
		return ((T (*)(ShareWindowNotCNController*, uintptr_t))(Il2CppBase() + 0x3C88F78))(this, platform);
	}
	template <typename T = bool> T IsShowLine(uintptr_t platform) {
		return ((T (*)(ShareWindowNotCNController*, uintptr_t))(Il2CppBase() + 0x3C89088))(this, platform);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C898C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C898C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C898D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Initialize() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C898D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnInitComponent() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C898E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnResetUIDefautLayout() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C898E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetPlatformContainer() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C898F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRegisterDescCallback() {
		return ((T (*)(ShareWindowNotCNController*))(Il2CppBase() + 0x3C898F8))(this);
	}

};

}
