#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class HelpshiftInternalLogger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "HelpshiftInternalLogger"));
	}

	template <typename T = Il2CppString*> static T& TAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& hsInternalLogger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T d(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x474F7FC))(0, message);
	}
	template <typename T = void> static T e(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x47525D0))(0, message);
	}
	template <typename T = void> static T w(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4752790))(0, message);
	}
	template <typename T = void> static T f(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4752950))(0, message);
	}

};

}
