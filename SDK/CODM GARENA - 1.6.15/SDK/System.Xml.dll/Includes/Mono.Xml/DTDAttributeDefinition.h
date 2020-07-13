#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDAttributeDefinition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDAttributeDefinition"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& datatype() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& enumeratedLiterals() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& unresolvedDefault() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& enumeratedNotations() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& occurenceType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& resolvedDefaultValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(DTDAttributeDefinition*))(Il2CppBase() + 0x4E0FE3C))(this);
	}
	template <typename T = uintptr_t> T get_Datatype() {
		return ((T (*)(DTDAttributeDefinition*))(Il2CppBase() + 0x4E106A4))(this);
	}
	template <typename T = uintptr_t> T get_OccurenceType() {
		return ((T (*)(DTDAttributeDefinition*))(Il2CppBase() + 0x4E106AC))(this);
	}
	template <typename T = uintptr_t> T get_EnumeratedAttributeDeclaration() {
		return ((T (*)(DTDAttributeDefinition*))(Il2CppBase() + 0x4E106B4))(this);
	}
	template <typename T = uintptr_t> T get_EnumeratedNotations() {
		return ((T (*)(DTDAttributeDefinition*))(Il2CppBase() + 0x4E10754))(this);
	}
	template <typename T = Il2CppString*> T get_DefaultValue() {
		return ((T (*)(DTDAttributeDefinition*))(Il2CppBase() + 0x4E107F4))(this);
	}
	template <typename T = Il2CppString*> T get_UnresolvedDefaultValue() {
		return ((T (*)(DTDAttributeDefinition*))(Il2CppBase() + 0x4E10B68))(this);
	}
	template <typename T = Il2CppString*> T ComputeDefaultValue() {
		return ((T (*)(DTDAttributeDefinition*))(Il2CppBase() + 0x4E1081C))(this);
	}

};

}
