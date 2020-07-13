#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReportMrpcsFlow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReportMrpcsFlow"));
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

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(ReportMrpcsFlow*))(Il2CppBase() + 0x49504C4))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(uint32_t flowID, Il2CppString* mrpcsString) {
		return ((T (*)(ReportMrpcsFlow*, uint32_t, Il2CppString*))(Il2CppBase() + 0x495053C))(this, flowID, mrpcsString);
	}

};

}
