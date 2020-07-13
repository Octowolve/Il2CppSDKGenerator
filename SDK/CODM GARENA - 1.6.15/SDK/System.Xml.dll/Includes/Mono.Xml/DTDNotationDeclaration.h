#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDNotationDeclaration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDNotationDeclaration"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& localName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& prefix() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& publicId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& systemId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(DTDNotationDeclaration*))(Il2CppBase() + 0x4E145A4))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(DTDNotationDeclaration*, Il2CppString*))(Il2CppBase() + 0x4E145AC))(this, value);
	}
	template <typename T = Il2CppString*> T get_PublicId() {
		return ((T (*)(DTDNotationDeclaration*))(Il2CppBase() + 0x4E145B4))(this);
	}
	template <typename T = void> T set_PublicId(Il2CppString* value) {
		return ((T (*)(DTDNotationDeclaration*, Il2CppString*))(Il2CppBase() + 0x4E145BC))(this, value);
	}
	template <typename T = Il2CppString*> T get_SystemId() {
		return ((T (*)(DTDNotationDeclaration*))(Il2CppBase() + 0x4E145C4))(this);
	}
	template <typename T = void> T set_SystemId(Il2CppString* value) {
		return ((T (*)(DTDNotationDeclaration*, Il2CppString*))(Il2CppBase() + 0x4E145CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(DTDNotationDeclaration*))(Il2CppBase() + 0x4E145D4))(this);
	}
	template <typename T = void> T set_LocalName(Il2CppString* value) {
		return ((T (*)(DTDNotationDeclaration*, Il2CppString*))(Il2CppBase() + 0x4E145DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Prefix() {
		return ((T (*)(DTDNotationDeclaration*))(Il2CppBase() + 0x4E145E4))(this);
	}
	template <typename T = void> T set_Prefix(Il2CppString* value) {
		return ((T (*)(DTDNotationDeclaration*, Il2CppString*))(Il2CppBase() + 0x4E145EC))(this, value);
	}

};

}
