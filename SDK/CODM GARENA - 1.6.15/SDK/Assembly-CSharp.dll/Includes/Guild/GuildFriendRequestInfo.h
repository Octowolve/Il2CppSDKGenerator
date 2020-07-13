#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildFriendRequestInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildFriendRequestInfo"));
	}

	template <typename T = uint64_t> T& FriendId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& PictureInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& FriendName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& strFriendLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& FriendLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& PeakLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& OnlineState() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& State() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsMan() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& bHasGuild() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildGuildFriendRequestInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T BuildGuildFriendRequestInfo(uintptr_t fc) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3BBD2BC))(0, fc);
	}
	template <typename T = Il2CppString*> static T ConfigureState(uintptr_t state, uint64_t logoutTime) {
		return ((T (*)(void *, uintptr_t, uint64_t))(Il2CppBase() + 0x3BBDB20))(0, state, logoutTime);
	}

};

}
