#pragma once
#include <Il2Cpp/Il2Cpp.h>

class URLInviteFriendChannelReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "URLInviteFriendChannelReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_ChannelType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_ReportType() {
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
		return ((T (*)(URLInviteFriendChannelReport*))(Il2CppBase() + 0x495C308))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T SetTLogArgs(int32_t ChannelType, int32_t ReportType) {
		return ((T (*)(URLInviteFriendChannelReport*, int32_t, int32_t))(Il2CppBase() + 0x495C380))(this, ChannelType, ReportType);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(URLInviteFriendChannelReport*))(Il2CppBase() + 0x495C4B4))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(URLInviteFriendChannelReport*))(Il2CppBase() + 0x495C77C))(this);
	}

};

}
