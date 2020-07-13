#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaCompilationSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaCompilationSettings"));
	}

	template <typename T = bool> T& enable_upa_check() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T get_EnableUpaCheck() {
		return ((T (*)(XmlSchemaCompilationSettings*))(Il2CppBase() + 0x2ABDDE4))(this);
	}

};

}
