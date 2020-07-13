#pragma once
#include <Il2Cpp/Il2Cpp.h>

class XmlParserInputSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "XmlParserInputSource"));
	}

	template <typename T = Il2CppString*> T& BaseURI() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& reader() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isPE() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& line() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& column() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_LineNumber() {
		return ((T (*)(XmlParserInputSource*))(Il2CppBase() + 0x37E4A10))(this);
	}
	template <typename T = int32_t> T get_LinePosition() {
		return ((T (*)(XmlParserInputSource*))(Il2CppBase() + 0x37E4A3C))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(XmlParserInputSource*))(Il2CppBase() + 0x37E459C))(this);
	}
	template <typename T = int32_t> T Read() {
		return ((T (*)(XmlParserInputSource*))(Il2CppBase() + 0x37E482C))(this);
	}

};

}
