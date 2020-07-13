#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class EBioRoundStage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "EBioRoundStage"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& EBIO_STAGE_WAIT_START() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EBIO_STAGE_HUMAN_ZOMBIE_FIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EBIO_STAGE_HERO_ZOMBIE_FIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
