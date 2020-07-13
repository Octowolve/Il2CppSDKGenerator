#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKPush
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKPush"));
	}

	template <typename T = void*> static T& PushBaseRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& PushNotificationEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_PushBaseRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_PushBaseRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_PushNotificationEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_PushNotificationEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterPush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterPush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAccount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteAccount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddLocalNotification() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearLocalNotifications() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPushBaseRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPushRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> static T registerPushAdapter(Il2CppString* channel, Il2CppString* account) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46D97FC))(0, channel, account);
	}
	template <typename T = void> static T unregisterPushAdapter(Il2CppString* channel) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46D991C))(0, channel);
	}
	template <typename T = void> static T setTagAdapter(Il2CppString* channel, Il2CppString* tag) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46D9A1C))(0, channel, tag);
	}
	template <typename T = void> static T setAccountAdapter(Il2CppString* channel, Il2CppString* account) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46D9B3C))(0, channel, account);
	}
	template <typename T = void> static T deleteAccountAdapter(Il2CppString* channel, Il2CppString* account) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46D9C5C))(0, channel, account);
	}
	template <typename T = void> static T deleteTagAdapter(Il2CppString* channel, Il2CppString* tag) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46D9D7C))(0, channel, tag);
	}
	template <typename T = void> static T addLocalNotificationAdapter(Il2CppString* channel, Il2CppString* localNotificationJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46D9E98))(0, channel, localNotificationJson);
	}
	template <typename T = void> static T clearLocalNotificationsAdapter(Il2CppString* channel) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46D9FB8))(0, channel);
	}
	template <typename T = void> static T add_PushBaseRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46DA0B8))(0, value);
	}
	template <typename T = void> static T remove_PushBaseRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46DA2B8))(0, value);
	}
	template <typename T = void> static T add_PushNotificationEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46DA4B8))(0, value);
	}
	template <typename T = void> static T remove_PushNotificationEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46DA6B0))(0, value);
	}
	template <typename T = void> static T RegisterPush(Il2CppString* channel, Il2CppString* account) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46DA8A8))(0, channel, account);
	}
	template <typename T = void> static T UnregisterPush(Il2CppString* channel) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46DABB0))(0, channel);
	}
	template <typename T = void> static T SetTag(Il2CppString* channel, Il2CppString* tag) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46DAE94))(0, channel, tag);
	}
	template <typename T = void> static T DeleteTag(Il2CppString* channel, Il2CppString* tag) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46DB19C))(0, channel, tag);
	}
	template <typename T = void> static T SetAccount(Il2CppString* channel, Il2CppString* account) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46DB4A4))(0, channel, account);
	}
	template <typename T = void> static T DeleteAccount(Il2CppString* channel, Il2CppString* account) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46DB7AC))(0, channel, account);
	}
	template <typename T = void> static T AddLocalNotification(Il2CppString* channel, uintptr_t localNotification) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x46DBAB4))(0, channel, localNotification);
	}
	template <typename T = void> static T ClearLocalNotifications(Il2CppString* channel) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46DBDF0))(0, channel);
	}
	template <typename T = void> static T OnPushBaseRet(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46D6E78))(0, json);
	}
	template <typename T = void> static T OnPushRet(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46D716C))(0, json);
	}

};

}
