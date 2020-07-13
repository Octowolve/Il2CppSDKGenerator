#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FogSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FogSetting"));
	}

	template <typename T = bool> T& UseFog() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& FogColor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& FogDensity() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Start() {
		return ((T (*)(FogSetting*))(Il2CppBase() + 0x3CCD72C))(this);
	}

};

}
