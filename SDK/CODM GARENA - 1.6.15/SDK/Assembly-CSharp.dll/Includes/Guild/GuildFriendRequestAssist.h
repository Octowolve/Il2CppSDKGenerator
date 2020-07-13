#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildFriendRequestAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildFriendRequestAssist"));
	}

	template <typename T = uintptr_t> static T& response() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildFriendRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildFriendResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> static T OnGuildFriendRequest(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3BBAE54))(0, callback);
	}
	template <typename T = void> static T OnGuildFriendResponse() {
		return ((T (*)(void *))(Il2CppBase() + 0x3BBAF5C))(0);
	}

};

}
