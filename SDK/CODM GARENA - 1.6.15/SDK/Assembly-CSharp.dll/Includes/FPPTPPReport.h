#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FPPTPPReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FPPTPPReport"));
	}

	template <typename T = bool> T& bFPP() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFPPTPP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_FPP() {
		return ((T (*)(FPPTPPReport*))(Il2CppBase() + 0x4676B40))(this);
	}
	template <typename T = void> T set_FPP(bool value) {
		return ((T (*)(FPPTPPReport*, bool))(Il2CppBase() + 0x4676B48))(this, value);
	}
	template <typename T = int32_t> T GetFPPTPP() {
		return ((T (*)(FPPTPPReport*))(Il2CppBase() + 0x4676B50))(this);
	}
	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(FPPTPPReport*))(Il2CppBase() + 0x4676BF0))(this);
	}
	template <typename T = Il2CppString*> T get_EventTime() {
		return ((T (*)(FPPTPPReport*))(Il2CppBase() + 0x4676C68))(this);
	}
	template <typename T = Il2CppString*> T get_GameAppId() {
		return ((T (*)(FPPTPPReport*))(Il2CppBase() + 0x4676C8C))(this);
	}
	template <typename T = int32_t> T get_PlatID() {
		return ((T (*)(FPPTPPReport*))(Il2CppBase() + 0x4676C90))(this);
	}
	template <typename T = Il2CppString*> T get_OpenId() {
		return ((T (*)(FPPTPPReport*))(Il2CppBase() + 0x4676C94))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(FPPTPPReport*))(Il2CppBase() + 0x4676C98))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(FPPTPPReport*))(Il2CppBase() + 0x4676E88))(this);
	}

};

}
