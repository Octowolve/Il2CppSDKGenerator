#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class ForceAimAtTargetVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "ForceAimAtTargetVolume"));
	}

	template <typename T = uintptr_t> T& TargetPosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& ForceDisableFirstPersonCamera() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& DisableAfterTriggered() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = bool> T& LockPlayerInput() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = bool> T& NeedRecover() {
		return *(T*)((uintptr_t)this + 0x33);
	}
	template <typename T = bool> T& FirstPersonCameraState() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppQuaternion> T& m_TargetRotation() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppQuaternion> T& m_CurrentRotation() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppQuaternion> T& m_InitialRotation() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_IsRotating() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_CachedCamTransform() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& m_IsRecovering() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_ReachTargetTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_TotalRotateTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndRotating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(ForceAimAtTargetVolume*, uintptr_t))(Il2CppBase() + 0x49C1868))(this, other);
	}
	template <typename T = bool> T get_IsTickable() {
		return ((T (*)(ForceAimAtTargetVolume*))(Il2CppBase() + 0x49C1CD4))(this);
	}
	template <typename T = void> T Tick(float fDeltaTime) {
		return ((T (*)(ForceAimAtTargetVolume*, float))(Il2CppBase() + 0x49C1CDC))(this, fDeltaTime);
	}
	template <typename T = void> T EndRotating() {
		return ((T (*)(ForceAimAtTargetVolume*))(Il2CppBase() + 0x49C20E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ForceAimAtTargetVolume*, float))(Il2CppBase() + 0x49C2268))(this, P0);
	}

};

}
