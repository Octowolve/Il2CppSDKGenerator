#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OutGameReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OutGameReport"));
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
		return ((T (*)(OutGameReport*))(Il2CppBase() + 0x4949690))(this);
	}
	template <typename T = int32_t> T get_Network() {
		return ((T (*)(OutGameReport*))(Il2CppBase() + 0x4949708))(this);
	}
	template <typename T = int32_t> T get_FailReason() {
		return ((T (*)(OutGameReport*))(Il2CppBase() + 0x4949714))(this);
	}
	template <typename T = Il2CppString*> T get_WindowName() {
		return ((T (*)(OutGameReport*))(Il2CppBase() + 0x4949720))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(OutGameReport*))(Il2CppBase() + 0x494972C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(OutGameReport*))(Il2CppBase() + 0x4949A6C))(this);
	}

};

}
