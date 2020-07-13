#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization.Formatters.Binary {

class MemberTypeMetadata
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "MemberTypeMetadata"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& members() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T WriteAssemblies(uintptr_t ow, uintptr_t writer) {
		return ((T (*)(MemberTypeMetadata*, uintptr_t, uintptr_t))(Il2CppBase() + 0x302114C))(this, ow, writer);
	}
	template <typename T = void> T WriteTypeData(uintptr_t ow, uintptr_t writer, bool writeTypes) {
		return ((T (*)(MemberTypeMetadata*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x30212DC))(this, ow, writer, writeTypes);
	}
	template <typename T = void> T WriteObjectData(uintptr_t ow, uintptr_t writer, uintptr_t data) {
		return ((T (*)(MemberTypeMetadata*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3021980))(this, ow, writer, data);
	}

};

}
