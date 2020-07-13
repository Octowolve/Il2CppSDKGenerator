#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BCGSColorGradingSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BCGSColorGradingSetting"));
	}

	template <typename T = uintptr_t> T& masterKey() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& masterTemperature() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& darkKey() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& middleKey() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& brightKey() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstrainEffectArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CaculateRuntimeKeyLerpValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CaculateRuntimeKeyLerpValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WhiteBalanceToColorTemperature() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyMasterOnRuntimeData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateShaderUniformData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T ConstrainEffectArea() {
		return ((T (*)(BCGSColorGradingSetting*))(Il2CppBase() + 0x3A41134))(this);
	}
	template <typename T = void> T CaculateRuntimeKeyLerpValue(uintptr_t* a, uintptr_t* b, uintptr_t* c, uintptr_t* d) {
		return ((T (*)(BCGSColorGradingSetting*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3A41248))(this, a, b, c, d);
	}
	template <typename T = uintptr_t> T CaculateRuntimeKeyLerpValue_1() {
		return ((T (*)(BCGSColorGradingSetting*))(Il2CppBase() + 0x3A41658))(this);
	}
	template <typename T = float> static T WhiteBalanceToColorTemperature(float temperature, float balancePoint, float maxKelvin) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x3A41760))(0, temperature, balancePoint, maxKelvin);
	}
	template <typename T = uintptr_t> T ApplyMasterOnRuntimeData(uintptr_t runtimeData) {
		return ((T (*)(BCGSColorGradingSetting*, uintptr_t))(Il2CppBase() + 0x3A41864))(this, runtimeData);
	}
	template <typename T = void> T CalculateShaderUniformData(uintptr_t* key0, uintptr_t* key1Delta, uintptr_t* key2Delta, uintptr_t* keyLerp) {
		return ((T (*)(BCGSColorGradingSetting*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3A41AB0))(this, key0, key1Delta, key2Delta, keyLerp);
	}

};

}
