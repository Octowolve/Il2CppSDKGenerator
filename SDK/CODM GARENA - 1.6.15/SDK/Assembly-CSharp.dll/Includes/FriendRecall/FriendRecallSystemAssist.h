#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FriendRecall {

class FriendRecallSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FriendRecall", "FriendRecallSystemAssist"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendInviteMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInviteURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendInviteUrlSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendInviteUrlFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestFriendRecallData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLocalShowFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocalShowFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> static T SendInviteMessage(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32CAF50))(0, target);
	}
	template <typename T = Il2CppString*> static T GetInviteURL(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32D3B40))(0, target);
	}
	template <typename T = void> static T OnSendInviteUrlSuccess(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32D3DDC))(0, target);
	}
	template <typename T = void> static T OnSendInviteUrlFail(uintptr_t target, int32_t retCode) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x32D3F98))(0, target, retCode);
	}
	template <typename T = void> static T RequestFriendRecallData() {
		return ((T (*)(void *))(Il2CppBase() + 0x32D41F4))(0);
	}
	template <typename T = void> static T SetLocalShowFlag(bool flag) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x32CC5A8))(0, flag);
	}
	template <typename T = bool> static T GetLocalShowFlag() {
		return ((T (*)(void *))(Il2CppBase() + 0x32D42EC))(0);
	}

};

}
