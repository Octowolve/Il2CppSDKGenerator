#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettingsReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettingsReport"));
	}

	template <typename T = uintptr_t> T& sensitiveInput() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRotateByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(SettingsReport*))(Il2CppBase() + 0x4955F48))(this);
	}
	template <typename T = Il2CppString*> T get_EventTime() {
		return ((T (*)(SettingsReport*))(Il2CppBase() + 0x4955FC0))(this);
	}
	template <typename T = Il2CppString*> T get_GameAppId() {
		return ((T (*)(SettingsReport*))(Il2CppBase() + 0x4955FF8))(this);
	}
	template <typename T = int32_t> T get_PlatID() {
		return ((T (*)(SettingsReport*))(Il2CppBase() + 0x4956004))(this);
	}
	template <typename T = Il2CppString*> T get_OpenId() {
		return ((T (*)(SettingsReport*))(Il2CppBase() + 0x4956010))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(SettingsReport*))(Il2CppBase() + 0x495601C))(this);
	}
	template <typename T = int32_t> T GetRotateByType(uintptr_t modeType, uintptr_t sensitiveType) {
		return ((T (*)(SettingsReport*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4956A7C))(this, modeType, sensitiveType);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(SettingsReport*))(Il2CppBase() + 0x4956B98))(this);
	}

};

}
