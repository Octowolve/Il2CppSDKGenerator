#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDEntityDeclaration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDEntityDeclaration"));
	}

	template <typename T = Il2CppString*> T& entityValue() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& notationName() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& ReferencingEntities() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& scanned() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& recursed() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = bool> T& hasExternalReference() {
		return *(T*)((uintptr_t)this + 0x4E);
	}

	template <typename T = Il2CppString*> T get_NotationName() {
		return ((T (*)(DTDEntityDeclaration*))(Il2CppBase() + 0x4E132E4))(this);
	}
	template <typename T = void> T set_NotationName(Il2CppString* value) {
		return ((T (*)(DTDEntityDeclaration*, Il2CppString*))(Il2CppBase() + 0x4E132EC))(this, value);
	}
	template <typename T = bool> T get_HasExternalReference() {
		return ((T (*)(DTDEntityDeclaration*))(Il2CppBase() + 0x4E132F4))(this);
	}
	template <typename T = Il2CppString*> T get_EntityValue() {
		return ((T (*)(DTDEntityDeclaration*))(Il2CppBase() + 0x4E13F64))(this);
	}
	template <typename T = void> T ScanEntityValue(uintptr_t refs) {
		return ((T (*)(DTDEntityDeclaration*, uintptr_t))(Il2CppBase() + 0x4E1339C))(this, refs);
	}

};

}
