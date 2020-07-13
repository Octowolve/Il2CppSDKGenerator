#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShadowPolicy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShadowPolicy"));
	}

	template <typename T = uintptr_t> T& mTargetCamera() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& UpdateDist() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& UpdateDistForBack() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& UpdateAngle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& UpdateIntv() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& AlwaysUpdate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& mInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mTargetTrans() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& mLastPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& mLastForward() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& mLastFov() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& mLastIntv() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShadow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLastState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdateShadow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x38DABAC))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ShadowPolicy*))(Il2CppBase() + 0x38DAC2C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ShadowPolicy*))(Il2CppBase() + 0x38DACCC))(this);
	}
	template <typename T = void> T Init(uintptr_t cam) {
		return ((T (*)(ShadowPolicy*, uintptr_t))(Il2CppBase() + 0x38DAD70))(this, cam);
	}
	template <typename T = void> T UpdateShadow() {
		return ((T (*)(ShadowPolicy*))(Il2CppBase() + 0x38DAEA8))(this);
	}
	template <typename T = void> T UpdateLastState(float fov, Il2CppVector3 pos, Il2CppVector3 forward) {
		return ((T (*)(ShadowPolicy*, float, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x38DAF68))(this, fov, pos, forward);
	}
	template <typename T = void> static T ForceUpdateShadow() {
		return ((T (*)(void *))(Il2CppBase() + 0x38DB070))(0);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ShadowPolicy*))(Il2CppBase() + 0x38DB1C8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ShadowPolicy*))(Il2CppBase() + 0x38DB2DC))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(ShadowPolicy*))(Il2CppBase() + 0x38DB3F0))(this);
	}

};

}
