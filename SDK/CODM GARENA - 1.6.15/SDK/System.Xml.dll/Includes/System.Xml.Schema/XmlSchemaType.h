#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaType"));
	}

	template <typename T = uintptr_t> T& final() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& isMixed() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& recursed() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& BaseSchemaTypeName() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& BaseXmlSchemaTypeInternal() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& DatatypeInternal() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& resolvedDerivedBy() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& finalResolved() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& QNameInternal() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map2E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map2F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlSchemaType*))(Il2CppBase() + 0x37A6CFC))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(XmlSchemaType*, Il2CppString*))(Il2CppBase() + 0x37A8E84))(this, value);
	}
	template <typename T = uintptr_t> T get_Final() {
		return ((T (*)(XmlSchemaType*))(Il2CppBase() + 0x37A6D04))(this);
	}
	template <typename T = void> T set_Final(uintptr_t value) {
		return ((T (*)(XmlSchemaType*, uintptr_t))(Il2CppBase() + 0x37A8E7C))(this, value);
	}
	template <typename T = uintptr_t> T get_QualifiedName() {
		return ((T (*)(XmlSchemaType*))(Il2CppBase() + 0x379BE64))(this);
	}
	template <typename T = uintptr_t> T get_FinalResolved() {
		return ((T (*)(XmlSchemaType*))(Il2CppBase() + 0x37A77E4))(this);
	}
	template <typename T = uintptr_t> T get_BaseSchemaType() {
		return ((T (*)(XmlSchemaType*))(Il2CppBase() + 0x37AB888))(this);
	}
	template <typename T = uintptr_t> T get_BaseXmlSchemaType() {
		return ((T (*)(XmlSchemaType*))(Il2CppBase() + 0x37A77DC))(this);
	}
	template <typename T = uintptr_t> T get_DerivedBy() {
		return ((T (*)(XmlSchemaType*))(Il2CppBase() + 0x37B6890))(this);
	}
	template <typename T = uintptr_t> T get_Datatype() {
		return ((T (*)(XmlSchemaType*))(Il2CppBase() + 0x37A73C8))(this);
	}
	template <typename T = bool> T get_IsMixed() {
		return ((T (*)(XmlSchemaType*))(Il2CppBase() + 0x37B6898))(this);
	}
	template <typename T = uintptr_t> static T GetBuiltInSimpleType(uintptr_t qualifiedName) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37A4AB8))(0, qualifiedName);
	}
	template <typename T = uintptr_t> static T GetBuiltInSimpleType_1(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37AC160))(0, type);
	}
	template <typename T = bool> T ValidateRecursionCheck() {
		return ((T (*)(XmlSchemaType*))(Il2CppBase() + 0x37B68A8))(this);
	}

};

}
