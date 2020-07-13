#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIProjectilePoison
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIProjectile_Poison"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LeaveADamageZone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T LeaveADamageZone(Il2CppVector3 ExplodeLocation) {
		return ((T (*)(AIProjectilePoison*, Il2CppVector3))(Il2CppBase() + 0x49B2A9C))(this, ExplodeLocation);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_LeaveADamageZone(Il2CppVector3 P0) {
		return ((T (*)(AIProjectilePoison*, Il2CppVector3))(Il2CppBase() + 0x49B2BF8))(this, P0);
	}

};

}
