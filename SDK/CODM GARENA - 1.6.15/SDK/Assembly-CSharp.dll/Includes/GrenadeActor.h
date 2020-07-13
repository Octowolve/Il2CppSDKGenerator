#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GrenadeActor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GrenadeActor"));
	}

	template <typename T = uintptr_t> T& Proj() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& HitCollider() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Active() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deactive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanAimmingTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(GrenadeActor*))(Il2CppBase() + 0x3E2D138))(this);
	}
	template <typename T = uint32_t> T get_ActorID() {
		return ((T (*)(GrenadeActor*))(Il2CppBase() + 0x3E2D140))(this);
	}
	template <typename T = void> T Init(uintptr_t inData) {
		return ((T (*)(GrenadeActor*, uintptr_t))(Il2CppBase() + 0x3E2D224))(this, inData);
	}
	template <typename T = uintptr_t> T get_Camp() {
		return ((T (*)(GrenadeActor*))(Il2CppBase() + 0x3E2D2EC))(this);
	}
	template <typename T = bool> T get_IsActive() {
		return ((T (*)(GrenadeActor*))(Il2CppBase() + 0x3E2D3C8))(this);
	}
	template <typename T = void> T Active() {
		return ((T (*)(GrenadeActor*))(Il2CppBase() + 0x3E2D3F4))(this);
	}
	template <typename T = void> T Deactive() {
		return ((T (*)(GrenadeActor*))(Il2CppBase() + 0x3E2D5B0))(this);
	}
	template <typename T = void> T TakeDamage(uintptr_t damageInfo) {
		return ((T (*)(GrenadeActor*, uintptr_t))(Il2CppBase() + 0x3E2D768))(this, damageInfo);
	}
	template <typename T = bool> T IsCanAimmingTarget(uintptr_t pawn) {
		return ((T (*)(GrenadeActor*, uintptr_t))(Il2CppBase() + 0x3E2D8B4))(this, pawn);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(GrenadeActor*, uintptr_t))(Il2CppBase() + 0x3E2DA3C))(this, pawn);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(GrenadeActor*, bool))(Il2CppBase() + 0x3E2DBCC))(this, isHidden);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(GrenadeActor*, uintptr_t))(Il2CppBase() + 0x3E2DCF0))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCanAimmingTarget(uintptr_t P0) {
		return ((T (*)(GrenadeActor*, uintptr_t))(Il2CppBase() + 0x3E2DCF8))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(GrenadeActor*, uintptr_t))(Il2CppBase() + 0x3E2DD00))(this, P0);
	}

};

}
