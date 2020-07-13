#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NZVehicleSpringArmComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NZVehicleSpringArmComponent"));
	}

	template <typename T = bool> T& ShowDebugLog() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& speedArmLengthCurve() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& SocketOffset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& TargetOffset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& ProbeSize() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& DoCollisionTest() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& ReduceLengthWhenCollide() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& ProbeChannel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& InheritPitchRadio() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& InheritYaw() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& InheritRoll() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = bool> T& EnableCameraRotationLag() {
		return *(T*)((uintptr_t)this + 0x42);
	}
	template <typename T = float> T& CameraRotationLagSpeed() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& PreviousDesiredRot() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& ownerVehicle() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& WorldSocketLocation() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppQuaternion> T& WorldSocketRotation() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& DriverLastRotateSpringArmTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_AutoResetDriverDelay() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& m_AutoResetImmediateDriverDelay() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_AutoResetDriverSpringArmSpeed() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_AutoResetDriverPitchSpeed() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& InitialSpringArmPitch() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_SpringArmPitchFollowVehicleSpeed() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& cameraResetType() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_CloseLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& m_CloseLerpTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_CloseLerpStartTime() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& m_CloseIsLerping() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& m_CloseLerpTargetLength() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& m_CurrentArmLength() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_CloseLerpCallback() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& forwardYaw() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSpringArmComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LerpCloseCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLerpClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDesiredArmLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BlendLocations() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RInterpTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckResetSpringArmCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoResetSpringArmRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSpringArmRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(NZVehicleSpringArmComponent*))(Il2CppBase() + 0x19E4958))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NZVehicleSpringArmComponent*))(Il2CppBase() + 0x19E4BC4))(this);
	}
	template <typename T = void> T InitSpringArmComponent(uintptr_t vehice) {
		return ((T (*)(NZVehicleSpringArmComponent*, uintptr_t))(Il2CppBase() + 0x19E4C5C))(this, vehice);
	}
	template <typename T = Il2CppVector3> T GetTargetRotation() {
		return ((T (*)(NZVehicleSpringArmComponent*))(Il2CppBase() + 0x19E4D04))(this);
	}
	template <typename T = void> T LerpCloseCamera(float lerpSpeed, float targetLength, float lerpTime, uintptr_t callback) {
		return ((T (*)(NZVehicleSpringArmComponent*, float, float, float, uintptr_t))(Il2CppBase() + 0x19E512C))(this, lerpSpeed, targetLength, lerpTime, callback);
	}
	template <typename T = void> T ResetLerpClose() {
		return ((T (*)(NZVehicleSpringArmComponent*))(Il2CppBase() + 0x19E5254))(this);
	}
	template <typename T = void> T UpdateDesiredArmLocation(bool bInitial) {
		return ((T (*)(NZVehicleSpringArmComponent*, bool))(Il2CppBase() + 0x19E5310))(this, bInitial);
	}
	template <typename T = Il2CppVector3> T BlendLocations(Il2CppVector3 DesiredArmLocation, Il2CppVector3 TraceHitLocation, bool bHitSomething, float DeltaTime) {
		return ((T (*)(NZVehicleSpringArmComponent*, Il2CppVector3, Il2CppVector3, bool, float))(Il2CppBase() + 0x19E63D8))(this, DesiredArmLocation, TraceHitLocation, bHitSomething, DeltaTime);
	}
	template <typename T = Il2CppVector3> T RInterpTo(Il2CppVector3 Current, Il2CppVector3 Target, float DeltaTime, float InterpSpeed) {
		return ((T (*)(NZVehicleSpringArmComponent*, Il2CppVector3, Il2CppVector3, float, float))(Il2CppBase() + 0x19E60F8))(this, Current, Target, DeltaTime, InterpSpeed);
	}
	template <typename T = void> T CheckResetSpringArmCamera() {
		return ((T (*)(NZVehicleSpringArmComponent*))(Il2CppBase() + 0x19E64D8))(this);
	}
	template <typename T = void> T DoResetSpringArmRot(bool bResetYaw, bool bResetPitch) {
		return ((T (*)(NZVehicleSpringArmComponent*, bool, bool))(Il2CppBase() + 0x19E6754))(this, bResetYaw, bResetPitch);
	}
	template <typename T = void> T InitSpringArmRot() {
		return ((T (*)(NZVehicleSpringArmComponent*))(Il2CppBase() + 0x19E6924))(this);
	}

};

}
