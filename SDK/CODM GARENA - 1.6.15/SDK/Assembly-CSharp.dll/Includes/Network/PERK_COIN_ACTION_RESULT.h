#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class PERKCOINACTIONRESULT
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "PERK_COIN_ACTION_RESULT"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& ePERK_COIN_ACTION_SUCC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePERK_COIN_ACTION_NOT_ENOUGH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePERK_COIN_ACTION_OTHER_FAIL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePECK_COIN_ACTION_TIMES_OVER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePECK_COIN_ACTION_FAIL_HAS_PERK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePECK_COIN_ACTION_USE_FAIL_TIMES_LIMIT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
