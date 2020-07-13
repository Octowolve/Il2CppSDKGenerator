#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatRoomInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatRoomInfo"));
	}

	template <typename T = uint32_t> T& RoomID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& RoomSvrAddr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& WorldLevelRestrict() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& WorldRankRestrict() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& GuildLevelRestrict() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& GuildRankRestrict() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& WorldChatTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& GuildChatTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
