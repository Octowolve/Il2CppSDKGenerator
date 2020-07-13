#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FriendGroupData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FriendGroupData"));
	}

	template <typename T = uintptr_t> T& DataType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Friend() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Recommend() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& GuildMember() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsInAllTab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFriendData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRecommendData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGuildMemberData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRecentPlayerData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(FriendGroupData*))(Il2CppBase() + 0x32C6FCC))(this);
	}
	template <typename T = void> T SetFriendData(uintptr_t friend, bool isInAllTab) {
		return ((T (*)(FriendGroupData*, uintptr_t, bool))(Il2CppBase() + 0x32C6A94))(this, friend, isInAllTab);
	}
	template <typename T = void> T SetRecommendData(uintptr_t recommend, bool isInAllTab) {
		return ((T (*)(FriendGroupData*, uintptr_t, bool))(Il2CppBase() + 0x32C6D2C))(this, recommend, isInAllTab);
	}
	template <typename T = void> T SetGuildMemberData(uintptr_t guildMember, bool isInAllTab) {
		return ((T (*)(FriendGroupData*, uintptr_t, bool))(Il2CppBase() + 0x32C6EDC))(this, guildMember, isInAllTab);
	}
	template <typename T = void> T SetRecentPlayerData(uintptr_t friend, bool isInAllTab) {
		return ((T (*)(FriendGroupData*, uintptr_t, bool))(Il2CppBase() + 0x32C6B80))(this, friend, isInAllTab);
	}

};

}
