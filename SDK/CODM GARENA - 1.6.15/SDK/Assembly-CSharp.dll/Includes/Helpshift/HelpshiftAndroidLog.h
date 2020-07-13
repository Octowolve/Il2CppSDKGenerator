#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class HelpshiftAndroidLog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "HelpshiftAndroidLog"));
	}

	template <typename T = uintptr_t> static T& logger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> static T v(Il2CppString* tag, Il2CppString* log) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4751C54))(0, tag, log);
	}
	template <typename T = int32_t> static T d(Il2CppString* tag, Il2CppString* log) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4751E14))(0, tag, log);
	}
	template <typename T = int32_t> static T i(Il2CppString* tag, Il2CppString* log) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4751FD4))(0, tag, log);
	}
	template <typename T = int32_t> static T w(Il2CppString* tag, Il2CppString* log) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4752194))(0, tag, log);
	}
	template <typename T = int32_t> static T e(Il2CppString* tag, Il2CppString* log) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4752354))(0, tag, log);
	}

};

}
