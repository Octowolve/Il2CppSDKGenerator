#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class EGspGainFlag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "EGspGainFlag"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& ENMGGF_REACH_DAILY_LIMIT_EXP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ENMGGF_REACH_DAILY_LIMIT_GOLD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ENMGGF_REACH_DAILY_LIMIT_WEAPON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
