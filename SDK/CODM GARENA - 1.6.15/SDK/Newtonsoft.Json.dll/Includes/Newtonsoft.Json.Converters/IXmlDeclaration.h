#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class IXmlDeclaration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "IXmlDeclaration"));
	}


	template <typename T = Il2CppString*> T get_Version() {
		return ((T (*)(IXmlDeclaration*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Encoding() {
		return ((T (*)(IXmlDeclaration*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Standalone() {
		return ((T (*)(IXmlDeclaration*))(Il2CppBase() + 0x0))(this);
	}

};

}
