#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HeightFogConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HeightFogConfig"));
	}

	template <typename T = float> T& StartDistance() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& FogDensity_Multiplier() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& FogHeight() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateParameters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateParameterVariables() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Update() {
		return ((T (*)(HeightFogConfig*))(Il2CppBase() + 0x474E0B0))(this);
	}
	template <typename T = void> T ValidateParameters() {
		return ((T (*)(HeightFogConfig*))(Il2CppBase() + 0x474E148))(this);
	}
	template <typename T = void> T UpdateParameterVariables() {
		return ((T (*)(HeightFogConfig*))(Il2CppBase() + 0x474E2AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(HeightFogConfig*))(Il2CppBase() + 0x474E404))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ValidateParameters() {
		return ((T (*)(HeightFogConfig*))(Il2CppBase() + 0x474E4A0))(this);
	}

};

}
