#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDNode"));
	}

	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isInternalSubset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& baseURI() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& lineNumber() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& linePosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_BaseURI() {
		return ((T (*)(DTDNode*))(Il2CppBase() + 0x4E14534))(this);
	}
	template <typename T = void> T set_BaseURI(Il2CppString* value) {
		return ((T (*)(DTDNode*, Il2CppString*))(Il2CppBase() + 0x4E1453C))(this, value);
	}
	template <typename T = bool> T get_IsInternalSubset() {
		return ((T (*)(DTDNode*))(Il2CppBase() + 0x4E14544))(this);
	}
	template <typename T = void> T set_IsInternalSubset(bool value) {
		return ((T (*)(DTDNode*, bool))(Il2CppBase() + 0x4E1454C))(this, value);
	}
	template <typename T = int32_t> T get_LineNumber() {
		return ((T (*)(DTDNode*))(Il2CppBase() + 0x4E14554))(this);
	}
	template <typename T = int32_t> T get_LinePosition() {
		return ((T (*)(DTDNode*))(Il2CppBase() + 0x4E1455C))(this);
	}
	template <typename T = bool> T HasLineInfo() {
		return ((T (*)(DTDNode*))(Il2CppBase() + 0x4E14564))(this);
	}
	template <typename T = void> T SetRoot(uintptr_t root) {
		return ((T (*)(DTDNode*, uintptr_t))(Il2CppBase() + 0x4E0F9DC))(this, root);
	}
	template <typename T = uintptr_t> T get_Root() {
		return ((T (*)(DTDNode*))(Il2CppBase() + 0x4E0FE44))(this);
	}
	template <typename T = uintptr_t> T NotWFError(Il2CppString* message) {
		return ((T (*)(DTDNode*, Il2CppString*))(Il2CppBase() + 0x4E14210))(this, message);
	}

};

}
