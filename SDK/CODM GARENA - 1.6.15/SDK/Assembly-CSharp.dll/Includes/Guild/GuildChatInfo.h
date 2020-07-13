#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildChatInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildChatInfo"));
	}

	template <typename T = uintptr_t> T& ChatType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uint64_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& PlayerName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Content() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsSelfChat() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& NeedShowTime() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uint32_t> T& RoomID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& RoomSvrAddr() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& MapID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& GameMode() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& RoomType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& RoomFullCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& RecruitCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}


};

}
