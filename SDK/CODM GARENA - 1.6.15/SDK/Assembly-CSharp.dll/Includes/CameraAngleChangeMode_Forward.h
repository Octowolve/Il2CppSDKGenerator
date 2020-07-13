#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraAngleChangeModeForward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraAngleChangeMode_Forward"));
	}

	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_CameraAngleStateData() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& m_CacheEulerAngles() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_Idle2PreEndDealyTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_EnterIdleStateDiffTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Creater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraDeltaEulerAngles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanChangeIdle2PreEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterCameraAngleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T Creater() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BF627C))(0);
	}
	template <typename T = uintptr_t> T get_CameraAngleStateInfo_Start() {
		return ((T (*)(CameraAngleChangeModeForward*))(Il2CppBase() + 0x1BF7F8C))(this);
	}
	template <typename T = uintptr_t> T get_CameraAngleStateInfo_PreEnd() {
		return ((T (*)(CameraAngleChangeModeForward*))(Il2CppBase() + 0x1BF8028))(this);
	}
	template <typename T = uintptr_t> T get_CameraAngleStateInfo_End() {
		return ((T (*)(CameraAngleChangeModeForward*))(Il2CppBase() + 0x1BF80C4))(this);
	}
	template <typename T = Il2CppVector3> T GetCameraDeltaEulerAngles(float angle) {
		return ((T (*)(CameraAngleChangeModeForward*, float))(Il2CppBase() + 0x1BF8160))(this, angle);
	}
	template <typename T = bool> T CanChangeIdle2PreEnd() {
		return ((T (*)(CameraAngleChangeModeForward*))(Il2CppBase() + 0x1BF8264))(this);
	}
	template <typename T = void> T OnEnterCameraAngleState(uintptr_t newState) {
		return ((T (*)(CameraAngleChangeModeForward*, uintptr_t))(Il2CppBase() + 0x1BF8370))(this, newState);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetCameraDeltaEulerAngles(float P0) {
		return ((T (*)(CameraAngleChangeModeForward*, float))(Il2CppBase() + 0x1BF8460))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanChangeIdle2PreEnd() {
		return ((T (*)(CameraAngleChangeModeForward*))(Il2CppBase() + 0x1BF8470))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterCameraAngleState(uintptr_t P0) {
		return ((T (*)(CameraAngleChangeModeForward*, uintptr_t))(Il2CppBase() + 0x1BF8474))(this, P0);
	}

};

}
