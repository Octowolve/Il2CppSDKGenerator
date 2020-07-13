#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettingsReportBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettingsReport_Base"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReportList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(SettingsReportBase*))(Il2CppBase() + 0x4956C3C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(SettingsReportBase*))(Il2CppBase() + 0x4956CB4))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetReportList(Il2CppString* hudString) {
		return ((T (*)(SettingsReportBase*, Il2CppString*))(Il2CppBase() + 0x4956EB4))(this, hudString);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(SettingsReportBase*))(Il2CppBase() + 0x4956FB0))(this);
	}

};

}
