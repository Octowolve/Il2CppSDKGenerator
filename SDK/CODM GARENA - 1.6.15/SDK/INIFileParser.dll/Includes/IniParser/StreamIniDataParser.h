#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IniParser {

class StreamIniDataParser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("INIFileParser.dll", "IniParser", "StreamIniDataParser"));
	}

	template <typename T = uintptr_t> T& Parser() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_Parser() {
		return ((T (*)(StreamIniDataParser*))(Il2CppBase() + 0x5215A58))(this);
	}
	template <typename T = void> T set_Parser(uintptr_t value) {
		return ((T (*)(StreamIniDataParser*, uintptr_t))(Il2CppBase() + 0x5215A60))(this, value);
	}

};

}
