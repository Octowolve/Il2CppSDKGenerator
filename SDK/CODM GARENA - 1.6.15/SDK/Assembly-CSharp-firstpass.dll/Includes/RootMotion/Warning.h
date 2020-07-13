#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion {

class Warning
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion", "Warning"));
	}

	template <typename T = bool> static T& logged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Log(Il2CppString* message, uintptr_t logger, bool logInEditMode) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x4F819F4))(0, message, logger, logInEditMode);
	}
	template <typename T = void> static T Log_1(Il2CppString* message, uintptr_t context, bool logInEditMode) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x4F81B74))(0, message, context, logInEditMode);
	}

};

}
