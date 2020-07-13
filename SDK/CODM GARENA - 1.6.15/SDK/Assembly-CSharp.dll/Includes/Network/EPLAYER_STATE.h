#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class EPLAYERSTATE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "EPLAYER_STATE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& ePLAYER_GAME_STATE_NORMAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePLAYER_GAME_STATE_DEAD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePLAYER_GAME_STATE_SPECTING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePLAYER_GAME_STATE_OBSERVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePLAYER_GAME_STATE_DYING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
