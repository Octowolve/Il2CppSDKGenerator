#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaParticle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaParticle"));
	}

	template <typename T = uintptr_t> T& minOccurs() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& maxOccurs() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& minstr() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& maxstr() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& validatedMinOccurs() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& validatedMaxOccurs() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& recursionDepth() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& minEffectiveTotalRange() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& parentIsGroupDefinition() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& OptimizedParticle() {
		return *(T*)((uintptr_t)this + 0xBC);
	}

	template <typename T = uintptr_t> static T get_Empty() {
		return ((T (*)(void *))(Il2CppBase() + 0x379130C))(0);
	}
	template <typename T = Il2CppString*> T get_MinOccursString() {
		return ((T (*)(XmlSchemaParticle*))(Il2CppBase() + 0x37913DC))(this);
	}
	template <typename T = void> T set_MinOccursString(Il2CppString* value) {
		return ((T (*)(XmlSchemaParticle*, Il2CppString*))(Il2CppBase() + 0x37913E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_MaxOccursString() {
		return ((T (*)(XmlSchemaParticle*))(Il2CppBase() + 0x37916D4))(this);
	}
	template <typename T = void> T set_MaxOccursString(Il2CppString* value) {
		return ((T (*)(XmlSchemaParticle*, Il2CppString*))(Il2CppBase() + 0x37916DC))(this, value);
	}
	template <typename T = uintptr_t> T get_MinOccurs() {
		return ((T (*)(XmlSchemaParticle*))(Il2CppBase() + 0x3791AE8))(this);
	}
	template <typename T = void> T set_MinOccurs(uintptr_t value) {
		return ((T (*)(XmlSchemaParticle*, uintptr_t))(Il2CppBase() + 0x3791AF8))(this, value);
	}
	template <typename T = uintptr_t> T get_MaxOccurs() {
		return ((T (*)(XmlSchemaParticle*))(Il2CppBase() + 0x3791BCC))(this);
	}
	template <typename T = void> T set_MaxOccurs(uintptr_t value) {
		return ((T (*)(XmlSchemaParticle*, uintptr_t))(Il2CppBase() + 0x3791BDC))(this, value);
	}
	template <typename T = uintptr_t> T get_ValidatedMinOccurs() {
		return ((T (*)(XmlSchemaParticle*))(Il2CppBase() + 0x3791D74))(this);
	}
	template <typename T = uintptr_t> T get_ValidatedMaxOccurs() {
		return ((T (*)(XmlSchemaParticle*))(Il2CppBase() + 0x3791D84))(this);
	}
	template <typename T = uintptr_t> T GetOptimizedParticle(bool isTop) {
		return ((T (*)(XmlSchemaParticle*, bool))(Il2CppBase() + 0x3791D94))(this, isTop);
	}
	template <typename T = uintptr_t> T GetShallowClone() {
		return ((T (*)(XmlSchemaParticle*))(Il2CppBase() + 0x3791D9C))(this);
	}
	template <typename T = void> T CompileOccurence(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaParticle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3791E28))(this, h, schema);
	}
	template <typename T = void> T CopyInfo(uintptr_t obj) {
		return ((T (*)(XmlSchemaParticle*, uintptr_t))(Il2CppBase() + 0x379219C))(this, obj);
	}
	template <typename T = bool> T ValidateOccurenceRangeOK(uintptr_t other, uintptr_t h, uintptr_t schema, bool raiseError) {
		return ((T (*)(XmlSchemaParticle*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x37923F0))(this, other, h, schema, raiseError);
	}
	template <typename T = uintptr_t> T GetMinEffectiveTotalRange() {
		return ((T (*)(XmlSchemaParticle*))(Il2CppBase() + 0x379269C))(this);
	}
	template <typename T = uintptr_t> T GetMinEffectiveTotalRangeAllAndSequence() {
		return ((T (*)(XmlSchemaParticle*))(Il2CppBase() + 0x37926AC))(this);
	}
	template <typename T = bool> T ValidateIsEmptiable() {
		return ((T (*)(XmlSchemaParticle*))(Il2CppBase() + 0x3792B0C))(this);
	}
	template <typename T = bool> T ValidateDerivationByRestriction(uintptr_t baseParticle, uintptr_t h, uintptr_t schema, bool raiseError) {
		return ((T (*)(XmlSchemaParticle*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3792CB4))(this, baseParticle, h, schema, raiseError);
	}
	template <typename T = void> T ValidateUniqueParticleAttribution(uintptr_t qnames, uintptr_t nsNames, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaParticle*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3792CBC))(this, qnames, nsNames, h, schema);
	}
	template <typename T = void> T ValidateUniqueTypeAttribution(uintptr_t labels, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaParticle*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3792CC0))(this, labels, h, schema);
	}
	template <typename T = void> T CheckRecursion(int32_t depth, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaParticle*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3792CC4))(this, depth, h, schema);
	}
	template <typename T = bool> T ParticleEquals(uintptr_t other) {
		return ((T (*)(XmlSchemaParticle*, uintptr_t))(Il2CppBase() + 0x3792CC8))(this, other);
	}

};

}
