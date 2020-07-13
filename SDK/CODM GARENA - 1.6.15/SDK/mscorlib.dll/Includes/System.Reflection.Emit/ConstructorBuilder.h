#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class ConstructorBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "ConstructorBuilder"));
	}

	template <typename T = uintptr_t> T& ilgen() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& parameters() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& attrs() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& iattrs() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& table_idx() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& call_conv() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& pinfo() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& init_locals() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& paramModReq() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& paramModOpt() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_CallingConvention() {
		return ((T (*)(ConstructorBuilder*))(Il2CppBase() + 0x4568C1C))(this);
	}
	template <typename T = uintptr_t> T get_TypeBuilder() {
		return ((T (*)(ConstructorBuilder*))(Il2CppBase() + 0x4568C24))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetParameters() {
		return ((T (*)(ConstructorBuilder*))(Il2CppBase() + 0x4568C2C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetParametersInternal() {
		return ((T (*)(ConstructorBuilder*))(Il2CppBase() + 0x4568F0C))(this);
	}
	template <typename T = int32_t> T GetParameterCount() {
		return ((T (*)(ConstructorBuilder*))(Il2CppBase() + 0x456910C))(this);
	}
	template <typename T = uintptr_t> T Invoke(uintptr_t obj, uintptr_t invokeAttr, uintptr_t binder, Il2CppArray<uintptr_t>* parameters, uintptr_t culture) {
		return ((T (*)(ConstructorBuilder*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4569120))(this, obj, invokeAttr, binder, parameters, culture);
	}
	template <typename T = uintptr_t> T Invoke_1(uintptr_t invokeAttr, uintptr_t binder, Il2CppArray<uintptr_t>* parameters, uintptr_t culture) {
		return ((T (*)(ConstructorBuilder*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x45691EC))(this, invokeAttr, binder, parameters, culture);
	}
	template <typename T = uintptr_t> T get_MethodHandle() {
		return ((T (*)(ConstructorBuilder*))(Il2CppBase() + 0x4569204))(this);
	}
	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(ConstructorBuilder*))(Il2CppBase() + 0x456921C))(this);
	}
	template <typename T = uintptr_t> T get_ReflectedType() {
		return ((T (*)(ConstructorBuilder*))(Il2CppBase() + 0x4569224))(this);
	}
	template <typename T = uintptr_t> T get_DeclaringType() {
		return ((T (*)(ConstructorBuilder*))(Il2CppBase() + 0x456922C))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ConstructorBuilder*))(Il2CppBase() + 0x4569234))(this);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(ConstructorBuilder*, uintptr_t, bool))(Il2CppBase() + 0x4569338))(this, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(ConstructorBuilder*, bool))(Il2CppBase() + 0x4569350))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(ConstructorBuilder*, uintptr_t, bool))(Il2CppBase() + 0x456943C))(this, attributeType, inherit);
	}
	template <typename T = uintptr_t> T GetILGenerator() {
		return ((T (*)(ConstructorBuilder*))(Il2CppBase() + 0x4569538))(this);
	}
	template <typename T = uintptr_t> T GetILGenerator_1(int32_t streamSize) {
		return ((T (*)(ConstructorBuilder*, int32_t))(Il2CppBase() + 0x4569540))(this, streamSize);
	}
	template <typename T = uintptr_t> T GetToken() {
		return ((T (*)(ConstructorBuilder*))(Il2CppBase() + 0x4568C0C))(this);
	}
	template <typename T = uintptr_t> T get_Module() {
		return ((T (*)(ConstructorBuilder*))(Il2CppBase() + 0x45697C0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ConstructorBuilder*))(Il2CppBase() + 0x45697C8))(this);
	}
	template <typename T = void> T fixup() {
		return ((T (*)(ConstructorBuilder*))(Il2CppBase() + 0x45698CC))(this);
	}
	template <typename T = int32_t> T get_next_table_index(uintptr_t obj, int32_t table, bool inc) {
		return ((T (*)(ConstructorBuilder*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4568BD4))(this, obj, table, inc);
	}
	template <typename T = bool> T get_IsCompilerContext() {
		return ((T (*)(ConstructorBuilder*))(Il2CppBase() + 0x4568C98))(this);
	}
	template <typename T = uintptr_t> T not_supported() {
		return ((T (*)(ConstructorBuilder*))(Il2CppBase() + 0x4569138))(this);
	}
	template <typename T = uintptr_t> T not_created() {
		return ((T (*)(ConstructorBuilder*))(Il2CppBase() + 0x4568E58))(this);
	}

};

}
