#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplicationNormalExitReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplicationNormalExitReport"));
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
		return ((T (*)(ApplicationNormalExitReport*))(Il2CppBase() + 0x4672868))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(bool bNormal) {
		return ((T (*)(ApplicationNormalExitReport*, bool))(Il2CppBase() + 0x46728E0))(this, bNormal);
	}

};

}
