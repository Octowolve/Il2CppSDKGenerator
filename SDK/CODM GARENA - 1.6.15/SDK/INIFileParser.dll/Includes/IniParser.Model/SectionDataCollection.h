#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IniParser.Model {

class SectionDataCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("INIFileParser.dll", "IniParser.Model", "SectionDataCollection"));
	}

	template <typename T = void*> T& _searchComparer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _sectionData() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(SectionDataCollection*))(Il2CppBase() + 0x52136DC))(this);
	}
	template <typename T = uintptr_t> T get_Item(Il2CppString* sectionName) {
		return ((T (*)(SectionDataCollection*, Il2CppString*))(Il2CppBase() + 0x5213774))(this, sectionName);
	}
	template <typename T = bool> T AddSection(Il2CppString* keyName) {
		return ((T (*)(SectionDataCollection*, Il2CppString*))(Il2CppBase() + 0x5213860))(this, keyName);
	}
	template <typename T = bool> T ContainsSection(Il2CppString* keyName) {
		return ((T (*)(SectionDataCollection*, Il2CppString*))(Il2CppBase() + 0x521395C))(this, keyName);
	}
	template <typename T = uintptr_t> T GetSectionData(Il2CppString* sectionName) {
		return ((T (*)(SectionDataCollection*, Il2CppString*))(Il2CppBase() + 0x52139FC))(this, sectionName);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(SectionDataCollection*))(Il2CppBase() + 0x52108DC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(SectionDataCollection*))(Il2CppBase() + 0x5213AFC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(SectionDataCollection*))(Il2CppBase() + 0x5211228))(this);
	}

};

}
