#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization.Formatters.Binary {

class CodeGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "CodeGenerator"));
	}

	template <typename T = uintptr_t> static T& monitor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _module() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T GenerateMetadataType(uintptr_t type, uintptr_t context) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x301C0D4))(0, type, context);
	}
	template <typename T = uintptr_t> static T GenerateMetadataTypeInternal(uintptr_t type, uintptr_t context) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x301C240))(0, type, context);
	}
	template <typename T = void> static T LoadFromPtr(uintptr_t ig, uintptr_t t) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x301F664))(0, ig, t);
	}
	template <typename T = void> static T EmitWriteTypeSpec(uintptr_t gen, uintptr_t type, Il2CppString* member) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x301EED8))(0, gen, type, member);
	}
	template <typename T = void> static T EmitLoadTypeAssembly(uintptr_t gen, uintptr_t type, Il2CppString* member) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x301E69C))(0, gen, type, member);
	}
	template <typename T = void> static T EmitWrite(uintptr_t gen, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x301E8EC))(0, gen, type);
	}
	template <typename T = void> static T EmitWritePrimitiveValue(uintptr_t gen, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3020364))(0, gen, type);
	}
	template <typename T = uintptr_t> static T EnumToUnderlying(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3020AD0))(0, t);
	}

};

}
