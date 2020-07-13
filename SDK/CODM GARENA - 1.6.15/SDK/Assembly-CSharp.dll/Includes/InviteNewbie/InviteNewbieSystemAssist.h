#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InviteNewbie {

class InviteNewbieSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InviteNewbie", "InviteNewbieSystemAssist"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendInviteMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInviteNewbieURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendInviteUrlSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendInviteUrlFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestInviteNewbieData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestInviteAndRecallConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInviteNewbietime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInviteNewbieCDTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowInviteNewbieTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowFriendRecallTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInviteNewbieOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFriendRecallOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLocalShowFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocalShowFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> static T SendInviteMessage(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x318AAC8))(0, target);
	}
	template <typename T = Il2CppString*> static T GetInviteNewbieURL(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x318AD70))(0, target);
	}
	template <typename T = void> static T OnSendInviteUrlSuccess(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x318B078))(0, target);
	}
	template <typename T = void> static T OnSendInviteUrlFail(uintptr_t target, int32_t retCode) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x318B234))(0, target, retCode);
	}
	template <typename T = void> static T RequestInviteNewbieData() {
		return ((T (*)(void *))(Il2CppBase() + 0x318B490))(0);
	}
	template <typename T = void> static T RequestInviteAndRecallConf(bool bReset) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x318097C))(0, bReset);
	}
	template <typename T = void> static T SetInviteNewbietime(int32_t start_date, int32_t start_time, int32_t end_date, int32_t end_time) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x318B59C))(0, start_date, start_time, end_date, end_time);
	}
	template <typename T = int32_t> static T GetInviteNewbieCDTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x318BAA8))(0);
	}
	template <typename T = bool> static T IsShowInviteNewbieTips(uintptr_t* tipContent, uintptr_t* bubbleType) {
		return ((T (*)(void *, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x318BB88))(0, tipContent, bubbleType);
	}
	template <typename T = bool> static T IsShowFriendRecallTips(uintptr_t* tipContent, uintptr_t* bubbleType) {
		return ((T (*)(void *, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x318BE30))(0, tipContent, bubbleType);
	}
	template <typename T = bool> static T IsInviteNewbieOpen() {
		return ((T (*)(void *))(Il2CppBase() + 0x318C014))(0);
	}
	template <typename T = bool> static T IsFriendRecallOpen() {
		return ((T (*)(void *))(Il2CppBase() + 0x318C0F4))(0);
	}
	template <typename T = void> static T SetLocalShowFlag(bool flag) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3180C14))(0, flag);
	}
	template <typename T = bool> static T GetLocalShowFlag() {
		return ((T (*)(void *))(Il2CppBase() + 0x318BD24))(0);
	}

};

}
