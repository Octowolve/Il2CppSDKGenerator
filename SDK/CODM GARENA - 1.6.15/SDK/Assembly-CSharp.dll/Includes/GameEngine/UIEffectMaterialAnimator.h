#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class UIEffectMaterialAnimator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "UIEffectMaterialAnimator"));
	}

	template <typename T = uintptr_t> T& sprite() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& SpeedCurve() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& Loop() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& Pingpong() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = bool> T& PlayOnStart() {
		return *(T*)((uintptr_t)this + 0x42);
	}
	template <typename T = float> T& Paramenter1FromValue() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& Paramenter1ToValue() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& Paramenter1Name() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& Paramenter2FromValue() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& Paramenter2ToValue() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& Paramenter2Name() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_IsPlaying() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_TimeSincePlay() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& TempAlpha() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TempParamenter1() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TempParamenter2() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMaterialParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SmoothStopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSmoothStopCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIEffectMaterialAnimator*))(Il2CppBase() + 0x2E74FB0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIEffectMaterialAnimator*))(Il2CppBase() + 0x2E751E0))(this);
	}
	template <typename T = void> T UpdateMaterialParameter(float deltaTime) {
		return ((T (*)(UIEffectMaterialAnimator*, float))(Il2CppBase() + 0x2E75438))(this, deltaTime);
	}
	template <typename T = void> T PlayEffect() {
		return ((T (*)(UIEffectMaterialAnimator*))(Il2CppBase() + 0x2E75828))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(UIEffectMaterialAnimator*))(Il2CppBase() + 0x2E758E0))(this);
	}
	template <typename T = void> T StopEffect() {
		return ((T (*)(UIEffectMaterialAnimator*))(Il2CppBase() + 0x2E75AB8))(this);
	}
	template <typename T = void> T SmoothStopEffect() {
		return ((T (*)(UIEffectMaterialAnimator*))(Il2CppBase() + 0x2E75B6C))(this);
	}
	template <typename T = void> T OnSmoothStopCompleted() {
		return ((T (*)(UIEffectMaterialAnimator*))(Il2CppBase() + 0x2E75CC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayEffect() {
		return ((T (*)(UIEffectMaterialAnimator*))(Il2CppBase() + 0x2E75D78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEffect() {
		return ((T (*)(UIEffectMaterialAnimator*))(Il2CppBase() + 0x2E75D80))(this);
	}

};

}
