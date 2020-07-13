#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class StreakIndicatorItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "StreakIndicatorItem"));
	}

	template <typename T = uintptr_t> T& IndicatorSprite() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& OcclusionAlpha() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& RaycastInterval() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& SwitchScaleDistanceThreshold() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& SwitchScaleThreshold() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_StreakTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& m_Offset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& m_OwnerPlayerID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_LastRaycastTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_LastRaycastResult() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_IsPerspective() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = Il2CppVector3> T& m_LocalScale() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_IsAircraft() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_IsSameTeamWithStreakOwner() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = float> T& m_InitTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_OwnerCamp() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_RaycastOffset() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T SetItemSprite(bool isAircraft) {
		return ((T (*)(StreakIndicatorItem*, bool))(Il2CppBase() + 0x30AFF18))(this, isAircraft);
	}
	template <typename T = void> T SetIndicatorSpriteLocalRotation(Il2CppQuaternion localRotation) {
		return ((T (*)(StreakIndicatorItem*, Il2CppQuaternion))(Il2CppBase() + 0x30B0138))(this, localRotation);
	}
	template <typename T = void> T SetAlpha(float alpha) {
		return ((T (*)(StreakIndicatorItem*, float))(Il2CppBase() + 0x30B019C))(this, alpha);
	}
	template <typename T = void> T SetScale(float scale) {
		return ((T (*)(StreakIndicatorItem*, float))(Il2CppBase() + 0x30B01D0))(this, scale);
	}
	template <typename T = void> T Init(uintptr_t streakTransform, bool isAircraft, Il2CppVector3 offset, bool isPerspective, uint32_t ownerPlayerID, float iconScale, float raycastOffset) {
		return ((T (*)(StreakIndicatorItem*, uintptr_t, bool, Il2CppVector3, bool, uint32_t, float, float))(Il2CppBase() + 0x30AE88C))(this, streakTransform, isAircraft, offset, isPerspective, ownerPlayerID, iconScale, raycastOffset);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(StreakIndicatorItem*, float))(Il2CppBase() + 0x30AEE80))(this, deltaTime);
	}
	template <typename T = void> T UpdateElectricShockCarInfo(uintptr_t type, int32_t count) {
		return ((T (*)(StreakIndicatorItem*, uintptr_t, int32_t))(Il2CppBase() + 0x30AFE6C))(this, type, count);
	}

};

}
