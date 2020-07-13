#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class CreateRoomParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "CreateRoomParam"));
	}

	template <typename T = uint32_t> T& ticket_flag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& ticket_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& min_enter_level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& need_open_mic() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& ticket_guild_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
