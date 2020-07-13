#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Xsl {

class XsltContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Xsl", "XsltContext"));
	}


	template <typename T = uintptr_t> T ResolveFunction(Il2CppString* prefix, Il2CppString* name, Il2CppArray<uintptr_t>* argTypes) {
		return ((T (*)(XsltContext*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, prefix, name, argTypes);
	}
	template <typename T = uintptr_t> T ResolveVariable(Il2CppString* prefix, Il2CppString* name) {
		return ((T (*)(XsltContext*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, prefix, name);
	}
	template <typename T = uintptr_t> T ResolveVariable_1(uintptr_t name) {
		return ((T (*)(XsltContext*, uintptr_t))(Il2CppBase() + 0x5220284))(this, name);
	}
	template <typename T = uintptr_t> T ResolveFunction_1(uintptr_t name, Il2CppArray<uintptr_t>* argTypes) {
		return ((T (*)(XsltContext*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x52202FC))(this, name, argTypes);
	}

};

}
