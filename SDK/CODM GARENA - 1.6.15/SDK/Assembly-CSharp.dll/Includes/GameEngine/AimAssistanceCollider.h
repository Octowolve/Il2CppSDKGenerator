#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AimAssistanceCollider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AimAssistanceCollider"));
	}

	template <typename T = float> static T& InitRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_RadiusForFire() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_DistToLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_UpdateInv() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPhyColliderEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckForFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDistanceFromLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = float> T get_DistToLocalPlayer() {
		return ((T (*)(AimAssistanceCollider*))(Il2CppBase() + 0x2B3EFAC))(this);
	}
	template <typename T = float> T get_RadiusForFire() {
		return ((T (*)(AimAssistanceCollider*))(Il2CppBase() + 0x2B3EFB4))(this);
	}
	template <typename T = Il2CppVector3> T get_BoxColliderPos() {
		return ((T (*)(AimAssistanceCollider*))(Il2CppBase() + 0x2B3EFBC))(this);
	}
	template <typename T = void> T SetPhyColliderEnabled(bool bSet) {
		return ((T (*)(AimAssistanceCollider*, bool))(Il2CppBase() + 0x2B3F004))(this, bSet);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(AimAssistanceCollider*))(Il2CppBase() + 0x2B3F124))(this);
	}
	template <typename T = void> T SetRadius(Il2CppVector2 size) {
		return ((T (*)(AimAssistanceCollider*, Il2CppVector2))(Il2CppBase() + 0x2B3F588))(this, size);
	}
	template <typename T = bool> T CheckForFire(Il2CppVector3 from, Il2CppVector3 ray) {
		return ((T (*)(AimAssistanceCollider*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2B3F6A0))(this, from, ray);
	}
	template <typename T = float> T GetDistanceFromLocalPlayer() {
		return ((T (*)(AimAssistanceCollider*))(Il2CppBase() + 0x2B3F878))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AimAssistanceCollider*, float))(Il2CppBase() + 0x2B3FA8C))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(AimAssistanceCollider*))(Il2CppBase() + 0x2B3FE88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AimAssistanceCollider*, float))(Il2CppBase() + 0x2B3FE90))(this, P0);
	}

};

}
