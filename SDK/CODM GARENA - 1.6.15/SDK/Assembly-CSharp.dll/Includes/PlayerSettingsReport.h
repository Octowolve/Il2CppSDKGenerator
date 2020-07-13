#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerSettingsReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerSettingsReport"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(PlayerSettingsReport*))(Il2CppBase() + 0x494A888))(this);
	}
	template <typename T = Il2CppString*> T get_EventTime() {
		return ((T (*)(PlayerSettingsReport*))(Il2CppBase() + 0x494A900))(this);
	}
	template <typename T = Il2CppString*> T get_GameAppId() {
		return ((T (*)(PlayerSettingsReport*))(Il2CppBase() + 0x494A938))(this);
	}
	template <typename T = int32_t> T get_PlatID() {
		return ((T (*)(PlayerSettingsReport*))(Il2CppBase() + 0x494A944))(this);
	}
	template <typename T = Il2CppString*> T get_OpenId() {
		return ((T (*)(PlayerSettingsReport*))(Il2CppBase() + 0x494A950))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(PlayerSettingsReport*))(Il2CppBase() + 0x494A95C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(PlayerSettingsReport*))(Il2CppBase() + 0x494B918))(this);
	}

};

}
