#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDEntityDeclarationCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDEntityDeclarationCollection"));
	}


	template <typename T = uintptr_t> T get_Item(Il2CppString* name) {
		return ((T (*)(DTDEntityDeclarationCollection*, Il2CppString*))(Il2CppBase() + 0x4E142E0))(this, name);
	}
	template <typename T = void> T Add(Il2CppString* name, uintptr_t decl) {
		return ((T (*)(DTDEntityDeclarationCollection*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E143C4))(this, name, decl);
	}

};

}
