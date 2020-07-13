#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class MathUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "MathUtils"));
	}


	template <typename T = int32_t> static T IntLength(uint64_t i) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x4DF1F14))(0, i);
	}
	template <typename T = char> static T IntToHex(int32_t n) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4DF2284))(0, n);
	}
	template <typename T = bool> static T ApproxEquals(double d1, double d2) {
		return ((T (*)(void *, double, double))(Il2CppBase() + 0x4DF22A0))(0, d1, d2);
	}

};

}
