#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WorldChatClickReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorldChatClickReport"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(WorldChatClickReport*))(Il2CppBase() + 0x495D1E0))(this);
	}
	template <typename T = Il2CppString*> T get_EventTime() {
		return ((T (*)(WorldChatClickReport*))(Il2CppBase() + 0x495D258))(this);
	}
	template <typename T = Il2CppString*> T get_GameAppId() {
		return ((T (*)(WorldChatClickReport*))(Il2CppBase() + 0x495D290))(this);
	}
	template <typename T = int32_t> T get_PlatID() {
		return ((T (*)(WorldChatClickReport*))(Il2CppBase() + 0x495D29C))(this);
	}
	template <typename T = Il2CppString*> T get_OpenId() {
		return ((T (*)(WorldChatClickReport*))(Il2CppBase() + 0x495D2A8))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(WorldChatClickReport*))(Il2CppBase() + 0x495D2B4))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(WorldChatClickReport*))(Il2CppBase() + 0x495D4B4))(this);
	}

};

}
