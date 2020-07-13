#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class XmlDeclarationWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "XmlDeclarationWrapper"));
	}

	template <typename T = uintptr_t> T& _declaration() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppString*> T get_Version() {
		return ((T (*)(XmlDeclarationWrapper*))(Il2CppBase() + 0x4097B30))(this);
	}
	template <typename T = Il2CppString*> T get_Encoding() {
		return ((T (*)(XmlDeclarationWrapper*))(Il2CppBase() + 0x4097B5C))(this);
	}
	template <typename T = Il2CppString*> T get_Standalone() {
		return ((T (*)(XmlDeclarationWrapper*))(Il2CppBase() + 0x4097B88))(this);
	}

};

}
