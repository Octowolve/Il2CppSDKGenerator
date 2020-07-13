#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDNotationDeclarationCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDNotationDeclarationCollection"));
	}


	template <typename T = uintptr_t> T get_Item(Il2CppString* name) {
		return ((T (*)(DTDNotationDeclarationCollection*, Il2CppString*))(Il2CppBase() + 0x4E14610))(this, name);
	}
	template <typename T = void> T Add(Il2CppString* name, uintptr_t decl) {
		return ((T (*)(DTDNotationDeclarationCollection*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E146D8))(this, name, decl);
	}

};

}
