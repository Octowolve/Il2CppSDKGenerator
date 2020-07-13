#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GrappleGunProjectileTrackEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GrappleGunProjectileTrackEffect"));
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
	template <typename T = uintptr_t> T& m_lineEffet() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& MAX_POINT_NUM() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& TRACK_POINTS_NUM() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_needToShowTrackPoints() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_Uninit() {
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

	template <typename T = Il2CppQuaternion> T GetOwerAimRotation() {
		return ((T (*)(GrappleGunProjectileTrackEffect*))(Il2CppBase() + 0x1ECF570))(this);
	}
	template <typename T = void> T Init(uintptr_t projComponent, uintptr_t weaponEntity, uintptr_t weaponAttachment) {
		return ((T (*)(GrappleGunProjectileTrackEffect*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1ECF740))(this, projComponent, weaponEntity, weaponAttachment);
	}
	template <typename T = void> T Uninit() {
		return ((T (*)(GrappleGunProjectileTrackEffect*))(Il2CppBase() + 0x1ECF9D0))(this);
	}
	template <typename T = void> T ShowTrackEffect() {
		return ((T (*)(GrappleGunProjectileTrackEffect*))(Il2CppBase() + 0x1ECFB1C))(this);
	}
	template <typename T = void> T UpdateTrackEffect() {
		return ((T (*)(GrappleGunProjectileTrackEffect*))(Il2CppBase() + 0x1ECFC48))(this);
	}
	template <typename T = void> T HideTrackEffect() {
		return ((T (*)(GrappleGunProjectileTrackEffect*))(Il2CppBase() + 0x1ED0000))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(GrappleGunProjectileTrackEffect*, float))(Il2CppBase() + 0x1ED012C))(this, deltaTime);
	}
	template <typename T = void> T Initm__0(uintptr_t lineEff) {
		return ((T (*)(GrappleGunProjectileTrackEffect*, uintptr_t))(Il2CppBase() + 0x1ED01E4))(this, lineEff);
	}

};

}
