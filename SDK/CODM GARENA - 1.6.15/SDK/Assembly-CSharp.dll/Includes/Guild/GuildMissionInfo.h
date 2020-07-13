#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildMissionInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildMissionInfo"));
	}

	template <typename T = int32_t> T& mission_id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint64_t> T& guild_value() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& player_value() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
