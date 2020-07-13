#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKGroup"));
	}

	template <typename T = void*> static T& GroupRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_GroupRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_GroupRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnbindGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemindToBindGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGroupList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGroupState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGroupRelation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JoinGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGroupMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGroupRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> static T createGroupAdapter(Il2CppString* unionID, Il2CppString* unionName, Il2CppString* roleName, Il2CppString* zoneID, Il2CppString* roleID, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C53E0))(0, unionID, unionName, roleName, zoneID, roleID, extraJson);
	}
	template <typename T = void> static T bindGroupAdapter(Il2CppString* unionID, Il2CppString* zoneID, Il2CppString* roleID, Il2CppString* groupID, Il2CppString* groupName, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C5564))(0, unionID, zoneID, roleID, groupID, groupName, extraJson);
	}
	template <typename T = void> static T unbindGroupAdapter(Il2CppString* unionID, Il2CppString* unionName, Il2CppString* zoneID, Il2CppString* roleID, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C56E4))(0, unionID, unionName, zoneID, roleID, extraJson);
	}
	template <typename T = void> static T remindToBindGroupAdapter(Il2CppString* unionID, Il2CppString* zoneID, Il2CppString* roleID, Il2CppString* roleName, Il2CppString* leaderOpenID, Il2CppString* leaderRoleID, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C5850))(0, unionID, zoneID, roleID, roleName, leaderOpenID, leaderRoleID, extraJson);
	}
	template <typename T = void> static T getGroupListAdapter() {
		return ((T (*)(void *))(Il2CppBase() + 0x46C59F4))(0);
	}
	template <typename T = void> static T getGroupStateAdapter(Il2CppString* unionID, Il2CppString* zoneID, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C5AC4))(0, unionID, zoneID, extraJson);
	}
	template <typename T = void> static T getGroupRelationAdapter(Il2CppString* targetID, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C5C00))(0, targetID, extraJson);
	}
	template <typename T = void> static T joinGroupAdapter(Il2CppString* unionID, Il2CppString* zoneID, Il2CppString* roleID, Il2CppString* groupID, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C5D20))(0, unionID, zoneID, roleID, groupID, extraJson);
	}
	template <typename T = void> static T sendGroupMessageAdapter(Il2CppString* groupMessageJson, Il2CppString* unionID) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C5E88))(0, groupMessageJson, unionID);
	}
	template <typename T = void> static T add_GroupRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46C5FA8))(0, value);
	}
	template <typename T = void> static T remove_GroupRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46C61A8))(0, value);
	}
	template <typename T = void> static T CreateGroup(Il2CppString* unionID, Il2CppString* unionName, Il2CppString* roleName, Il2CppString* zoneID, Il2CppString* roleID, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C63A8))(0, unionID, unionName, roleName, zoneID, roleID, extraJson);
	}
	template <typename T = void> static T BindGroup(Il2CppString* unionID, Il2CppString* zoneID, Il2CppString* roleID, Il2CppString* groupID, Il2CppString* groupName, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C6B14))(0, unionID, zoneID, roleID, groupID, groupName, extraJson);
	}
	template <typename T = void> static T UnbindGroup(Il2CppString* unionID, Il2CppString* unionName, Il2CppString* zoneID, Il2CppString* roleID, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C7280))(0, unionID, unionName, zoneID, roleID, extraJson);
	}
	template <typename T = void> static T RemindToBindGroup(Il2CppString* unionID, Il2CppString* zoneID, Il2CppString* roleID, Il2CppString* roleName, Il2CppString* leaderOpenID, Il2CppString* leaderRoleID, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C7924))(0, unionID, zoneID, roleID, roleName, leaderOpenID, leaderRoleID, extraJson);
	}
	template <typename T = void> static T GetGroupList() {
		return ((T (*)(void *))(Il2CppBase() + 0x46C8148))(0);
	}
	template <typename T = void> static T GetGroupState(Il2CppString* unionID, Il2CppString* zoneID, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C83D4))(0, unionID, zoneID, extraJson);
	}
	template <typename T = void> static T GetGroupRelation(Il2CppString* targetID, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C8908))(0, targetID, extraJson);
	}
	template <typename T = void> static T JoinGroup(Il2CppString* unionID, Il2CppString* zoneID, Il2CppString* roleID, Il2CppString* groupID, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C8C10))(0, unionID, zoneID, roleID, groupID, extraJson);
	}
	template <typename T = void> static T SendGroupMessage(uintptr_t groupMessage, Il2CppString* unionID) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x46C92B4))(0, groupMessage, unionID);
	}
	template <typename T = void> static T OnGroupRet(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46C95F0))(0, json);
	}

};

}
