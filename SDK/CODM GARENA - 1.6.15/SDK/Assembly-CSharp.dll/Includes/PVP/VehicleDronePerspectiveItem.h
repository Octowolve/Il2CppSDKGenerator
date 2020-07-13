#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class VehicleDronePerspectiveItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "VehicleDronePerspectiveItem"));
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
	template <typename T = float> T& RaycastInterval() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_Parent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_PlayerPawn() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& m_PlayerID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_PlayerPawnTransform() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_PlayerPawnHalfHeight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_WorldCamera() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_UICamera() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_IsLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& m_LocalScale() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_BeginShowingTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_LastRaycastTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_LastRaycastResult() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> static T& SHOW_PERSPECTIVE_DURATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_bInit() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedToRemove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_IsInit() {
		return ((T (*)(VehicleDronePerspectiveItem*))(Il2CppBase() + 0x3D9C9EC))(this);
	}
	template <typename T = void> T SetItemSprite() {
		return ((T (*)(VehicleDronePerspectiveItem*))(Il2CppBase() + 0x3D9C9F4))(this);
	}
	template <typename T = void> T SetScale(float scale) {
		return ((T (*)(VehicleDronePerspectiveItem*, float))(Il2CppBase() + 0x3D9CB3C))(this, scale);
	}
	template <typename T = void> T SetAlpha(float alpha) {
		return ((T (*)(VehicleDronePerspectiveItem*, float))(Il2CppBase() + 0x3D9CC34))(this, alpha);
	}
	template <typename T = void> T Init(uintptr_t parent, uintptr_t playerPawn, uintptr_t worldCamera, uintptr_t UICamera, bool isLocalPlayer) {
		return ((T (*)(VehicleDronePerspectiveItem*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3D9B8E8))(this, parent, playerPawn, worldCamera, UICamera, isLocalPlayer);
	}
	template <typename T = bool> T NeedToRemove() {
		return ((T (*)(VehicleDronePerspectiveItem*))(Il2CppBase() + 0x3D9BFE4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(VehicleDronePerspectiveItem*, float))(Il2CppBase() + 0x3D9C0C4))(this, deltaTime);
	}

};

}
