#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class CatGamePeriodType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "CatGamePeriodType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& GATGAME_PERIOD_PREPARE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& GATGAME_PERIOD_HIDE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& GATGAME_PERIOD_SEEK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
