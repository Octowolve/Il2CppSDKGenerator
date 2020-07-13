#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class JsonTokenUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "JsonTokenUtils"));
	}


	template <typename T = bool> static T IsEndToken(uintptr_t token) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF1B78))(0, token);
	}
	template <typename T = bool> static T IsStartToken(uintptr_t token) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF1B8C))(0, token);
	}
	template <typename T = bool> static T IsPrimitiveToken(uintptr_t token) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF1BA0))(0, token);
	}

};

}
