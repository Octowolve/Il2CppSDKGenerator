#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDObjectModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDObjectModel"));
	}

	template <typename T = uintptr_t> T& factory() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& rootAutomata() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& emptyAutomata() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& anyAutomata() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& invalidAutomata() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& elementDecls() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& attListDecls() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& peDecls() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& entityDecls() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& notationDecls() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& validationErrors() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& resolver() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& nameTable() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& externalResources() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& baseURI() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& publicId() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& systemId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& intSubset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& intSubsetHasPERef() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& isStandalone() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = int32_t> T& lineNumber() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& linePosition() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = Il2CppString*> T get_BaseURI() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E14574))(this);
	}
	template <typename T = void> T set_BaseURI(Il2CppString* value) {
		return ((T (*)(DTDObjectModel*, Il2CppString*))(Il2CppBase() + 0x4E14A64))(this, value);
	}
	template <typename T = bool> T get_IsStandalone() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E14A6C))(this);
	}
	template <typename T = void> T set_IsStandalone(bool value) {
		return ((T (*)(DTDObjectModel*, bool))(Il2CppBase() + 0x4E14A74))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E14A7C))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(DTDObjectModel*, Il2CppString*))(Il2CppBase() + 0x4E14A84))(this, value);
	}
	template <typename T = uintptr_t> T get_NameTable() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E13230))(this);
	}
	template <typename T = Il2CppString*> T get_PublicId() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E14A8C))(this);
	}
	template <typename T = void> T set_PublicId(Il2CppString* value) {
		return ((T (*)(DTDObjectModel*, Il2CppString*))(Il2CppBase() + 0x4E14A94))(this, value);
	}
	template <typename T = Il2CppString*> T get_SystemId() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E14A9C))(this);
	}
	template <typename T = void> T set_SystemId(Il2CppString* value) {
		return ((T (*)(DTDObjectModel*, Il2CppString*))(Il2CppBase() + 0x4E14AA4))(this, value);
	}
	template <typename T = Il2CppString*> T get_InternalSubset() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E14AAC))(this);
	}
	template <typename T = void> T set_InternalSubset(Il2CppString* value) {
		return ((T (*)(DTDObjectModel*, Il2CppString*))(Il2CppBase() + 0x4E14AB4))(this, value);
	}
	template <typename T = bool> T get_InternalSubsetHasPEReference() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E14ABC))(this);
	}
	template <typename T = void> T set_InternalSubsetHasPEReference(bool value) {
		return ((T (*)(DTDObjectModel*, bool))(Il2CppBase() + 0x4E14AC4))(this, value);
	}
	template <typename T = int32_t> T get_LineNumber() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E14ACC))(this);
	}
	template <typename T = void> T set_LineNumber(int32_t value) {
		return ((T (*)(DTDObjectModel*, int32_t))(Il2CppBase() + 0x4E14AD4))(this, value);
	}
	template <typename T = int32_t> T get_LinePosition() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E14ADC))(this);
	}
	template <typename T = void> T set_LinePosition(int32_t value) {
		return ((T (*)(DTDObjectModel*, int32_t))(Il2CppBase() + 0x4E14AE4))(this, value);
	}
	template <typename T = Il2CppString*> T ResolveEntity(Il2CppString* name) {
		return ((T (*)(DTDObjectModel*, Il2CppString*))(Il2CppBase() + 0x4E10B70))(this, name);
	}
	template <typename T = uintptr_t> T get_Resolver() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E14AEC))(this);
	}
	template <typename T = void> T set_XmlResolver(uintptr_t value) {
		return ((T (*)(DTDObjectModel*, uintptr_t))(Il2CppBase() + 0x4E14AF4))(this, value);
	}
	template <typename T = uintptr_t> T get_ExternalResources() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E13228))(this);
	}
	template <typename T = uintptr_t> T get_Factory() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E10FC8))(this);
	}
	template <typename T = uintptr_t> T get_ElementDecls() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E11B1C))(this);
	}
	template <typename T = uintptr_t> T get_AttListDecls() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E14AFC))(this);
	}
	template <typename T = uintptr_t> T get_EntityDecls() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E142D8))(this);
	}
	template <typename T = uintptr_t> T get_PEDecls() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E14B04))(this);
	}
	template <typename T = uintptr_t> T get_NotationDecls() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E14B0C))(this);
	}
	template <typename T = uintptr_t> T get_RootAutomata() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E14B14))(this);
	}
	template <typename T = uintptr_t> T get_Empty() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E10E80))(this);
	}
	template <typename T = uintptr_t> T get_Any() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E10F24))(this);
	}
	template <typename T = uintptr_t> T get_Invalid() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E10DDC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Errors() {
		return ((T (*)(DTDObjectModel*))(Il2CppBase() + 0x4E14BC0))(this);
	}
	template <typename T = void> T AddError(uintptr_t ex) {
		return ((T (*)(DTDObjectModel*, uintptr_t))(Il2CppBase() + 0x4E1274C))(this, ex);
	}
	template <typename T = Il2CppString*> T GenerateEntityAttributeText(Il2CppString* entityName) {
		return ((T (*)(DTDObjectModel*, Il2CppString*))(Il2CppBase() + 0x4E14CD0))(this, entityName);
	}
	template <typename T = uintptr_t> T GenerateEntityContentReader(Il2CppString* entityName, uintptr_t context) {
		return ((T (*)(DTDObjectModel*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E14D08))(this, entityName, context);
	}

};

}
