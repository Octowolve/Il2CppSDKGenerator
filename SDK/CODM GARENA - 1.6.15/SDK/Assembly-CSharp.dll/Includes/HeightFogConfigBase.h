#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HeightFogConfigBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HeightFogConfigBase"));
	}

	template <typename T = bool> T& m_DebugShowFogDensity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& FogDensity() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& WorldScale() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& FogHeightFalloff() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MaxFogOpacity() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& fogmulper() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_ExponentialFogParameters() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_ExponentialFogParameters3() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_ExponentialFogColorParameter() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& m_ModeKeyword() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyParameters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyDefaultParameters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateParameters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T set_DebugShowFogDensity(bool value) {
		return ((T (*)(HeightFogConfigBase*, bool))(Il2CppBase() + 0x474E638))(this, value);
	}
	template <typename T = bool> T get_DebugShowFogDensity() {
		return ((T (*)(HeightFogConfigBase*))(Il2CppBase() + 0x474E640))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(HeightFogConfigBase*))(Il2CppBase() + 0x474E648))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(HeightFogConfigBase*))(Il2CppBase() + 0x474E6FC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(HeightFogConfigBase*))(Il2CppBase() + 0x474E7AC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(HeightFogConfigBase*))(Il2CppBase() + 0x474E408))(this);
	}
	template <typename T = void> T ApplyParameters() {
		return ((T (*)(HeightFogConfigBase*))(Il2CppBase() + 0x474E85C))(this);
	}
	template <typename T = void> T ApplyDefaultParameters() {
		return ((T (*)(HeightFogConfigBase*))(Il2CppBase() + 0x474EA34))(this);
	}
	template <typename T = void> T ValidateParameters() {
		return ((T (*)(HeightFogConfigBase*))(Il2CppBase() + 0x474E4A4))(this);
	}
	template <typename T = void> T UpdateParameterVariables() {
		return ((T (*)(HeightFogConfigBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetModeKeyword() {
		return ((T (*)(HeightFogConfigBase*))(Il2CppBase() + 0x0))(this);
	}

};

}
