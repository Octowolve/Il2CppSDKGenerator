#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildLevelActivityReward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildLevelActivityReward"));
	}

	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& memberReward1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& memberReward2() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& memberReward3() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& guildReward1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& guildReward2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& guildReward3() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
