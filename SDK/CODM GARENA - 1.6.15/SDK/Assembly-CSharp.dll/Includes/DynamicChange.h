#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DynamicChange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DynamicChange"));
	}

	template <typename T = int32_t> static T& orig_height() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& orig_width() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAnimLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeFixUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAnimUpdateRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBRMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentTargetFPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeShadowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShaderLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFoliageLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetQualityLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFrameRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLodBias() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> static T ChangeAnimLOD(int32_t index, float height, float updateTime) {
		return ((T (*)(void *, int32_t, float, float))(Il2CppBase() + 0x4181968))(0, index, height, updateTime);
	}
	template <typename T = void> static T ChangeFixUpdate(float fixedDeltaTime) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4181E24))(0, fixedDeltaTime);
	}
	template <typename T = void> static T ChangeAnimUpdateRate(float updateTime) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4181F00))(0, updateTime);
	}
	template <typename T = bool> static T IsBRMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x4182384))(0);
	}
	template <typename T = int32_t> static T GetCurrentTargetFPS() {
		return ((T (*)(void *))(Il2CppBase() + 0x41824B0))(0);
	}
	template <typename T = void> static T ChangeScreen(float scale) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4182610))(0, scale);
	}
	template <typename T = void> static T ChangeShadowQuality(int32_t shadowDistance, int32_t resBias, uintptr_t projectionMode) {
		return ((T (*)(void *, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x41827DC))(0, shadowDistance, resBias, projectionMode);
	}
	template <typename T = void> static T SetShaderLOD(int32_t lod) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x41828E0))(0, lod);
	}
	template <typename T = void> static T SetFoliageLOD(float lod) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x41829BC))(0, lod);
	}
	template <typename T = void> static T SetQualityLevel(int32_t level) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4182AE0))(0, level);
	}
	template <typename T = void> static T SetFrameRate(int32_t framerate) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4182BBC))(0, framerate);
	}
	template <typename T = void> static T SetLodBias(float lodbias) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4182CCC))(0, lodbias);
	}

};

}
