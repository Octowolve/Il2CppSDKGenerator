#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BotConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BotConfig"));
	}

	template <typename T = int32_t> T& botID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& count() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = unsigned char> T& spawnSpotGroup() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
