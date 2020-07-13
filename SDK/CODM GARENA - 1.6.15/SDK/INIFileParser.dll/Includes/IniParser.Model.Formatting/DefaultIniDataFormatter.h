#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IniParser.Model.Formatting {

class DefaultIniDataFormatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("INIFileParser.dll", "IniParser.Model.Formatting", "DefaultIniDataFormatter"));
	}

	template <typename T = uintptr_t> T& _configuration() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T IniDataToString(uintptr_t iniData) {
		return ((T (*)(DefaultIniDataFormatter*, uintptr_t))(Il2CppBase() + 0x520FFE8))(this, iniData);
	}
	template <typename T = uintptr_t> T get_Configuration() {
		return ((T (*)(DefaultIniDataFormatter*))(Il2CppBase() + 0x52102E8))(this);
	}
	template <typename T = void> T set_Configuration(uintptr_t value) {
		return ((T (*)(DefaultIniDataFormatter*, uintptr_t))(Il2CppBase() + 0x520FFB8))(this, value);
	}
	template <typename T = void> T WriteSection(uintptr_t section, uintptr_t sb) {
		return ((T (*)(DefaultIniDataFormatter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x5210988))(this, section, sb);
	}
	template <typename T = void> T WriteKeyValueData(uintptr_t keyDataCollection, uintptr_t sb) {
		return ((T (*)(DefaultIniDataFormatter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x52102F8))(this, keyDataCollection, sb);
	}
	template <typename T = void> T WriteComments(Il2CppList<Il2CppString*>* comments, uintptr_t sb) {
		return ((T (*)(DefaultIniDataFormatter*, Il2CppList<Il2CppString*>*, uintptr_t))(Il2CppBase() + 0x5210CB0))(this, comments, sb);
	}

};

}
