#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseTrainingTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseTrainingTarget"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(BaseTrainingTarget*, uintptr_t))(Il2CppBase() + 0x3253544))(this, pawn);
	}
	template <typename T = void> T TakeDamage(uintptr_t damageInfo) {
		return ((T (*)(BaseTrainingTarget*, uintptr_t))(Il2CppBase() + 0x3253608))(this, damageInfo);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(BaseTrainingTarget*, uintptr_t))(Il2CppBase() + 0x32536A8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(BaseTrainingTarget*, uintptr_t))(Il2CppBase() + 0x32536B0))(this, P0);
	}

};

}
