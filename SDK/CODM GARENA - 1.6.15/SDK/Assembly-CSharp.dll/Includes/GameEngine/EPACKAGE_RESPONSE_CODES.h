#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class EPACKAGERESPONSECODES
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "EPACKAGE_RESPONSE_CODES"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eEPACKAGE_RESPONSE_SUCC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eEPACKAGE_RESPONSE_UNKNOW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eEPACKAGE_RESPONSE_WAITTIMEOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eEPACKAGE_RESPONSE_ALREADY_STARTED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eEPACKAGE_RESPONSE_PLAYER_NOT_EXIST() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eEPACKAGE_RESPONSE_WRONG_VERSION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eEPACKAGE_RESPONSE_ROOMFULL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eEPACKAGE_RESPONSE_ALREADY_GAMEOVER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
