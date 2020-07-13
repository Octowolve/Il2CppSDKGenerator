#pragma once
#include <Il2Cpp/Il2Cpp.h>

class XmlTokenInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "XmlTokenInfo"));
	}

	template <typename T = Il2CppString*> T& valueCache() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Reader() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LocalName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Prefix() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& NamespaceURI() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsEmptyElement() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = char> T& QuoteChar() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = int32_t> T& LineNumber() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& LinePosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ValueBufferStart() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& ValueBufferEnd() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& NodeType() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlTokenInfo*))(Il2CppBase() + 0x2A9A6D8))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(XmlTokenInfo*, Il2CppString*))(Il2CppBase() + 0x2A9A768))(this, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(XmlTokenInfo*))(Il2CppBase() + 0x2A9A5F4))(this);
	}

};

}
