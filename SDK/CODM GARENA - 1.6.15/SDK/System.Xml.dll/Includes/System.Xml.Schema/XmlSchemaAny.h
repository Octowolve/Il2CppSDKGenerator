#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaAny
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaAny"));
	}

	template <typename T = uintptr_t> static T& anyTypeContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& nameSpace() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& processing() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& wildcard() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = uintptr_t> static T get_AnyTypeContent() {
		return ((T (*)(void *))(Il2CppBase() + 0x2A77624))(0);
	}
	template <typename T = Il2CppString*> T get_Namespace() {
		return ((T (*)(XmlSchemaAny*))(Il2CppBase() + 0x2AB35CC))(this);
	}
	template <typename T = void> T set_Namespace(Il2CppString* value) {
		return ((T (*)(XmlSchemaAny*, Il2CppString*))(Il2CppBase() + 0x2AB35BC))(this, value);
	}
	template <typename T = uintptr_t> T get_ProcessContents() {
		return ((T (*)(XmlSchemaAny*))(Il2CppBase() + 0x2AB35D4))(this);
	}
	template <typename T = void> T set_ProcessContents(uintptr_t value) {
		return ((T (*)(XmlSchemaAny*, uintptr_t))(Il2CppBase() + 0x2AB35C4))(this, value);
	}
	template <typename T = bool> T get_HasValueAny() {
		return ((T (*)(XmlSchemaAny*))(Il2CppBase() + 0x2A7F800))(this);
	}
	template <typename T = bool> T get_HasValueLocal() {
		return ((T (*)(XmlSchemaAny*))(Il2CppBase() + 0x2A7F824))(this);
	}
	template <typename T = bool> T get_HasValueOther() {
		return ((T (*)(XmlSchemaAny*))(Il2CppBase() + 0x2A7F848))(this);
	}
	template <typename T = bool> T get_HasValueTargetNamespace() {
		return ((T (*)(XmlSchemaAny*))(Il2CppBase() + 0x2A7F86C))(this);
	}
	template <typename T = uintptr_t> T get_ResolvedNamespaces() {
		return ((T (*)(XmlSchemaAny*))(Il2CppBase() + 0x2A7F8B4))(this);
	}
	template <typename T = uintptr_t> T get_ResolvedProcessContents() {
		return ((T (*)(XmlSchemaAny*))(Il2CppBase() + 0x2A7F890))(this);
	}
	template <typename T = Il2CppString*> T get_TargetNamespace() {
		return ((T (*)(XmlSchemaAny*))(Il2CppBase() + 0x2A7F8D8))(this);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAny*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB35DC))(this, h, schema);
	}
	template <typename T = uintptr_t> T GetOptimizedParticle(bool isTop) {
		return ((T (*)(XmlSchemaAny*, bool))(Il2CppBase() + 0x2AB3880))(this, isTop);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAny*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB3990))(this, h, schema);
	}
	template <typename T = bool> T ParticleEquals(uintptr_t other) {
		return ((T (*)(XmlSchemaAny*, uintptr_t))(Il2CppBase() + 0x2AB3998))(this, other);
	}
	template <typename T = bool> T ExamineAttributeWildcardIntersection(uintptr_t other, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAny*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB3D38))(this, other, h, schema);
	}
	template <typename T = bool> T ValidateDerivationByRestriction(uintptr_t baseParticle, uintptr_t h, uintptr_t schema, bool raiseError) {
		return ((T (*)(XmlSchemaAny*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2AB3D68))(this, baseParticle, h, schema, raiseError);
	}
	template <typename T = void> T CheckRecursion(int32_t depth, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAny*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB3ED0))(this, depth, h, schema);
	}
	template <typename T = void> T ValidateUniqueParticleAttribution(uintptr_t qnames, uintptr_t nsNames, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAny*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB3ED4))(this, qnames, nsNames, h, schema);
	}
	template <typename T = void> T ValidateUniqueTypeAttribution(uintptr_t labels, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAny*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB41FC))(this, labels, h, schema);
	}
	template <typename T = bool> T ValidateWildcardAllowsNamespaceName(Il2CppString* ns, uintptr_t h, uintptr_t schema, bool raiseError) {
		return ((T (*)(XmlSchemaAny*, Il2CppString*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2A7F8FC))(this, ns, h, schema, raiseError);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB4200))(0, reader, h);
	}

};

}
