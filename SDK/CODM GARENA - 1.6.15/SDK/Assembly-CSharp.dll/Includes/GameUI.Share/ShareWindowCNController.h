#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class ShareWindowCNController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "ShareWindowCNController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareQQFriendBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareQQZoneBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareWeChatBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareWeChatZoneBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPlatformContainer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowQRCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ShareWindowCNController*))(Il2CppBase() + 0x3C86064))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ShareWindowCNController*))(Il2CppBase() + 0x3C86108))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ShareWindowCNController*))(Il2CppBase() + 0x3C8637C))(this);
	}
	template <typename T = void> T OnShareQQFriendBtnClicked() {
		return ((T (*)(ShareWindowCNController*))(Il2CppBase() + 0x3C865B8))(this);
	}
	template <typename T = void> T OnShareQQZoneBtnClicked() {
		return ((T (*)(ShareWindowCNController*))(Il2CppBase() + 0x3C8676C))(this);
	}
	template <typename T = void> T OnShareWeChatBtnClicked() {
		return ((T (*)(ShareWindowCNController*))(Il2CppBase() + 0x3C8681C))(this);
	}
	template <typename T = void> T OnShareWeChatZoneBtnClicked() {
		return ((T (*)(ShareWindowCNController*))(Il2CppBase() + 0x3C868CC))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(ShareWindowCNController*))(Il2CppBase() + 0x3C8697C))(this);
	}
	template <typename T = void> T OnInitComponent() {
		return ((T (*)(ShareWindowCNController*))(Il2CppBase() + 0x3C86A88))(this);
	}
	template <typename T = void> T ResetPlatformContainer() {
		return ((T (*)(ShareWindowCNController*))(Il2CppBase() + 0x3C86C08))(this);
	}
	template <typename T = bool> T IsShowQRCode() {
		return ((T (*)(ShareWindowCNController*))(Il2CppBase() + 0x3C86DA4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ShareWindowCNController*))(Il2CppBase() + 0x3C86E44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ShareWindowCNController*))(Il2CppBase() + 0x3C86E4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ShareWindowCNController*))(Il2CppBase() + 0x3C86E54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Initialize() {
		return ((T (*)(ShareWindowCNController*))(Il2CppBase() + 0x3C86E5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnInitComponent() {
		return ((T (*)(ShareWindowCNController*))(Il2CppBase() + 0x3C86E64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetPlatformContainer() {
		return ((T (*)(ShareWindowCNController*))(Il2CppBase() + 0x3C86E6C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowQRCode() {
		return ((T (*)(ShareWindowCNController*))(Il2CppBase() + 0x3C86E74))(this);
	}

};

}
