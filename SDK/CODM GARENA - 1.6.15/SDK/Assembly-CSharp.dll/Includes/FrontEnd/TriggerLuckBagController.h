#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class TriggerLuckBagController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "TriggerLuckBagController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& bComplete() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQQFriendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQQZoneBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeChatFriendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeChatZoneBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShareSuccessReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareSuccessRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TriggerLuckBagController*))(Il2CppBase() + 0x387C98C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TriggerLuckBagController*))(Il2CppBase() + 0x387CA30))(this);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(TriggerLuckBagController*))(Il2CppBase() + 0x387CB44))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TriggerLuckBagController*))(Il2CppBase() + 0x387CD98))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(TriggerLuckBagController*))(Il2CppBase() + 0x387D18C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(TriggerLuckBagController*))(Il2CppBase() + 0x387D4B0))(this);
	}
	template <typename T = void> T OnQQFriendBtnClick() {
		return ((T (*)(TriggerLuckBagController*))(Il2CppBase() + 0x387D558))(this);
	}
	template <typename T = void> T OnQQZoneBtnClick() {
		return ((T (*)(TriggerLuckBagController*))(Il2CppBase() + 0x387D6D4))(this);
	}
	template <typename T = void> T OnWeChatFriendBtnClick() {
		return ((T (*)(TriggerLuckBagController*))(Il2CppBase() + 0x387D850))(this);
	}
	template <typename T = void> T OnWeChatZoneBtnClick() {
		return ((T (*)(TriggerLuckBagController*))(Il2CppBase() + 0x387D9CC))(this);
	}
	template <typename T = void> T OnTipBtnClick() {
		return ((T (*)(TriggerLuckBagController*))(Il2CppBase() + 0x387DB48))(this);
	}
	template <typename T = void> T ShareSuccessReq(uintptr_t MSG) {
		return ((T (*)(TriggerLuckBagController*, uintptr_t))(Il2CppBase() + 0x387DC78))(this, MSG);
	}
	template <typename T = void> T OnShareSuccessRes(uintptr_t MSG) {
		return ((T (*)(TriggerLuckBagController*, uintptr_t))(Il2CppBase() + 0x387DE68))(this, MSG);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(TriggerLuckBagController*))(Il2CppBase() + 0x387E014))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TriggerLuckBagController*))(Il2CppBase() + 0x387E0C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TriggerLuckBagController*))(Il2CppBase() + 0x387E0D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TriggerLuckBagController*))(Il2CppBase() + 0x387E0D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(TriggerLuckBagController*))(Il2CppBase() + 0x387E0E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(TriggerLuckBagController*))(Il2CppBase() + 0x387E0E8))(this);
	}

};

}
