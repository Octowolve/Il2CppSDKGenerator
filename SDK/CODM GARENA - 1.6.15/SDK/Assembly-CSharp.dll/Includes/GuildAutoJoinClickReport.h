#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildAutoJoinClickReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildAutoJoinClickReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_ReportType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(GuildAutoJoinClickReport*))(Il2CppBase() + 0x46795D0))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T SetTLogArgs(int32_t report_type) {
		return ((T (*)(GuildAutoJoinClickReport*, int32_t))(Il2CppBase() + 0x4679648))(this, report_type);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(GuildAutoJoinClickReport*))(Il2CppBase() + 0x4679758))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(GuildAutoJoinClickReport*))(Il2CppBase() + 0x46799E0))(this);
	}

};

}
