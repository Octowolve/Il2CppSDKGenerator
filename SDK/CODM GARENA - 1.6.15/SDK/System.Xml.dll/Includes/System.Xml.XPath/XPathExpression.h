#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathExpression"));
	}


	template <typename T = void> T SetContext(uintptr_t nsManager) {
		return ((T (*)(XPathExpression*, uintptr_t))(Il2CppBase() + 0x0))(this, nsManager);
	}
	template <typename T = uintptr_t> static T Compile(Il2CppString* xpath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4D10454))(0, xpath);
	}
	template <typename T = uintptr_t> static T Compile_1(Il2CppString* xpath, uintptr_t nsmgr, uintptr_t ctx) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D10474))(0, xpath, nsmgr, ctx);
	}
	template <typename T = void> T SetContext_1(uintptr_t nsResolver) {
		return ((T (*)(XPathExpression*, uintptr_t))(Il2CppBase() + 0x0))(this, nsResolver);
	}

};

}
