#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPInteractiveHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPInteractiveHUD"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(PVPInteractiveHUD*))(Il2CppBase() + 0x2B08F80))(this);
	}

};

}
