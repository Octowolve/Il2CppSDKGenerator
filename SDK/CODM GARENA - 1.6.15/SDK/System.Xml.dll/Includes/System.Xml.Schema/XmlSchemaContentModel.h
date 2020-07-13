#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaContentModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaContentModel"));
	}


	template <typename T = uintptr_t> T get_Content() {
		return ((T (*)(XmlSchemaContentModel*))(Il2CppBase() + 0x0))(this);
	}

};

}
