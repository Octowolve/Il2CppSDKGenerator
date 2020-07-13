#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ElectricTripWireProjectileTrackEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ElectricTripWireProjectileTrackEffect"));
	}

	template <typename T = uintptr_t> T& m_ProjComponent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_WeaponEntity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_WeaponAttachmentEntity() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_FindValidImpactPoint() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_lineEffet() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& MAX_POINT_NUM() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& TRACK_POINTS_NUM() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwerAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTrailPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTrackEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTrackEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideTrackEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T get_FindValidImpactPoint() {
		return ((T (*)(ElectricTripWireProjectileTrackEffect*))(Il2CppBase() + 0x40FD7D8))(this);
	}
	template <typename T = Il2CppQuaternion> T GetOwerAimRotation() {
		return ((T (*)(ElectricTripWireProjectileTrackEffect*))(Il2CppBase() + 0x40FD7E0))(this);
	}
	template <typename T = void> T Init(uintptr_t projComponent, uintptr_t weaponEntity, uintptr_t weaponAttachment) {
		return ((T (*)(ElectricTripWireProjectileTrackEffect*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x40FD9B0))(this, projComponent, weaponEntity, weaponAttachment);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T GetTrailPoints(Il2CppList<Il2CppVector3>* trackPositionList) {
		return ((T (*)(ElectricTripWireProjectileTrackEffect*, Il2CppList<Il2CppVector3>*))(Il2CppBase() + 0x40FDB04))(this, trackPositionList);
	}
	template <typename T = void> T ShowTrackEffect() {
		return ((T (*)(ElectricTripWireProjectileTrackEffect*))(Il2CppBase() + 0x40FDD80))(this);
	}
	template <typename T = void> T UpdateTrackEffect() {
		return ((T (*)(ElectricTripWireProjectileTrackEffect*))(Il2CppBase() + 0x40FDF34))(this);
	}
	template <typename T = void> T HideTrackEffect() {
		return ((T (*)(ElectricTripWireProjectileTrackEffect*))(Il2CppBase() + 0x40FE48C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(ElectricTripWireProjectileTrackEffect*, float))(Il2CppBase() + 0x40FE5C8))(this, deltaTime);
	}

};

}
