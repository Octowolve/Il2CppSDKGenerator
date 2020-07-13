#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.XPath.yyParser {

class yyInput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.XPath.yyParser", "yyInput"));
	}


	template <typename T = bool> T advance() {
		return ((T (*)(yyInput*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T token() {
		return ((T (*)(yyInput*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T value() {
		return ((T (*)(yyInput*))(Il2CppBase() + 0x0))(this);
	}

};

}
