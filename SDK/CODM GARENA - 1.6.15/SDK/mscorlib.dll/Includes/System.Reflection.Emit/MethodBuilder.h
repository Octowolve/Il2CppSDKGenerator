#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class MethodBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "MethodBuilder"));
	}

	template <typename T = uintptr_t> T& rtype() {
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
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& table_idx() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& code() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ilgen() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& pinfo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& override_method() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& call_conv() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& init_locals() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& generic_params() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& returnModReq() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& returnModOpt() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& paramModReq() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& paramModOpt() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = bool> T get_ContainsGenericParameters() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x45707C0))(this);
	}
	template <typename T = uintptr_t> T get_MethodHandle() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x4570850))(this);
	}
	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x457091C))(this);
	}
	template <typename T = uintptr_t> T get_ReflectedType() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x4570924))(this);
	}
	template <typename T = uintptr_t> T get_DeclaringType() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x456DC94))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x457092C))(this);
	}
	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x4570934))(this);
	}
	template <typename T = uintptr_t> T get_CallingConvention() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x457093C))(this);
	}
	template <typename T = uintptr_t> T GetToken() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x45707B4))(this);
	}
	template <typename T = uintptr_t> T GetBaseDefinition() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x4570944))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetParameters() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x4570948))(this);
	}
	template <typename T = int32_t> T GetParameterCount() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x4570B5C))(this);
	}
	template <typename T = uintptr_t> T Invoke(uintptr_t obj, uintptr_t invokeAttr, uintptr_t binder, Il2CppArray<uintptr_t>* parameters, uintptr_t culture) {
		return ((T (*)(MethodBuilder*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4570B70))(this, obj, invokeAttr, binder, parameters, culture);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(MethodBuilder*, uintptr_t, bool))(Il2CppBase() + 0x4570B88))(this, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(MethodBuilder*, bool))(Il2CppBase() + 0x4570BA0))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(MethodBuilder*, uintptr_t, bool))(Il2CppBase() + 0x4570C7C))(this, attributeType, inherit);
	}
	template <typename T = uintptr_t> T GetILGenerator() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x4570D68))(this);
	}
	template <typename T = uintptr_t> T GetILGenerator_1(int32_t size) {
		return ((T (*)(MethodBuilder*, int32_t))(Il2CppBase() + 0x4570D70))(this, size);
	}
	template <typename T = void> T check_override() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x4570EE0))(this);
	}
	template <typename T = void> T fixup() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x4571024))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x45711F0))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(MethodBuilder*, uintptr_t))(Il2CppBase() + 0x45714B8))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x45714CC))(this);
	}
	template <typename T = int32_t> T get_next_table_index(uintptr_t obj, int32_t table, bool inc) {
		return ((T (*)(MethodBuilder*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4570784))(this, obj, table, inc);
	}
	template <typename T = void> T set_override(uintptr_t mdecl) {
		return ((T (*)(MethodBuilder*, uintptr_t))(Il2CppBase() + 0x45714F8))(this, mdecl);
	}
	template <typename T = uintptr_t> T NotSupported() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x4570868))(this);
	}
	template <typename T = uintptr_t> T MakeGenericMethod(Il2CppArray<uintptr_t>* typeArguments) {
		return ((T (*)(MethodBuilder*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4571500))(this, typeArguments);
	}
	template <typename T = bool> T get_IsGenericMethodDefinition() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x4571504))(this);
	}
	template <typename T = bool> T get_IsGenericMethod() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x4571514))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetGenericArguments() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x4571524))(this);
	}
	template <typename T = uintptr_t> T get_Module() {
		return ((T (*)(MethodBuilder*))(Il2CppBase() + 0x45716B8))(this);
	}

};

}
