#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKFriend
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKFriend"));
	}

	template <typename T = void*> static T& FriendRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& QuereyFriendEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_FriendRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_FriendRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_QuereyFriendEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_QuereyFriendEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Share() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QueryFriends() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendQueryFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> static T sendMessageAdapter(Il2CppString* infoJson, Il2CppString* channel) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C06D4))(0, infoJson, channel);
	}
	template <typename T = void> static T shareAdapter(Il2CppString* infoJson, Il2CppString* channel) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C07F4))(0, infoJson, channel);
	}
	template <typename T = void> static T queryFriendsAdapter(int32_t page, int32_t count, bool isInGame, Il2CppString* channel, Il2CppString* subChannel, Il2CppString* extraJson) {
		return ((T (*)(void *, int32_t, int32_t, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C0914))(0, page, count, isInGame, channel, subChannel, extraJson);
	}
	template <typename T = void> static T addFriendAdapter(Il2CppString* infoJson, Il2CppString* channel) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C0A5C))(0, infoJson, channel);
	}
	template <typename T = void> static T add_FriendRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46C0B78))(0, value);
	}
	template <typename T = void> static T remove_FriendRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46C0D78))(0, value);
	}
	template <typename T = void> static T add_QuereyFriendEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46C0F78))(0, value);
	}
	template <typename T = void> static T remove_QuereyFriendEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46C1170))(0, value);
	}
	template <typename T = void> static T SendMessage(uintptr_t info, Il2CppString* channel) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x46C1368))(0, info, channel);
	}
	template <typename T = void> static T Share(uintptr_t info, Il2CppString* channel) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x46C16A4))(0, info, channel);
	}
	template <typename T = void> static T AddFriend(uintptr_t info, Il2CppString* channel) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x46C19E0))(0, info, channel);
	}
	template <typename T = void> static T QueryFriends(int32_t page, int32_t count, bool isInGame, Il2CppString* channel, Il2CppString* subChannel, Il2CppString* extraJson) {
		return ((T (*)(void *, int32_t, int32_t, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C1D1C))(0, page, count, isInGame, channel, subChannel, extraJson);
	}
	template <typename T = void> static T OnFriendMessage(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46C251C))(0, json);
	}
	template <typename T = void> static T OnFriendQueryFriend(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46C2844))(0, json);
	}

};

}
