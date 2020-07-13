#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaGroupBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaGroupBase"));
	}

	template <typename T = uintptr_t> T& compiledItems() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = uintptr_t> T get_Items() {
		return ((T (*)(XmlSchemaGroupBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_CompiledItems() {
		return ((T (*)(XmlSchemaGroupBase*))(Il2CppBase() + 0x2A6EFD4))(this);
	}
	template <typename T = void> T CopyOptimizedItems(uintptr_t gb) {
		return ((T (*)(XmlSchemaGroupBase*, uintptr_t))(Il2CppBase() + 0x2AB05D0))(this, gb);
	}
	template <typename T = bool> T ParticleEquals(uintptr_t other) {
		return ((T (*)(XmlSchemaGroupBase*, uintptr_t))(Il2CppBase() + 0x2AD2C60))(this, other);
	}
	template <typename T = void> T CheckRecursion(int32_t depth, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaGroupBase*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AD2FE8))(this, depth, h, schema);
	}
	template <typename T = bool> T ValidateNSRecurseCheckCardinality(uintptr_t any, uintptr_t h, uintptr_t schema, bool raiseError) {
		return ((T (*)(XmlSchemaGroupBase*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2AB10B4))(this, any, h, schema, raiseError);
	}
	template <typename T = bool> T ValidateRecurse(uintptr_t baseGroup, uintptr_t h, uintptr_t schema, bool raiseError) {
		return ((T (*)(XmlSchemaGroupBase*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2AB1320))(this, baseGroup, h, schema, raiseError);
	}
	template <typename T = bool> T ValidateSeqRecurseMapSumCommon(uintptr_t baseGroup, uintptr_t h, uintptr_t schema, bool isLax, bool isMapAndSum, bool raiseError) {
		return ((T (*)(XmlSchemaGroupBase*, uintptr_t, uintptr_t, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x2ABA8C0))(this, baseGroup, h, schema, isLax, isMapAndSum, raiseError);
	}

};

}
