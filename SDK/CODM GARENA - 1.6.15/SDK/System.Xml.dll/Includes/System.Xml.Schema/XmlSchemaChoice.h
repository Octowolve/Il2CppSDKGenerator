#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaChoice
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaChoice"));
	}

	template <typename T = uintptr_t> T& items() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& minEffectiveTotalRange() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = uintptr_t> T get_Items() {
		return ((T (*)(XmlSchemaChoice*))(Il2CppBase() + 0x2AB9324))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaChoice*, uintptr_t))(Il2CppBase() + 0x2AB932C))(this, parent);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaChoice*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB9520))(this, h, schema);
	}
	template <typename T = uintptr_t> T GetOptimizedParticle(bool isTop) {
		return ((T (*)(XmlSchemaChoice*, bool))(Il2CppBase() + 0x2AB9A40))(this, isTop);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaChoice*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2ABA210))(this, h, schema);
	}
	template <typename T = bool> T ValidateDerivationByRestriction(uintptr_t baseParticle, uintptr_t h, uintptr_t schema, bool raiseError) {
		return ((T (*)(XmlSchemaChoice*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2ABA4C4))(this, baseParticle, h, schema, raiseError);
	}
	template <typename T = uintptr_t> T GetMinEffectiveTotalRange() {
		return ((T (*)(XmlSchemaChoice*))(Il2CppBase() + 0x2ABB0D8))(this);
	}
	template <typename T = void> T ValidateUniqueParticleAttribution(uintptr_t qnames, uintptr_t nsNames, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaChoice*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2ABB514))(this, qnames, nsNames, h, schema);
	}
	template <typename T = void> T ValidateUniqueTypeAttribution(uintptr_t labels, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaChoice*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2ABB740))(this, labels, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2ABB964))(0, reader, h);
	}

};

}
