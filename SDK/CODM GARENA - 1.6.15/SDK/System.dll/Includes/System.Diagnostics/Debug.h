#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class Debug
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Diagnostics", "Debug"));
	}


	template <typename T = void> static T Assert(bool condition) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x42AB3A8))(0, condition);
	}
	template <typename T = void> static T WriteLine(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42AB3AC))(0, message);
	}

};

}
