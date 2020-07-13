#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RainCameraController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RainCameraController"));
	}

	template <typename T = uintptr_t> T& _cam() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _rainBehaviours() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& RenderQueue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Alpha() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& GlobalWind() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& GForceVector() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& ShaderType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& distance() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& VRMode() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopImmidiate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T get_cam() {
		return ((T (*)(RainCameraController*))(Il2CppBase() + 0x3DBA0B8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_rainBehaviours() {
		return ((T (*)(RainCameraController*))(Il2CppBase() + 0x3DBA1A0))(this);
	}
	template <typename T = int32_t> T get_CurrentDrawCall() {
		return ((T (*)(RainCameraController*))(Il2CppBase() + 0x3DBA254))(this);
	}
	template <typename T = int32_t> T get_MaxDrawCall() {
		return ((T (*)(RainCameraController*))(Il2CppBase() + 0x3DBA394))(this);
	}
	template <typename T = bool> T get_IsPlaying() {
		return ((T (*)(RainCameraController*))(Il2CppBase() + 0x3DBA4D4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RainCameraController*))(Il2CppBase() + 0x3DBA648))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RainCameraController*))(Il2CppBase() + 0x3DBA828))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RainCameraController*))(Il2CppBase() + 0x3DBA984))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(RainCameraController*))(Il2CppBase() + 0x3DBB0BC))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(RainCameraController*))(Il2CppBase() + 0x3DBB400))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(RainCameraController*))(Il2CppBase() + 0x3DBB5E0))(this);
	}
	template <typename T = void> T StopImmidiate() {
		return ((T (*)(RainCameraController*))(Il2CppBase() + 0x3DBB7C0))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(RainCameraController*))(Il2CppBase() + 0x3DBB9A0))(this);
	}
	template <typename T = int32_t> static T get_CurrentDrawCallm__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3DBBD00))(0, x);
	}
	template <typename T = int32_t> static T get_MaxDrawCallm__1(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3DBBD38))(0, x);
	}
	template <typename T = bool> static T get_IsPlayingm__2(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3DBBD70))(0, x);
	}
	template <typename T = int32_t> static T Updatem__3(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3DBBDA8))(0, a, b);
	}

};

}
