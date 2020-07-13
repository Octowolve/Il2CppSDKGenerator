#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraAngleChangeModeTurn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraAngleChangeMode_Turn"));
	}

	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_TurnCameraData() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& m_CacheEulerAngles() {
		return *(T*)((uintptr_t)this + 0x34);
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

	template <typename T = uintptr_t> static T Creater() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BF5D5C))(0);
	}
	template <typename T = uintptr_t> T get_CameraAngleStateInfo_Start() {
		return ((T (*)(CameraAngleChangeModeTurn*))(Il2CppBase() + 0x1BF86C8))(this);
	}
	template <typename T = uintptr_t> T get_CameraAngleStateInfo_PreEnd() {
		return ((T (*)(CameraAngleChangeModeTurn*))(Il2CppBase() + 0x1BF8764))(this);
	}
	template <typename T = uintptr_t> T get_CameraAngleStateInfo_End() {
		return ((T (*)(CameraAngleChangeModeTurn*))(Il2CppBase() + 0x1BF8800))(this);
	}
	template <typename T = Il2CppVector3> T GetCameraDeltaEulerAngles(float angle) {
		return ((T (*)(CameraAngleChangeModeTurn*, float))(Il2CppBase() + 0x1BF889C))(this, angle);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetCameraDeltaEulerAngles(float P0) {
		return ((T (*)(CameraAngleChangeModeTurn*, float))(Il2CppBase() + 0x1BF89A4))(this, P0);
	}

};

}
