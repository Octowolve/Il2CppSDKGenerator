#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDElementDeclarationCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDElementDeclarationCollection"));
	}


	template <typename T = uintptr_t> T get_Item(Il2CppString* name) {
		return ((T (*)(DTDElementDeclarationCollection*, Il2CppString*))(Il2CppBase() + 0x4E11B24))(this, name);
	}
	template <typename T = uintptr_t> T Get(Il2CppString* name) {
		return ((T (*)(DTDElementDeclarationCollection*, Il2CppString*))(Il2CppBase() + 0x4E1252C))(this, name);
	}
	template <typename T = void> T Add(Il2CppString* name, uintptr_t decl) {
		return ((T (*)(DTDElementDeclarationCollection*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E125F4))(this, name, decl);
	}

};

}
