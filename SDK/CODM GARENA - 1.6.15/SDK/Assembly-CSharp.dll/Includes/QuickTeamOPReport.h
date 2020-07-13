#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuickTeamOPReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuickTeamOPReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& windowShow() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& chatSHow() {
		return *(T*)((uintptr_t)this + 0x9);
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
		return ((T (*)(QuickTeamOPReport*))(Il2CppBase() + 0x494E6DC))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(QuickTeamOPReport*))(Il2CppBase() + 0x494E754))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T SetTLogArgs(bool _windowShow, bool _chatShow) {
		return ((T (*)(QuickTeamOPReport*, bool, bool))(Il2CppBase() + 0x494E9C0))(this, _windowShow, _chatShow);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(QuickTeamOPReport*))(Il2CppBase() + 0x494EB58))(this);
	}

};

}
