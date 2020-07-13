#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponRPGUnequippingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponRPGUnequippingState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponRPGUnequippingState*))(Il2CppBase() + 0x3A7C610))(this);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WeaponRPGUnequippingState*))(Il2CppBase() + 0x3A7C748))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponRPGUnequippingState*))(Il2CppBase() + 0x3A7C8EC))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WeaponRPGUnequippingState*))(Il2CppBase() + 0x3A7C8F4))(this);
	}

};

}
