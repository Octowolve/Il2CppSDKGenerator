#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BotSpawnPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BotSpawnPoint"));
	}

	template <typename T = int32_t> T& BotId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& RecoverTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_ServerOnly() {
		return ((T (*)(BotSpawnPoint*))(Il2CppBase() + 0x35C0514))(this);
	}

};

}
