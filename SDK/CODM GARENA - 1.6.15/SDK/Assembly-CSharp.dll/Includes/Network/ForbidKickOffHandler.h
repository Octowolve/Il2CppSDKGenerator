#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class ForbidKickOffHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "ForbidKickOffHandler"));
	}

	template <typename T = bool> static T& CurrentStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForbidKickOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T ForbidKickOff(bool forbid) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4823C8C))(0, forbid);
	}

};

}
