#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IniParser.Model {

class IniData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("INIFileParser.dll", "IniParser.Model", "IniData"));
	}

	template <typename T = uintptr_t> T& _sections() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Global() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = char> T& SectionKeySeparator() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _configuration() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_Configuration() {
		return ((T (*)(IniData*))(Il2CppBase() + 0x5211508))(this);
	}
	template <typename T = void> T set_Configuration(uintptr_t value) {
		return ((T (*)(IniData*, uintptr_t))(Il2CppBase() + 0x52115A4))(this, value);
	}
	template <typename T = uintptr_t> T get_Global() {
		return ((T (*)(IniData*))(Il2CppBase() + 0x52102F0))(this);
	}
	template <typename T = void> T set_Global(uintptr_t value) {
		return ((T (*)(IniData*, uintptr_t))(Il2CppBase() + 0x5211388))(this, value);
	}
	template <typename T = uintptr_t> T get_Sections() {
		return ((T (*)(IniData*))(Il2CppBase() + 0x52108D4))(this);
	}
	template <typename T = void> T set_SectionKeySeparator(char value) {
		return ((T (*)(IniData*, char))(Il2CppBase() + 0x5211390))(this, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(IniData*))(Il2CppBase() + 0x52115D4))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(uintptr_t formatter) {
		return ((T (*)(IniData*, uintptr_t))(Il2CppBase() + 0x5211684))(this, formatter);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(IniData*))(Il2CppBase() + 0x521177C))(this);
	}

};

}
