#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuickTeamQuitReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuickTeamQuitReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0x8);
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
		return ((T (*)(QuickTeamQuitReport*))(Il2CppBase() + 0x494EC2C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(QuickTeamQuitReport*))(Il2CppBase() + 0x494ECA4))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T SetTLogArgs(uintptr_t s) {
		return ((T (*)(QuickTeamQuitReport*, uintptr_t))(Il2CppBase() + 0x494EF0C))(this, s);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(QuickTeamQuitReport*))(Il2CppBase() + 0x494F088))(this);
	}

};

}
