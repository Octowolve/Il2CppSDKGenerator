#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InGameReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InGameReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(InGameReport*))(Il2CppBase() + 0x4679ABC))(this);
	}
	template <typename T = int32_t> T get_MapId() {
		return ((T (*)(InGameReport*))(Il2CppBase() + 0x4679B34))(this);
	}
	template <typename T = int32_t> T get_ModeId() {
		return ((T (*)(InGameReport*))(Il2CppBase() + 0x4679B38))(this);
	}
	template <typename T = int32_t> T get_FPS() {
		return ((T (*)(InGameReport*))(Il2CppBase() + 0x4679B3C))(this);
	}
	template <typename T = int32_t> T get_Ping() {
		return ((T (*)(InGameReport*))(Il2CppBase() + 0x4679B44))(this);
	}
	template <typename T = int32_t> T get_Network() {
		return ((T (*)(InGameReport*))(Il2CppBase() + 0x4679B48))(this);
	}
	template <typename T = int32_t> T get_UserSettingLevel() {
		return ((T (*)(InGameReport*))(Il2CppBase() + 0x4679B4C))(this);
	}
	template <typename T = int32_t> T get_ReConnectCount() {
		return ((T (*)(InGameReport*))(Il2CppBase() + 0x4679B50))(this);
	}
	template <typename T = int32_t> T get_FailReason() {
		return ((T (*)(InGameReport*))(Il2CppBase() + 0x4679B58))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(InGameReport*))(Il2CppBase() + 0x4679B5C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(InGameReport*))(Il2CppBase() + 0x4679F20))(this);
	}

};

}
