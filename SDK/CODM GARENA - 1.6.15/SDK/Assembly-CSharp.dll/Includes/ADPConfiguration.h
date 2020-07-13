#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ADPConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ADPConfiguration"));
	}

	template <typename T = Il2CppString*> static T& ADPConfigPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& m_ADPConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& m_FoliageSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& m_ShadowQualitySettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& m_FrameRateSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& m_LodBiasSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& m_ScreenSizeSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& m_AnimationUpdateSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& m_ChangeFixUpdateSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDefaultValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveConfiguration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadConfiguration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DumpSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	template <typename T = void> static T SetDefaultValues() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A192F4))(0);
	}
	template <typename T = void> static T SaveConfiguration() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A195D0))(0);
	}
	template <typename T = void> static T LoadConfiguration() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A19690))(0);
	}
	template <typename T = void> static T DumpSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A19C58))(0);
	}

};

}
