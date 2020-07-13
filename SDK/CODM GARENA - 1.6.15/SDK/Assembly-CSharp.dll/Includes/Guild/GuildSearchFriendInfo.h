#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildSearchFriendInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildSearchFriendInfo"));
	}

	template <typename T = Il2CppString*> T& FriendName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& PicInfo() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildFriendInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T BuildFriendInfo(uintptr_t msgInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3BEF918))(0, msgInfo);
	}

};

}
