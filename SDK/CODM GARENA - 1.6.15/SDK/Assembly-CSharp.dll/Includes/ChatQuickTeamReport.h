#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatQuickTeamReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatQuickTeamReport"));
	}

	template <typename T = int32_t> T& Invite() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& QuickTeam() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetQuickTeamInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(ChatQuickTeamReport*))(Il2CppBase() + 0x4673A1C))(this);
	}
	template <typename T = void> T SetQuickTeamInfo(int32_t _Invite, int32_t _QuickTeam) {
		return ((T (*)(ChatQuickTeamReport*, int32_t, int32_t))(Il2CppBase() + 0x4673A94))(this, _Invite, _QuickTeam);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(ChatQuickTeamReport*))(Il2CppBase() + 0x4673B58))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(ChatQuickTeamReport*))(Il2CppBase() + 0x4673D48))(this);
	}

};

}
