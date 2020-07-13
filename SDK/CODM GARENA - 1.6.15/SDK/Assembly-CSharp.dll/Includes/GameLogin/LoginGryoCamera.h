#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class LoginGryoCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "LoginGryoCamera"));
	}

	template <typename T = bool> static T& USE_QUATERNION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& m_StaticInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppVector2> T& m_RotationLimitation() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& m_RotationFov() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_DragFactor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_TargetTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& m_OriginRotation() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppQuaternion> T& m_LastQuat() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_Scale() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_Mouse() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector2> T& m_Factor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> static T& m_sRotateSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppVector3> T& m_AccumulateOffset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRotationEular() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptRotateSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OffsetToEular() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClampEular() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LimitEular() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScaleQuat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x33D89E8))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LoginGryoCamera*))(Il2CppBase() + 0x33D8A98))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(LoginGryoCamera*))(Il2CppBase() + 0x33D8CAC))(this);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(LoginGryoCamera*, bool))(Il2CppBase() + 0x33D8E5C))(this, paused);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LoginGryoCamera*))(Il2CppBase() + 0x33D902C))(this);
	}
	template <typename T = Il2CppVector3> T GetRotationEular(Il2CppVector3 eular) {
		return ((T (*)(LoginGryoCamera*, Il2CppVector3))(Il2CppBase() + 0x33D9E04))(this, eular);
	}
	template <typename T = Il2CppVector3> T AdaptRotateSpeed(Il2CppVector3 eular) {
		return ((T (*)(LoginGryoCamera*, Il2CppVector3))(Il2CppBase() + 0x33D9F34))(this, eular);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(LoginGryoCamera*))(Il2CppBase() + 0x33DA068))(this);
	}
	template <typename T = Il2CppVector3> T OffsetToEular(Il2CppVector2 offset) {
		return ((T (*)(LoginGryoCamera*, Il2CppVector2))(Il2CppBase() + 0x33D9744))(this, offset);
	}
	template <typename T = Il2CppVector3> T ClampEular(Il2CppVector3 eular) {
		return ((T (*)(LoginGryoCamera*, Il2CppVector3))(Il2CppBase() + 0x33D9A80))(this, eular);
	}
	template <typename T = Il2CppVector3> T LimitEular(Il2CppVector3 eular) {
		return ((T (*)(LoginGryoCamera*, Il2CppVector3))(Il2CppBase() + 0x33D9C8C))(this, eular);
	}
	template <typename T = Il2CppQuaternion> T ScaleQuat(Il2CppQuaternion q, float scale) {
		return ((T (*)(LoginGryoCamera*, Il2CppQuaternion, float))(Il2CppBase() + 0x33D992C))(this, q, scale);
	}

};

}
