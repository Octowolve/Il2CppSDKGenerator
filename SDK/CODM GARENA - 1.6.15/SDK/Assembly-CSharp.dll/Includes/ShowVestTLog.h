#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowVestTLog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowVestTLog"));
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
		return ((T (*)(ShowVestTLog*))(Il2CppBase() + 0x495A7EC))(this);
	}
	template <typename T = Il2CppString*> T get_EventTime() {
		return ((T (*)(ShowVestTLog*))(Il2CppBase() + 0x495A864))(this);
	}
	template <typename T = Il2CppString*> T get_GameAppId() {
		return ((T (*)(ShowVestTLog*))(Il2CppBase() + 0x495A89C))(this);
	}
	template <typename T = int32_t> T get_PlatID() {
		return ((T (*)(ShowVestTLog*))(Il2CppBase() + 0x495A8A8))(this);
	}
	template <typename T = Il2CppString*> T get_OpenId() {
		return ((T (*)(ShowVestTLog*))(Il2CppBase() + 0x495A8B4))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(bool showVest) {
		return ((T (*)(ShowVestTLog*, bool))(Il2CppBase() + 0x495A8C0))(this, showVest);
	}

};

}
