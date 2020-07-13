#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Xsl {

class IXsltContextVariable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Xsl", "IXsltContextVariable"));
	}


	template <typename T = uintptr_t> T Evaluate(uintptr_t xsltContext) {
		return ((T (*)(IXsltContextVariable*, uintptr_t))(Il2CppBase() + 0x0))(this, xsltContext);
	}

};

}
