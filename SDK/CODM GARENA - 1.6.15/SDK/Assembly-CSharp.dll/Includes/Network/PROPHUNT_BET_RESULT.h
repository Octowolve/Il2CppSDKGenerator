#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class PROPHUNTBETRESULT
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "PROPHUNT_BET_RESULT"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& ePROPHUNT_BET_SUCC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePROPHUNT_BET_NOT_ENOUGH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePROPHUNT_BET_OTHER_FAIL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
