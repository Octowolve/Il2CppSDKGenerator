#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IniParser.Exceptions {

class ParsingException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("INIFileParser.dll", "IniParser.Exceptions", "ParsingException"));
	}

	template <typename T = uintptr_t> T& LibVersion() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& LineNumber() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& LineValue() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T set_LibVersion(uintptr_t value) {
		return ((T (*)(ParsingException*, uintptr_t))(Il2CppBase() + 0x520EC68))(this, value);
	}
	template <typename T = void> T set_LineNumber(int32_t value) {
		return ((T (*)(ParsingException*, int32_t))(Il2CppBase() + 0x520EC70))(this, value);
	}
	template <typename T = void> T set_LineValue(Il2CppString* value) {
		return ((T (*)(ParsingException*, Il2CppString*))(Il2CppBase() + 0x520EC78))(this, value);
	}

};

}
