#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InviteNewbieOpenViewReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InviteNewbieOpenViewReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_ViewReportType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_ActivityID() {
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
		return ((T (*)(InviteNewbieOpenViewReport*))(Il2CppBase() + 0x4947DC8))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T SetTLogArgs(int32_t view_report_type) {
		return ((T (*)(InviteNewbieOpenViewReport*, int32_t))(Il2CppBase() + 0x4947E40))(this, view_report_type);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(InviteNewbieOpenViewReport*))(Il2CppBase() + 0x4947FB8))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(InviteNewbieOpenViewReport*))(Il2CppBase() + 0x4948280))(this);
	}

};

}
