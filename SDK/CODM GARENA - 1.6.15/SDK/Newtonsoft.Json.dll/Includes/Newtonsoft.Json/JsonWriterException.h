#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class JsonWriterException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "JsonWriterException"));
	}

	template <typename T = Il2CppString*> T& Path() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T set_Path(Il2CppString* value) {
		return ((T (*)(JsonWriterException*, Il2CppString*))(Il2CppBase() + 0x40C0FC0))(this, value);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t writer, Il2CppString* message, uintptr_t ex) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x408BB34))(0, writer, message, ex);
	}
	template <typename T = uintptr_t> static T Create_1(Il2CppString* path, Il2CppString* message, uintptr_t ex) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x40C1010))(0, path, message, ex);
	}

};

}
