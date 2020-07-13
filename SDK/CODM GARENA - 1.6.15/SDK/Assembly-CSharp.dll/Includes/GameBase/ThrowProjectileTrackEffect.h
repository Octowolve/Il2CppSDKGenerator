#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ThrowProjectileTrackEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ThrowProjectileTrackEffect"));
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
	template <typename T = uintptr_t> T& m_ValidImpactEffect() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_InvalidImpactEffect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& MAX_POINT_NUM() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsShowLine() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& sTickEachClearTrackPositionListTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& TickEachClearTrackPositionListTime() {
		return *(T*)((uintptr_t)this + 0x30);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTrackEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideTrackEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTrackPositionList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTraceFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldHideTrackEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckValidImpactPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFirstImpactEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> T get_FindValidImpactPoint() {
		return ((T (*)(ThrowProjectileTrackEffect*))(Il2CppBase() + 0x27C51B4))(this);
	}
	template <typename T = Il2CppQuaternion> T GetOwerAimRotation() {
		return ((T (*)(ThrowProjectileTrackEffect*))(Il2CppBase() + 0x27C51BC))(this);
	}
	template <typename T = void> T Init(uintptr_t projComponent, uintptr_t weaponEntity, uintptr_t weaponAttachment) {
		return ((T (*)(ThrowProjectileTrackEffect*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x27C538C))(this, projComponent, weaponEntity, weaponAttachment);
	}
	template <typename T = void> T ShowTrackEffect() {
		return ((T (*)(ThrowProjectileTrackEffect*))(Il2CppBase() + 0x27C562C))(this);
	}
	template <typename T = void> T HideTrackEffect() {
		return ((T (*)(ThrowProjectileTrackEffect*))(Il2CppBase() + 0x27C60E8))(this);
	}
	template <typename T = void> T ClearTrackPositionList(float deltaTime) {
		return ((T (*)(ThrowProjectileTrackEffect*, float))(Il2CppBase() + 0x27C6350))(this, deltaTime);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(ThrowProjectileTrackEffect*, float))(Il2CppBase() + 0x27C6440))(this, deltaTime);
	}
	template <typename T = int32_t> T GetTraceFlag(bool traceLocalPlayer) {
		return ((T (*)(ThrowProjectileTrackEffect*, bool))(Il2CppBase() + 0x27C6698))(this, traceLocalPlayer);
	}
	template <typename T = bool> T ShouldHideTrackEffect() {
		return ((T (*)(ThrowProjectileTrackEffect*))(Il2CppBase() + 0x27C6748))(this);
	}
	template <typename T = bool> T CheckValidImpactPoint(uintptr_t firstImpactResult) {
		return ((T (*)(ThrowProjectileTrackEffect*, uintptr_t))(Il2CppBase() + 0x27C6878))(this, firstImpactResult);
	}
	template <typename T = void> T UpdateFirstImpactEffect() {
		return ((T (*)(ThrowProjectileTrackEffect*))(Il2CppBase() + 0x27C59B0))(this);
	}

};

}
