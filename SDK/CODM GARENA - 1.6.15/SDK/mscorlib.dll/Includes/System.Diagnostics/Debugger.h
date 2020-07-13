#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class Debugger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Diagnostics", "Debugger"));
	}

	template <typename T = Il2CppString*> static T& DefaultCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T IsLogging() {
		return ((T (*)(void *))(Il2CppBase() + 0x366EB6C))(0);
	}
	template <typename T = void> static T Log(int32_t level, Il2CppString* category, Il2CppString* message) {
		return ((T (*)(void *, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x366EB74))(0, level, category, message);
	}

};

}
