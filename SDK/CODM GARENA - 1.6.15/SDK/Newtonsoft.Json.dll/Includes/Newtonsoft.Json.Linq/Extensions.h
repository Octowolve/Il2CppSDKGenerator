#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq {

class Extensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq", "Extensions"));
	}


	template <typename T = uintptr_t> static T Value(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4E5710C))(0, value);
	}
	template <typename T = uintptr_t> static T Value_1(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4E56EDC))(0, value);
	}
	template <typename T = uintptr_t> static T Convert(uintptr_t token) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E564BC))(0, token);
	}

};

}
