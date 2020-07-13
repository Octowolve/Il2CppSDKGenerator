#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WettingConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WettingConfig"));
	}

	template <typename T = float> T& overallWetting() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& porosity() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& puddleThreshold() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& specularThreshold() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& waterColor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& specularBoost() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplySettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(WettingConfig*))(Il2CppBase() + 0x4A4E0B0))(this);
	}
	template <typename T = void> T ApplySettings() {
		return ((T (*)(WettingConfig*))(Il2CppBase() + 0x4A4E154))(this);
	}

};

}
