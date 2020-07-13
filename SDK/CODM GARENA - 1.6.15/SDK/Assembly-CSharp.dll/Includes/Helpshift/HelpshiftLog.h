#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class HelpshiftLog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "HelpshiftLog"));
	}


	template <typename T = int32_t> static T v(Il2CppString* tag, Il2CppString* log) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4753054))(0, tag, log);
	}
	template <typename T = int32_t> static T d(Il2CppString* tag, Il2CppString* log) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x47530FC))(0, tag, log);
	}
	template <typename T = int32_t> static T i(Il2CppString* tag, Il2CppString* log) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x47531A4))(0, tag, log);
	}
	template <typename T = int32_t> static T w(Il2CppString* tag, Il2CppString* log) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x475324C))(0, tag, log);
	}
	template <typename T = int32_t> static T e(Il2CppString* tag, Il2CppString* log) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x47532F4))(0, tag, log);
	}

};

}
