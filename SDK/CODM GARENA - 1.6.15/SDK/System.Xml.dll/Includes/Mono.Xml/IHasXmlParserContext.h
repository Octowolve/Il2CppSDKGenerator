#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class IHasXmlParserContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "IHasXmlParserContext"));
	}


	template <typename T = uintptr_t> T get_ParserContext() {
		return ((T (*)(IHasXmlParserContext*))(Il2CppBase() + 0x0))(this);
	}

};

}
