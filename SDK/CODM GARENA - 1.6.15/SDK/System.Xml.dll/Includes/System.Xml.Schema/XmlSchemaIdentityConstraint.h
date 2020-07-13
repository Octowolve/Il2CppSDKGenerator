#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaIdentityConstraint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaIdentityConstraint"));
	}

	template <typename T = uintptr_t> T& fields() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& qName() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& selector() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& compiledSelector() {
		return *(T*)((uintptr_t)this + 0x6C);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlSchemaIdentityConstraint*))(Il2CppBase() + 0x2AD4028))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(XmlSchemaIdentityConstraint*, Il2CppString*))(Il2CppBase() + 0x2AD4030))(this, value);
	}
	template <typename T = uintptr_t> T get_Selector() {
		return ((T (*)(XmlSchemaIdentityConstraint*))(Il2CppBase() + 0x2ACD780))(this);
	}
	template <typename T = void> T set_Selector(uintptr_t value) {
		return ((T (*)(XmlSchemaIdentityConstraint*, uintptr_t))(Il2CppBase() + 0x2AD4038))(this, value);
	}
	template <typename T = uintptr_t> T get_Fields() {
		return ((T (*)(XmlSchemaIdentityConstraint*))(Il2CppBase() + 0x2ACD788))(this);
	}
	template <typename T = uintptr_t> T get_QualifiedName() {
		return ((T (*)(XmlSchemaIdentityConstraint*))(Il2CppBase() + 0x2ACB464))(this);
	}
	template <typename T = uintptr_t> T get_CompiledSelector() {
		return ((T (*)(XmlSchemaIdentityConstraint*))(Il2CppBase() + 0x2AD4040))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaIdentityConstraint*, uintptr_t))(Il2CppBase() + 0x2AD4048))(this, parent);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaIdentityConstraint*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AD424C))(this, h, schema);
	}

};

}
