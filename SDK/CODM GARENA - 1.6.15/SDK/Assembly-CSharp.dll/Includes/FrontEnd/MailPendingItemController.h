#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class MailPendingItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "MailPendingItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mailList() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveFriendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(MailPendingItemController*))(Il2CppBase() + 0x36C0BF8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(MailPendingItemController*))(Il2CppBase() + 0x36C0D04))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(MailPendingItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x36C0DA8))(this, list, index, data);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MailPendingItemController*))(Il2CppBase() + 0x36C0FC0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MailPendingItemController*))(Il2CppBase() + 0x36C111C))(this);
	}
	template <typename T = void> T OnReceiveFriendBtnClick() {
		return ((T (*)(MailPendingItemController*))(Il2CppBase() + 0x36C1240))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MailPendingItemController*))(Il2CppBase() + 0x36C13A8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(MailPendingItemController*))(Il2CppBase() + 0x36C13B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MailPendingItemController*))(Il2CppBase() + 0x36C13B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MailPendingItemController*))(Il2CppBase() + 0x36C13C0))(this);
	}

};

}
