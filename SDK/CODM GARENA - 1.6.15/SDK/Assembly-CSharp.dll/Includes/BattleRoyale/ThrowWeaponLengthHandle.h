#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class ThrowWeaponLengthHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "ThrowWeaponLengthHandle"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T UpdateLength() {
		return ((T (*)(ThrowWeaponLengthHandle*))(Il2CppBase() + 0x35B08D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateLength() {
		return ((T (*)(ThrowWeaponLengthHandle*))(Il2CppBase() + 0x35B0BE4))(this);
	}

};

}
