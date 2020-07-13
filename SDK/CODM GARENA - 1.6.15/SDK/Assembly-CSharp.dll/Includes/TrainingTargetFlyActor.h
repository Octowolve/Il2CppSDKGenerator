#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrainingTargetFlyActor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrainingTargetFlyActor"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init(uintptr_t inData) {
		return ((T (*)(TrainingTargetFlyActor*, uintptr_t))(Il2CppBase() + 0x49682EC))(this, inData);
	}
	template <typename T = bool> T get_IsCanDirectAutoFire() {
		return ((T (*)(TrainingTargetFlyActor*))(Il2CppBase() + 0x496846C))(this);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(TrainingTargetFlyActor*, uintptr_t))(Il2CppBase() + 0x4968474))(this, pawn);
	}
	template <typename T = bool> T IsSameCamp(uintptr_t pawn) {
		return ((T (*)(TrainingTargetFlyActor*, uintptr_t))(Il2CppBase() + 0x49685A8))(this, pawn);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(TrainingTargetFlyActor*, uintptr_t))(Il2CppBase() + 0x49687D8))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(TrainingTargetFlyActor*, uintptr_t))(Il2CppBase() + 0x49687E0))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSameCamp(uintptr_t P0) {
		return ((T (*)(TrainingTargetFlyActor*, uintptr_t))(Il2CppBase() + 0x49687E8))(this, P0);
	}

};

}
