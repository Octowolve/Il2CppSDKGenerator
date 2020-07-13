#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AtmosphericSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AtmosphericSetting"));
	}

	template <typename T = uintptr_t> static T& m_sInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_Mode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_AtmosphericScattering() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSettingsByMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateModeKeyword() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> static T get_sInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x44CF7A8))(0);
	}
	template <typename T = uintptr_t> T get_Mode() {
		return ((T (*)(AtmosphericSetting*))(Il2CppBase() + 0x44CF828))(this);
	}
	template <typename T = void> T set_Mode(uintptr_t value) {
		return ((T (*)(AtmosphericSetting*, uintptr_t))(Il2CppBase() + 0x44CF830))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AtmosphericSetting*))(Il2CppBase() + 0x44CFAA0))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AtmosphericSetting*))(Il2CppBase() + 0x44CFC6C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AtmosphericSetting*))(Il2CppBase() + 0x44CFF6C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AtmosphericSetting*))(Il2CppBase() + 0x44D0028))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AtmosphericSetting*))(Il2CppBase() + 0x44D015C))(this);
	}
	template <typename T = void> T UpdateSettingsByMode() {
		return ((T (*)(AtmosphericSetting*))(Il2CppBase() + 0x44CF838))(this);
	}
	template <typename T = void> static T UpdateModeKeyword(uintptr_t mode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44CFD88))(0, mode);
	}

};

}
