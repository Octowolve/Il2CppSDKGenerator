#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class IHasXmlSchemaInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "IHasXmlSchemaInfo"));
	}


	template <typename T = uintptr_t> T get_SchemaType() {
		return ((T (*)(IHasXmlSchemaInfo*))(Il2CppBase() + 0x0))(this);
	}

};

}
