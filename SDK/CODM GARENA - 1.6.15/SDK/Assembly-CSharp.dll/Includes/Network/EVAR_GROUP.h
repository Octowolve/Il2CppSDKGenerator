#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class EVARGROUP
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "EVAR_GROUP"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eVARGROUP_CHARACTER_UINT8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eVARGROUP_CHARACTER_UINT16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eVARGROUP_CHARACTER_UINT32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eVARGROUP_GAME_UINT8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eVARGROUP_GAME_UINT16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eVARGROUP_GAME_UINT32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
