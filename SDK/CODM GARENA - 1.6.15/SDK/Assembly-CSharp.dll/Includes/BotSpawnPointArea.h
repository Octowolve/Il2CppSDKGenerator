#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BotSpawnPointArea
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BotSpawnPointArea"));
	}

	template <typename T = int32_t> T& AreaBotsNum() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& RefreshInterval() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_ServerOnly() {
		return ((T (*)(BotSpawnPointArea*))(Il2CppBase() + 0x35C05C0))(this);
	}

};

}
