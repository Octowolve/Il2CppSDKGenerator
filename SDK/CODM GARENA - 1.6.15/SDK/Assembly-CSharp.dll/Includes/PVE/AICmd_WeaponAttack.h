#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdWeaponAttack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_WeaponAttack"));
	}

	template <typename T = float> static T& attackAngleDeviation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& currentAngleToTarget() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& fireDuration() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_State() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Popped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init(uintptr_t inParam) {
		return ((T (*)(AICmdWeaponAttack*, uintptr_t))(Il2CppBase() + 0x49A5810))(this, inParam);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdWeaponAttack*))(Il2CppBase() + 0x49A59FC))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdWeaponAttack*))(Il2CppBase() + 0x49A5AE4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_State() {
		return ((T (*)(AICmdWeaponAttack*))(Il2CppBase() + 0x49A5BEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdWeaponAttack*))(Il2CppBase() + 0x49A5BF0))(this);
	}

};

}
