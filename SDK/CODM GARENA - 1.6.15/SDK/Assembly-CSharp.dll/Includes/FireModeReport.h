#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FireModeReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FireModeReport"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(FireModeReport*))(Il2CppBase() + 0x4676740))(this);
	}
	template <typename T = Il2CppString*> T get_EventTime() {
		return ((T (*)(FireModeReport*))(Il2CppBase() + 0x46767B8))(this);
	}
	template <typename T = Il2CppString*> T get_GameAppId() {
		return ((T (*)(FireModeReport*))(Il2CppBase() + 0x46767DC))(this);
	}
	template <typename T = int32_t> T get_PlatID() {
		return ((T (*)(FireModeReport*))(Il2CppBase() + 0x46767E0))(this);
	}
	template <typename T = Il2CppString*> T get_OpenId() {
		return ((T (*)(FireModeReport*))(Il2CppBase() + 0x46767E4))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(FireModeReport*))(Il2CppBase() + 0x46767E8))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(FireModeReport*))(Il2CppBase() + 0x4676A94))(this);
	}

};

}
