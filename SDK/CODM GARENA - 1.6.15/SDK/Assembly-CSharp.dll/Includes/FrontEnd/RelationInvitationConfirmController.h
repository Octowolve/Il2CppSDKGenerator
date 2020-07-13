#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class RelationInvitationConfirmController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "RelationInvitationConfirmController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& ConfirmCallBack() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOKBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RelationInvitationConfirmController*))(Il2CppBase() + 0x384319C))(this);
	}
	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(RelationInvitationConfirmController*))(Il2CppBase() + 0x3843240))(this);
	}
	template <typename T = uintptr_t> T get_rids() {
		return ((T (*)(RelationInvitationConfirmController*))(Il2CppBase() + 0x38432DC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RelationInvitationConfirmController*))(Il2CppBase() + 0x3843378))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RelationInvitationConfirmController*))(Il2CppBase() + 0x3843490))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RelationInvitationConfirmController*))(Il2CppBase() + 0x3843764))(this);
	}
	template <typename T = void> T SetInfo(Il2CppString* Title, Il2CppString* Desc, Il2CppString* confirmTextQQ, Il2CppString* confirmTextWeChat, Il2CppString* CancelText, uintptr_t invitationType, uintptr_t callback) {
		return ((T (*)(RelationInvitationConfirmController*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x38439F8))(this, Title, Desc, confirmTextQQ, confirmTextWeChat, CancelText, invitationType, callback);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(RelationInvitationConfirmController*))(Il2CppBase() + 0x3843E88))(this);
	}
	template <typename T = void> T OnConfirmBtnClick() {
		return ((T (*)(RelationInvitationConfirmController*))(Il2CppBase() + 0x3843F3C))(this);
	}
	template <typename T = void> T OnOKBtnClick() {
		return ((T (*)(RelationInvitationConfirmController*))(Il2CppBase() + 0x3844000))(this);
	}
	template <typename T = void> T OnCancelBtnClick() {
		return ((T (*)(RelationInvitationConfirmController*))(Il2CppBase() + 0x38440C4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RelationInvitationConfirmController*))(Il2CppBase() + 0x3844178))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RelationInvitationConfirmController*))(Il2CppBase() + 0x3844180))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RelationInvitationConfirmController*))(Il2CppBase() + 0x3844188))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RelationInvitationConfirmController*))(Il2CppBase() + 0x3844190))(this);
	}

};

}
