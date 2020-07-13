#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PostProcessTransitionVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PostProcessTransitionVolume"));
	}

	template <typename T = bool> T& use2DTransition() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& transitionRadiusPercent() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& transitionCurve() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& profile() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& lerpedBCGS() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& lerpedACES() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& lerpedExposure() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& lerpedRadBlur() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& lerpedDistort() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& sphereCollider() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& lastProfile() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& lastInsideVolume() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePostProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestorePostProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePostProcessParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppVector3> T get_center() {
		return ((T (*)(PostProcessTransitionVolume*))(Il2CppBase() + 0x4800B78))(this);
	}
	template <typename T = float> T get_radius() {
		return ((T (*)(PostProcessTransitionVolume*))(Il2CppBase() + 0x4800C04))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PostProcessTransitionVolume*))(Il2CppBase() + 0x4800C7C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PostProcessTransitionVolume*))(Il2CppBase() + 0x4800E08))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(PostProcessTransitionVolume*))(Il2CppBase() + 0x4800F38))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PostProcessTransitionVolume*))(Il2CppBase() + 0x4801200))(this);
	}
	template <typename T = void> T UpdatePostProcess(Il2CppVector3 cameraPos, float distToCenter) {
		return ((T (*)(PostProcessTransitionVolume*, Il2CppVector3, float))(Il2CppBase() + 0x4801500))(this, cameraPos, distToCenter);
	}
	template <typename T = void> T RestorePostProcess(uintptr_t inst) {
		return ((T (*)(PostProcessTransitionVolume*, uintptr_t))(Il2CppBase() + 0x480107C))(this, inst);
	}
	template <typename T = void> T UpdatePostProcessParams(float percent) {
		return ((T (*)(PostProcessTransitionVolume*, float))(Il2CppBase() + 0x480170C))(this, percent);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(PostProcessTransitionVolume*))(Il2CppBase() + 0x4802430))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(PostProcessTransitionVolume*))(Il2CppBase() + 0x4802438))(this);
	}

};

}
