#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaTotalDigitsFacet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaTotalDigitsFacet"));
	}


	template <typename T = uintptr_t> T get_ThisFacet() {
		return ((T (*)(XmlSchemaTotalDigitsFacet*))(Il2CppBase() + 0x37B6708))(this);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x37A27D0))(0, reader, h);
	}

};

}
