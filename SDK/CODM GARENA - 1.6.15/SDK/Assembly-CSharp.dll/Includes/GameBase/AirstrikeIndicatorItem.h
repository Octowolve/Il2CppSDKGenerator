#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AirstrikeIndicatorItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AirstrikeIndicatorItem"));
	}

	template <typename T = uintptr_t> T& ItemSprite() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& NearestDistance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& FurthestDistance() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& FurthestScale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& OcclusionAlpha() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& RaycastInterval() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& m_OwnerPosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_WorldCamera() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_UICamera() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& m_LocalScale() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_LastRaycastTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_LastRaycastResult() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_IsFirstRaycast() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = float> T& m_InitTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_ProjectileActorID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& m_OwnerPlayerID() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = float> T get_InitTime() {
		return ((T (*)(AirstrikeIndicatorItem*))(Il2CppBase() + 0x3B77554))(this);
	}
	template <typename T = void> T set_InitTime(float value) {
		return ((T (*)(AirstrikeIndicatorItem*, float))(Il2CppBase() + 0x3B7810C))(this, value);
	}
	template <typename T = int32_t> T get_ProjectileActorID() {
		return ((T (*)(AirstrikeIndicatorItem*))(Il2CppBase() + 0x3B7755C))(this);
	}
	template <typename T = void> T set_ProjectileActorID(int32_t value) {
		return ((T (*)(AirstrikeIndicatorItem*, int32_t))(Il2CppBase() + 0x3B78114))(this, value);
	}
	template <typename T = uint32_t> T get_OwnerPlayerID() {
		return ((T (*)(AirstrikeIndicatorItem*))(Il2CppBase() + 0x3B7811C))(this);
	}
	template <typename T = void> T set_OwnerPlayerID(uint32_t value) {
		return ((T (*)(AirstrikeIndicatorItem*, uint32_t))(Il2CppBase() + 0x3B78124))(this, value);
	}
	template <typename T = void> T SetAlpha(float alpha) {
		return ((T (*)(AirstrikeIndicatorItem*, float))(Il2CppBase() + 0x3B7812C))(this, alpha);
	}
	template <typename T = void> T SetScale(float scale) {
		return ((T (*)(AirstrikeIndicatorItem*, float))(Il2CppBase() + 0x3B781FC))(this, scale);
	}
	template <typename T = void> T Init(uint32_t ownerPlayerID, int32_t ownerActorID, Il2CppVector3 ownerPosition, uintptr_t worldCamera, uintptr_t UICamera) {
		return ((T (*)(AirstrikeIndicatorItem*, uint32_t, int32_t, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B772A4))(this, ownerPlayerID, ownerActorID, ownerPosition, worldCamera, UICamera);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AirstrikeIndicatorItem*, float))(Il2CppBase() + 0x3B77564))(this, deltaTime);
	}

};

}
