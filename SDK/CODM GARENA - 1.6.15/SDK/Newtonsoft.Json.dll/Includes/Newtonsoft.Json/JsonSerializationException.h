#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class JsonSerializationException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "JsonSerializationException"));
	}


	template <typename T = uintptr_t> static T Create(uintptr_t reader, Il2CppString* message) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x408E73C))(0, reader, message);
	}
	template <typename T = uintptr_t> static T Create_1(uintptr_t reader, Il2CppString* message, uintptr_t ex) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x40933D8))(0, reader, message, ex);
	}
	template <typename T = uintptr_t> static T Create_2(uintptr_t lineInfo, Il2CppString* path, Il2CppString* message, uintptr_t ex) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x40ABDA0))(0, lineInfo, path, message, ex);
	}

};

}
