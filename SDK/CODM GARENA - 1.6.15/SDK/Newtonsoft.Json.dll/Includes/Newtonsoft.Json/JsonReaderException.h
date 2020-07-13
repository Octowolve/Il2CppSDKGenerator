#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class JsonReaderException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "JsonReaderException"));
	}

	template <typename T = int32_t> T& LineNumber() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& LinePosition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& Path() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T set_LineNumber(int32_t value) {
		return ((T (*)(JsonReaderException*, int32_t))(Il2CppBase() + 0x40AB978))(this, value);
	}
	template <typename T = void> T set_LinePosition(int32_t value) {
		return ((T (*)(JsonReaderException*, int32_t))(Il2CppBase() + 0x40AB980))(this, value);
	}
	template <typename T = void> T set_Path(Il2CppString* value) {
		return ((T (*)(JsonReaderException*, Il2CppString*))(Il2CppBase() + 0x40AB988))(this, value);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t reader, Il2CppString* message) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x408A07C))(0, reader, message);
	}
	template <typename T = uintptr_t> static T Create_1(uintptr_t reader, Il2CppString* message, uintptr_t ex) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x40AB9E8))(0, reader, message, ex);
	}
	template <typename T = uintptr_t> static T Create_2(uintptr_t lineInfo, Il2CppString* path, Il2CppString* message, uintptr_t ex) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x40ABABC))(0, lineInfo, path, message, ex);
	}

};

}
