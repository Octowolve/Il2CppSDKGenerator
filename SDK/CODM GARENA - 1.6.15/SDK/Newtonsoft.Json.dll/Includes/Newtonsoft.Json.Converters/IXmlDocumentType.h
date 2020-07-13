#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class IXmlDocumentType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "IXmlDocumentType"));
	}


	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(IXmlDocumentType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_System() {
		return ((T (*)(IXmlDocumentType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Public() {
		return ((T (*)(IXmlDocumentType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_InternalSubset() {
		return ((T (*)(IXmlDocumentType*))(Il2CppBase() + 0x0))(this);
	}

};

}
