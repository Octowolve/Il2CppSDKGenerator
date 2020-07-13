#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaAnyAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaAnyAttribute"));
	}

	template <typename T = Il2CppString*> T& nameSpace() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& processing() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& wildcard() {
		return *(T*)((uintptr_t)this + 0x64);
	}

	template <typename T = Il2CppString*> T get_Namespace() {
		return ((T (*)(XmlSchemaAnyAttribute*))(Il2CppBase() + 0x2AB50FC))(this);
	}
	template <typename T = bool> T get_HasValueAny() {
		return ((T (*)(XmlSchemaAnyAttribute*))(Il2CppBase() + 0x2AB5104))(this);
	}
	template <typename T = bool> T get_HasValueLocal() {
		return ((T (*)(XmlSchemaAnyAttribute*))(Il2CppBase() + 0x2AB5128))(this);
	}
	template <typename T = bool> T get_HasValueOther() {
		return ((T (*)(XmlSchemaAnyAttribute*))(Il2CppBase() + 0x2AB514C))(this);
	}
	template <typename T = bool> T get_HasValueTargetNamespace() {
		return ((T (*)(XmlSchemaAnyAttribute*))(Il2CppBase() + 0x2AB5170))(this);
	}
	template <typename T = uintptr_t> T get_ResolvedNamespaces() {
		return ((T (*)(XmlSchemaAnyAttribute*))(Il2CppBase() + 0x2AB5194))(this);
	}
	template <typename T = uintptr_t> T get_ResolvedProcessContents() {
		return ((T (*)(XmlSchemaAnyAttribute*))(Il2CppBase() + 0x2AB51B8))(this);
	}
	template <typename T = Il2CppString*> T get_TargetNamespace() {
		return ((T (*)(XmlSchemaAnyAttribute*))(Il2CppBase() + 0x2AB51DC))(this);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAnyAttribute*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB5200))(this, h, schema);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAnyAttribute*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB5490))(this, h, schema);
	}
	template <typename T = void> T ValidateWildcardSubset(uintptr_t other, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAnyAttribute*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB5498))(this, other, h, schema);
	}
	template <typename T = bool> T ValidateWildcardAllowsNamespaceName(Il2CppString* ns, uintptr_t schema) {
		return ((T (*)(XmlSchemaAnyAttribute*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2AB54D8))(this, ns, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB5514))(0, reader, h);
	}

};

}
