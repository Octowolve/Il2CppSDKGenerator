#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildMemberDataAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildMemberDataAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_GuildMemberDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetGuildMemberList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_GuildMemberDS() {
		return ((T (*)(GuildMemberDataAgent*))(Il2CppBase() + 0x474B0E0))(this);
	}
	template <typename T = bool> T OnGetGuildMemberList(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(GuildMemberDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x474B190))(this, message, errStr);
	}

};

}
