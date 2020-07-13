#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Serialization {

class CodeIdentifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Serialization", "CodeIdentifier"));
	}


	template <typename T = Il2CppString*> static T MakePascal(Il2CppString* identifier) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37BCF94))(0, identifier);
	}
	template <typename T = Il2CppString*> static T MakeValid(Il2CppString* identifier) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37BD13C))(0, identifier);
	}

};

}
