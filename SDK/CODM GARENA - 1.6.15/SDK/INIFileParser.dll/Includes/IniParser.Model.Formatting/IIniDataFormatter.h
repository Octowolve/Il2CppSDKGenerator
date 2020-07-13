#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IniParser.Model.Formatting {

class IIniDataFormatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("INIFileParser.dll", "IniParser.Model.Formatting", "IIniDataFormatter"));
	}


	template <typename T = Il2CppString*> T IniDataToString(uintptr_t iniData) {
		return ((T (*)(IIniDataFormatter*, uintptr_t))(Il2CppBase() + 0x0))(this, iniData);
	}

};

}
