#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaAll
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaAll"));
	}

	template <typename T = uintptr_t> T& schema() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& items() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& emptiable() {
		return *(T*)((uintptr_t)this + 0xCC);
	}

	template <typename T = uintptr_t> T get_Items() {
		return ((T (*)(XmlSchemaAll*))(Il2CppBase() + 0x2AAF7CC))(this);
	}
	template <typename T = bool> T get_Emptiable() {
		return ((T (*)(XmlSchemaAll*))(Il2CppBase() + 0x2AAF7D4))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaAll*, uintptr_t))(Il2CppBase() + 0x2AAF7DC))(this, parent);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAll*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AAF9D0))(this, h, schema);
	}
	template <typename T = uintptr_t> T GetOptimizedParticle(bool isTop) {
		return ((T (*)(XmlSchemaAll*, bool))(Il2CppBase() + 0x2AB0168))(this, isTop);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAll*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB0994))(this, h, schema);
	}
	template <typename T = void> T ComputeEmptiable() {
		return ((T (*)(XmlSchemaAll*))(Il2CppBase() + 0x2AB0780))(this);
	}
	template <typename T = bool> T ValidateDerivationByRestriction(uintptr_t baseParticle, uintptr_t h, uintptr_t schema, bool raiseError) {
		return ((T (*)(XmlSchemaAll*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2AB0EDC))(this, baseParticle, h, schema, raiseError);
	}
	template <typename T = uintptr_t> T GetMinEffectiveTotalRange() {
		return ((T (*)(XmlSchemaAll*))(Il2CppBase() + 0x2AB134C))(this);
	}
	template <typename T = void> T ValidateUniqueParticleAttribution(uintptr_t qnames, uintptr_t nsNames, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAll*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB1360))(this, qnames, nsNames, h, schema);
	}
	template <typename T = void> T ValidateUniqueTypeAttribution(uintptr_t labels, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaAll*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB158C))(this, labels, h, schema);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AB17B0))(0, reader, h);
	}

};

}
