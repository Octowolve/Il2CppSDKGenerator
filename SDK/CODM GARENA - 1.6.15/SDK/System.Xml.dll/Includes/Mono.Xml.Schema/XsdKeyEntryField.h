#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdKeyEntryField
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdKeyEntryField"));
	}

	template <typename T = uintptr_t> T& entry() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& field() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& FieldFound() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& FieldLineNumber() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& FieldLinePosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& FieldHasLineInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& FieldType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Identity() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsXsiNil() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& FieldFoundDepth() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& FieldFoundPath() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& Consuming() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& Consumed() {
		return *(T*)((uintptr_t)this + 0x35);
	}

	template <typename T = bool> T SetIdentityField(uintptr_t identity, bool isXsiNil, uintptr_t type, int32_t depth, uintptr_t li) {
		return ((T (*)(XsdKeyEntryField*, uintptr_t, bool, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4E275A4))(this, identity, isXsiNil, type, depth, li);
	}
	template <typename T = uintptr_t> T Matches(bool matchesAttr, uintptr_t sender, uintptr_t nameTable, uintptr_t qnameStack, Il2CppString* sourceUri, uintptr_t schemaType, uintptr_t nsResolver, uintptr_t lineInfo, int32_t depth, Il2CppString* attrName, Il2CppString* attrNS, uintptr_t attrValue) {
		return ((T (*)(XsdKeyEntryField*, bool, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, int32_t, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E26EC0))(this, matchesAttr, sender, nameTable, qnameStack, sourceUri, schemaType, nsResolver, lineInfo, depth, attrName, attrNS, attrValue);
	}
	template <typename T = void> T FillAttributeFieldValue(uintptr_t sender, uintptr_t nameTable, Il2CppString* sourceUri, uintptr_t schemaType, uintptr_t nsResolver, uintptr_t identity, uintptr_t lineInfo, int32_t depth) {
		return ((T (*)(XsdKeyEntryField*, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4E27B10))(this, sender, nameTable, sourceUri, schemaType, nsResolver, identity, lineInfo, depth);
	}

};

}
