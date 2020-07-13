#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaSequence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaSequence"));
	}

	template <typename T = uintptr_t> T& items() {
		return *(T*)((uintptr_t)this + 0xC4);
	}

	template <typename T = uintptr_t> T get_Items() {
		return ((T (*)(XmlSchemaSequence*))(Il2CppBase() + 0x3795D64))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaSequence*, uintptr_t))(Il2CppBase() + 0x3795D6C))(this, parent);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSequence*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3795F48))(this, h, schema);
	}
	template <typename T = uintptr_t> T GetOptimizedParticle(bool isTop) {
		return ((T (*)(XmlSchemaSequence*, bool))(Il2CppBase() + 0x3796424))(this, isTop);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSequence*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3796BB4))(this, h, schema);
	}
	template <typename T = bool> T ValidateDerivationByRestriction(uintptr_t baseParticle, uintptr_t h, uintptr_t schema, bool raiseError) {
		return ((T (*)(XmlSchemaSequence*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3796E64))(this, baseParticle, h, schema, raiseError);
	}
	template <typename T = uintptr_t> T GetMinEffectiveTotalRange() {
		return ((T (*)(XmlSchemaSequence*))(Il2CppBase() + 0x3797C00))(this);
	}
	template <typename T = void> T ValidateUniqueParticleAttribution(uintptr_t qnames, uintptr_t nsNames, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSequence*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3797C10))(this, qnames, nsNames, h, schema);
	}
	template <typename T = void> T ValidateUPAOnHeadingOptionalComponents(uintptr_t qnames, uintptr_t nsNames, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSequence*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3797C48))(this, qnames, nsNames, h, schema);
	}
	template <typename T = void> T ValidateUPAOnItems(uintptr_t qnames, uintptr_t nsNames, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSequence*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3797F18))(this, qnames, nsNames, h, schema);
	}
	template <typename T = void> T ValidateUniqueTypeAttribution(uintptr_t labels, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaSequence*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3798BA0))(this, labels, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3798DB8))(0, reader, h);
	}

};

}
