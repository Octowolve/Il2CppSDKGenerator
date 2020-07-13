#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PowerUpConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PowerUpConfig"));
	}

	template <typename T = int32_t> T& itemID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ratio() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& applyToTeam() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
