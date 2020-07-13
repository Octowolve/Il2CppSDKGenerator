#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IniParser.Model {

class SectionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("INIFileParser.dll", "IniParser.Model", "SectionData"));
	}

	template <typename T = void*> T& _searchComparer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _leadingComments() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _trailingComments() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _keyDataCollection() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& _sectionName() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_SectionName() {
		return ((T (*)(SectionData*))(Il2CppBase() + 0x5210F18))(this);
	}
	template <typename T = void> T set_SectionName(Il2CppString* value) {
		return ((T (*)(SectionData*, Il2CppString*))(Il2CppBase() + 0x5212FC8))(this, value);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_LeadingComments() {
		return ((T (*)(SectionData*))(Il2CppBase() + 0x5210CA8))(this);
	}
	template <typename T = void> T set_LeadingComments(Il2CppList<Il2CppString*>* value) {
		return ((T (*)(SectionData*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x52131DC))(this, value);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_TrailingComments() {
		return ((T (*)(SectionData*))(Il2CppBase() + 0x5210F28))(this);
	}
	template <typename T = uintptr_t> T get_Keys() {
		return ((T (*)(SectionData*))(Il2CppBase() + 0x5210F20))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(SectionData*))(Il2CppBase() + 0x5213284))(this);
	}

};

}
