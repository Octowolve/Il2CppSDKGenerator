#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConsoleLogger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConsoleLogger"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Log() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Log(uintptr_t level, Il2CppString* message) {
		return ((T (*)(ConsoleLogger*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x47658CC))(this, level, message);
	}

};

}
