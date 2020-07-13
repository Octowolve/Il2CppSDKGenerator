#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IniParser {

class FileIniDataParser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("INIFileParser.dll", "IniParser", "FileIniDataParser"));
	}



};

}
