#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathException"));
	}


	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(XPathException*))(Il2CppBase() + 0x4D1042C))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(XPathException*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D10434))(this, info, context);
	}

};

}
