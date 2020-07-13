#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDEntityBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDEntityBase"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& publicId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& systemId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& literalValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& replacementText() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& uriString() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& absUri() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& isInvalid() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& loadFailed() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = uintptr_t> T& resolver() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = bool> T get_IsInvalid() {
		return ((T (*)(DTDEntityBase*))(Il2CppBase() + 0x4E127FC))(this);
	}
	template <typename T = void> T set_LoadFailed(bool value) {
		return ((T (*)(DTDEntityBase*, bool))(Il2CppBase() + 0x4E12804))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(DTDEntityBase*))(Il2CppBase() + 0x4E1280C))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(DTDEntityBase*, Il2CppString*))(Il2CppBase() + 0x4E12814))(this, value);
	}
	template <typename T = Il2CppString*> T get_PublicId() {
		return ((T (*)(DTDEntityBase*))(Il2CppBase() + 0x4E1281C))(this);
	}
	template <typename T = void> T set_PublicId(Il2CppString* value) {
		return ((T (*)(DTDEntityBase*, Il2CppString*))(Il2CppBase() + 0x4E12824))(this, value);
	}
	template <typename T = Il2CppString*> T get_SystemId() {
		return ((T (*)(DTDEntityBase*))(Il2CppBase() + 0x4E1282C))(this);
	}
	template <typename T = void> T set_SystemId(Il2CppString* value) {
		return ((T (*)(DTDEntityBase*, Il2CppString*))(Il2CppBase() + 0x4E12834))(this, value);
	}
	template <typename T = Il2CppString*> T get_LiteralEntityValue() {
		return ((T (*)(DTDEntityBase*))(Il2CppBase() + 0x4E1283C))(this);
	}
	template <typename T = void> T set_LiteralEntityValue(Il2CppString* value) {
		return ((T (*)(DTDEntityBase*, Il2CppString*))(Il2CppBase() + 0x4E12844))(this, value);
	}
	template <typename T = Il2CppString*> T get_ReplacementText() {
		return ((T (*)(DTDEntityBase*))(Il2CppBase() + 0x4E1284C))(this);
	}
	template <typename T = void> T set_ReplacementText(Il2CppString* value) {
		return ((T (*)(DTDEntityBase*, Il2CppString*))(Il2CppBase() + 0x4E12854))(this, value);
	}
	template <typename T = void> T set_XmlResolver(uintptr_t value) {
		return ((T (*)(DTDEntityBase*, uintptr_t))(Il2CppBase() + 0x4E1285C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ActualUri() {
		return ((T (*)(DTDEntityBase*))(Il2CppBase() + 0x4E12864))(this);
	}
	template <typename T = void> T Resolve() {
		return ((T (*)(DTDEntityBase*))(Il2CppBase() + 0x4E12B5C))(this);
	}

};

}
