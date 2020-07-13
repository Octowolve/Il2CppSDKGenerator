#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class NormalWeaponLengthHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "NormalWeaponLengthHandle"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T UpdateLength() {
		return ((T (*)(NormalWeaponLengthHandle*))(Il2CppBase() + 0x3D5A0C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateLength() {
		return ((T (*)(NormalWeaponLengthHandle*))(Il2CppBase() + 0x3D5A3E4))(this);
	}

};

}
