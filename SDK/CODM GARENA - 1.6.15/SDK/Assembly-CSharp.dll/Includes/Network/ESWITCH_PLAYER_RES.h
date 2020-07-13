#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class ESWITCHPLAYERRES
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "ESWITCH_PLAYER_RES"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eSWITCH_PLAYER_RES_OK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eSWITCH_PLAYER_RES_CANT_FIND_AI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eSWITCH_PLAYER_RES_CAMP_INVALID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eSWITCH_PLAYER_RES_NOT_OPEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eSWITCH_PLAYER_RES_ERROR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
