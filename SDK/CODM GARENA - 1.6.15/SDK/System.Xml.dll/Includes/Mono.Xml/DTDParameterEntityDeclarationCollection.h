#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDParameterEntityDeclarationCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDParameterEntityDeclarationCollection"));
	}

	template <typename T = uintptr_t> T& peDecls() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Item(Il2CppString* name) {
		return ((T (*)(DTDParameterEntityDeclarationCollection*, Il2CppString*))(Il2CppBase() + 0x4E15130))(this, name);
	}
	template <typename T = void> T Add(Il2CppString* name, uintptr_t decl) {
		return ((T (*)(DTDParameterEntityDeclarationCollection*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E15218))(this, name, decl);
	}

};

}
