#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Globalization {

class CCFixed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Globalization", "CCFixed"));
	}


	template <typename T = int32_t> static T FromDateTime(uintptr_t time) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FD1350))(0, time);
	}
	template <typename T = uintptr_t> static T day_of_week(int32_t date) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3FD1398))(0, date);
	}

};

}
