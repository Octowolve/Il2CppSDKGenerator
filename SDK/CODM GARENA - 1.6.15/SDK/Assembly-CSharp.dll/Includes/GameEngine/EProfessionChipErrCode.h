#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class EProfessionChipErrCode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "EProfessionChipErrCode"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& EPROFESSIONCHIP_ERR_SUCC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EPROFESSIONCHIP_ERR_ALREADY_CHOICE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EPROFESSIONCHIP_ERR_NOT_OWNER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EPROFESSIONCHIP_ERR_FORBIDDEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
