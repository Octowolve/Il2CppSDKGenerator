#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaValidationException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaValidationException"));
	}


	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(XmlSchemaValidationException*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37BB82C))(this, info, context);
	}

};

}
