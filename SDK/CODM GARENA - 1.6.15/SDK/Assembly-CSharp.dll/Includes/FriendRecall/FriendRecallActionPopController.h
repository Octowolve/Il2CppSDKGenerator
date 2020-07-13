#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FriendRecall {

class FriendRecallActionPopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FriendRecall", "FriendRecallActionPopController"));
	}

	template <typename T = uintptr_t> T& m_View() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnsShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMoreBtnClick_RecallFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSMSBtnClick_RecallFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLineBtnClick_RecallFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGarenaBtnClick_RecallFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWhatsAPPBtnClick_RecallFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMessengerBtnClick_RecallFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FriendRecallActionPopController*))(Il2CppBase() + 0x32CA3EC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FriendRecallActionPopController*))(Il2CppBase() + 0x32CA490))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(FriendRecallActionPopController*))(Il2CppBase() + 0x32CA59C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FriendRecallActionPopController*))(Il2CppBase() + 0x32CA868))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FriendRecallActionPopController*))(Il2CppBase() + 0x32CABB0))(this);
	}
	template <typename T = void> T SetBtnsShow() {
		return ((T (*)(FriendRecallActionPopController*))(Il2CppBase() + 0x32CA64C))(this);
	}
	template <typename T = void> T OnMoreBtnClick_RecallFriend() {
		return ((T (*)(FriendRecallActionPopController*))(Il2CppBase() + 0x32CAEAC))(this);
	}
	template <typename T = void> T OnSMSBtnClick_RecallFriend() {
		return ((T (*)(FriendRecallActionPopController*))(Il2CppBase() + 0x32CB1F0))(this);
	}
	template <typename T = void> T OnLineBtnClick_RecallFriend() {
		return ((T (*)(FriendRecallActionPopController*))(Il2CppBase() + 0x32CB294))(this);
	}
	template <typename T = void> T OnGarenaBtnClick_RecallFriend() {
		return ((T (*)(FriendRecallActionPopController*))(Il2CppBase() + 0x32CB338))(this);
	}
	template <typename T = void> T OnWhatsAPPBtnClick_RecallFriend() {
		return ((T (*)(FriendRecallActionPopController*))(Il2CppBase() + 0x32CB3DC))(this);
	}
	template <typename T = void> T OnMessengerBtnClick_RecallFriend() {
		return ((T (*)(FriendRecallActionPopController*))(Il2CppBase() + 0x32CB480))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FriendRecallActionPopController*))(Il2CppBase() + 0x32CB524))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FriendRecallActionPopController*))(Il2CppBase() + 0x32CB52C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(FriendRecallActionPopController*))(Il2CppBase() + 0x32CB534))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FriendRecallActionPopController*))(Il2CppBase() + 0x32CB53C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FriendRecallActionPopController*))(Il2CppBase() + 0x32CB544))(this);
	}

};

}
