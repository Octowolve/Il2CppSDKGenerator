#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NewWorldChannelInviteTeamReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NewWorldChannelInviteTeamReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_InviteTeamClick() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_InviteTeamSend() {
		return *(T*)((uintptr_t)this + 0xC);
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
		return ((T (*)(NewWorldChannelInviteTeamReport*))(Il2CppBase() + 0x4948CEC))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T SetTLogArgs(bool btn_click, bool msg_send) {
		return ((T (*)(NewWorldChannelInviteTeamReport*, bool, bool))(Il2CppBase() + 0x4948D64))(this, btn_click, msg_send);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(NewWorldChannelInviteTeamReport*))(Il2CppBase() + 0x4948EAC))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(NewWorldChannelInviteTeamReport*))(Il2CppBase() + 0x49491A4))(this);
	}

};

}
