#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettingsSensitivityReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettingsSensitivityReport"));
	}

	template <typename T = float> T& SensitiveMinValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& SensitiveMaxValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRotateSensitive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TranslateFromRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(SettingsSensitivityReport*))(Il2CppBase() + 0x4957B34))(this);
	}
	template <typename T = Il2CppString*> T get_EventTime() {
		return ((T (*)(SettingsSensitivityReport*))(Il2CppBase() + 0x4957BAC))(this);
	}
	template <typename T = Il2CppString*> T get_GameAppId() {
		return ((T (*)(SettingsSensitivityReport*))(Il2CppBase() + 0x4957BE4))(this);
	}
	template <typename T = int32_t> T get_PlatID() {
		return ((T (*)(SettingsSensitivityReport*))(Il2CppBase() + 0x4957BF0))(this);
	}
	template <typename T = Il2CppString*> T get_OpenId() {
		return ((T (*)(SettingsSensitivityReport*))(Il2CppBase() + 0x4957BFC))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(SettingsSensitivityReport*))(Il2CppBase() + 0x4957C08))(this);
	}
	template <typename T = int32_t> T GetRotateSensitive(uintptr_t modeType, uintptr_t sensitiveType) {
		return ((T (*)(SettingsSensitivityReport*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4958DB4))(this, modeType, sensitiveType);
	}
	template <typename T = float> T TranslateFromRange(float value) {
		return ((T (*)(SettingsSensitivityReport*, float))(Il2CppBase() + 0x4958CF4))(this, value);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(SettingsSensitivityReport*))(Il2CppBase() + 0x4958FE4))(this);
	}

};

}
