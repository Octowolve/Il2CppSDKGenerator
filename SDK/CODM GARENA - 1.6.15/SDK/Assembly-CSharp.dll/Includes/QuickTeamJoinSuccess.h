#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuickTeamJoinSuccess
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuickTeamJoinSuccess"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(QuickTeamJoinSuccess*))(Il2CppBase() + 0x494E208))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(QuickTeamJoinSuccess*))(Il2CppBase() + 0x494E280))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T SetTLogArgs() {
		return ((T (*)(QuickTeamJoinSuccess*))(Il2CppBase() + 0x494E498))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(QuickTeamJoinSuccess*))(Il2CppBase() + 0x494E608))(this);
	}

};

}
