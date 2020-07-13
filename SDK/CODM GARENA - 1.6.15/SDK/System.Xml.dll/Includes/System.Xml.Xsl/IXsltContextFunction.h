#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Xsl {

class IXsltContextFunction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Xsl", "IXsltContextFunction"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T get_ArgTypes() {
		return ((T (*)(IXsltContextFunction*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_Maxargs() {
		return ((T (*)(IXsltContextFunction*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T Invoke(uintptr_t xsltContext, Il2CppArray<uintptr_t>* args, uintptr_t docContext) {
		return ((T (*)(IXsltContextFunction*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(this, xsltContext, args, docContext);
	}

};

}
