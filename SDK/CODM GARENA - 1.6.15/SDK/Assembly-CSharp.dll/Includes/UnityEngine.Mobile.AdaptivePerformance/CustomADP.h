#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class CustomADP
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "CustomADP"));
	}

	template <typename T = int32_t> static T& m_ShadowDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_FoliageLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& m_AnimateUpdateRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& m_AnimateHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& m_AnimateIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& m_FixedDeltaTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = float> static T& m_OldTemp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = bool> static T& m_FpsChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = float> static T& m_LodBias() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = float> static T& m_TargetFrameRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = float> static T& m_ScreenSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = bool> static T& m_Activation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeFeatureValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RaiseScreenResolution() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LowerScreenResolution() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeFrameRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JudgeTargetFPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeFrameRate39() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeFrameRate41() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KeepFrameRate37() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LowerCODFeatures() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RaiseCODFeatures() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = void> static T InitializeFeatureValues() {
		return ((T (*)(void *))(Il2CppBase() + 0x420CDFC))(0);
	}
	template <typename T = void> static T RaiseScreenResolution(float time, float trend) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4215944))(0, time, trend);
	}
	template <typename T = void> static T LowerScreenResolution(float time, float trend) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4215CB4))(0, time, trend);
	}
	template <typename T = void> static T ChangeFrameRate(float time, float currentTemp) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4216024))(0, time, currentTemp);
	}
	template <typename T = float> static T JudgeTargetFPS() {
		return ((T (*)(void *))(Il2CppBase() + 0x4216680))(0);
	}
	template <typename T = void> static T ChangeFrameRate39(float time, float ratio) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4216860))(0, time, ratio);
	}
	template <typename T = void> static T ChangeFrameRate41(float time, float ratio) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4214B2C))(0, time, ratio);
	}
	template <typename T = void> static T KeepFrameRate37() {
		return ((T (*)(void *))(Il2CppBase() + 0x4211450))(0);
	}
	template <typename T = void> static T LowerCODFeatures(float time) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4211C10))(0, time);
	}
	template <typename T = void> static T RaiseCODFeatures(float time) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4213AC4))(0, time);
	}

};

}
