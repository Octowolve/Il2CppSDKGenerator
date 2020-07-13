#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaGroupRef
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaGroupRef"));
	}

	template <typename T = uintptr_t> T& schema() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& refName() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& referencedGroup() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& busy() {
		return *(T*)((uintptr_t)this + 0xCC);
	}

	template <typename T = uintptr_t> T get_RefName() {
		return ((T (*)(XmlSchemaGroupRef*))(Il2CppBase() + 0x2AC70CC))(this);
	}
	template <typename T = uintptr_t> T get_TargetGroup() {
		return ((T (*)(XmlSchemaGroupRef*))(Il2CppBase() + 0x2AC70A4))(this);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaGroupRef*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AD32D0))(this, h, schema);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaGroupRef*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AD35CC))(this, h, schema);
	}
	template <typename T = uintptr_t> T GetOptimizedParticle(bool isTop) {
		return ((T (*)(XmlSchemaGroupRef*, bool))(Il2CppBase() + 0x2AD38F8))(this, isTop);
	}
	template <typename T = bool> T ParticleEquals(uintptr_t other) {
		return ((T (*)(XmlSchemaGroupRef*, uintptr_t))(Il2CppBase() + 0x2AD3C74))(this, other);
	}
	template <typename T = bool> T ValidateDerivationByRestriction(uintptr_t baseParticle, uintptr_t h, uintptr_t schema, bool raiseError) {
		return ((T (*)(XmlSchemaGroupRef*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2AD3CC0))(this, baseParticle, h, schema, raiseError);
	}
	template <typename T = void> T CheckRecursion(int32_t depth, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaGroupRef*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AD3D24))(this, depth, h, schema);
	}
	template <typename T = void> T ValidateUniqueParticleAttribution(uintptr_t qnames, uintptr_t nsNames, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaGroupRef*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AD3E88))(this, qnames, nsNames, h, schema);
	}
	template <typename T = void> T ValidateUniqueTypeAttribution(uintptr_t labels, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaGroupRef*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AD3EE8))(this, labels, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2ABC870))(0, reader, h);
	}

};

}
