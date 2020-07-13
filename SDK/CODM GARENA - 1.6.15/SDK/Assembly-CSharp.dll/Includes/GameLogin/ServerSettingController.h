#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class ServerSettingController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "ServerSettingController"));
	}

	template <typename T = uintptr_t> T& view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_Dic() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& ActiveOption() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_serverListItems() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& m_defaultURL() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_Selecteditem() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrueHasServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnselectOption() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOKButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoEditServerSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnselectServerItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateServerName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ServerSettingController*))(Il2CppBase() + 0x253005C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ServerSettingController*))(Il2CppBase() + 0x2530100))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ServerSettingController*))(Il2CppBase() + 0x2530ED0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ServerSettingController*))(Il2CppBase() + 0x2531394))(this);
	}
	template <typename T = void> T TrueHasServer() {
		return ((T (*)(ServerSettingController*))(Il2CppBase() + 0x2531A24))(this);
	}
	template <typename T = void> T UnselectOption(uintptr_t option) {
		return ((T (*)(ServerSettingController*, uintptr_t))(Il2CppBase() + 0x2531270))(this, option);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ServerSettingController*))(Il2CppBase() + 0x2531D2C))(this);
	}
	template <typename T = void> T OnOKButtonClick() {
		return ((T (*)(ServerSettingController*))(Il2CppBase() + 0x2531EDC))(this);
	}
	template <typename T = void> T OnCancelButtonClick() {
		return ((T (*)(ServerSettingController*))(Il2CppBase() + 0x2532210))(this);
	}
	template <typename T = void> T DoEditServerSetting(Il2CppString* url) {
		return ((T (*)(ServerSettingController*, Il2CppString*))(Il2CppBase() + 0x2532170))(this, url);
	}
	template <typename T = void> T UnselectServerItem() {
		return ((T (*)(ServerSettingController*))(Il2CppBase() + 0x2532340))(this);
	}
	template <typename T = void> T OnServerItemClick(uintptr_t item) {
		return ((T (*)(ServerSettingController*, uintptr_t))(Il2CppBase() + 0x2532454))(this, item);
	}
	template <typename T = void> T UpdateServerName(Il2CppString* content) {
		return ((T (*)(ServerSettingController*, Il2CppString*))(Il2CppBase() + 0x2532864))(this, content);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ServerSettingController*))(Il2CppBase() + 0x2532A84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ServerSettingController*))(Il2CppBase() + 0x2532A8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ServerSettingController*))(Il2CppBase() + 0x2532A94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ServerSettingController*))(Il2CppBase() + 0x2532A9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ServerSettingController*))(Il2CppBase() + 0x2532AA4))(this);
	}

};

}
