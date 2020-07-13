#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class TypeBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "TypeBuilder"));
	}

	template <typename T = Il2CppString*> T& tname() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& nspace() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& nesting_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& interfaces() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& num_methods() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& methods() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ctors() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& properties() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& fields() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& subtypes() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& attrs() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& table_idx() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& pmodule() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& class_size() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& packing_size() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& generic_params() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& created() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& fullname() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& createTypeCalled() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& underlying_type() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = uintptr_t> T GetAttributeFlagsImpl() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457BC6C))(this);
	}
	template <typename T = void> T setup_internal_class(uintptr_t tb) {
		return ((T (*)(TypeBuilder*, uintptr_t))(Il2CppBase() + 0x457B960))(this, tb);
	}
	template <typename T = void> T create_generic_class() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457BC74))(this);
	}
	template <typename T = uintptr_t> T get_Assembly() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x456BC08))(this);
	}
	template <typename T = Il2CppString*> T get_AssemblyQualifiedName() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x456BC5C))(this);
	}
	template <typename T = uintptr_t> T get_BaseType() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x456BD88))(this);
	}
	template <typename T = uintptr_t> T get_DeclaringType() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x456BDB4))(this);
	}
	template <typename T = uintptr_t> T get_UnderlyingSystemType() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457BC78))(this);
	}
	template <typename T = Il2CppString*> T GetFullName() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457BADC))(this);
	}
	template <typename T = Il2CppString*> T get_FullName() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x456BDE0))(this);
	}
	template <typename T = uintptr_t> T get_Module() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x4568C04))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x45698C4))(this);
	}
	template <typename T = Il2CppString*> T get_Namespace() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x456BE54))(this);
	}
	template <typename T = uintptr_t> T get_ReflectedType() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x456BE80))(this);
	}
	template <typename T = uintptr_t> T GetConstructorImpl(uintptr_t bindingAttr, uintptr_t binder, uintptr_t callConvention, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(TypeBuilder*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x457BD78))(this, bindingAttr, binder, callConvention, types, modifiers);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(TypeBuilder*, uintptr_t, bool))(Il2CppBase() + 0x456D1D4))(this, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(TypeBuilder*, bool))(Il2CppBase() + 0x456C08C))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(TypeBuilder*, uintptr_t, bool))(Il2CppBase() + 0x456C0F8))(this, attributeType, inherit);
	}
	template <typename T = uintptr_t> T DefineConstructor(uintptr_t attributes, uintptr_t callingConvention, Il2CppArray<uintptr_t>* parameterTypes) {
		return ((T (*)(TypeBuilder*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x457C1A8))(this, attributes, callingConvention, parameterTypes);
	}
	template <typename T = uintptr_t> T DefineConstructor_1(uintptr_t attributes, uintptr_t callingConvention, Il2CppArray<uintptr_t>* parameterTypes, Il2CppArray<uintptr_t>* requiredCustomModifiers, Il2CppArray<uintptr_t>* optionalCustomModifiers) {
		return ((T (*)(TypeBuilder*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x457C1CC))(this, attributes, callingConvention, parameterTypes, requiredCustomModifiers, optionalCustomModifiers);
	}
	template <typename T = uintptr_t> T DefineDefaultConstructor(uintptr_t attributes) {
		return ((T (*)(TypeBuilder*, uintptr_t))(Il2CppBase() + 0x457C478))(this, attributes);
	}
	template <typename T = void> T append_method(uintptr_t mb) {
		return ((T (*)(TypeBuilder*, uintptr_t))(Il2CppBase() + 0x457C758))(this, mb);
	}
	template <typename T = uintptr_t> T DefineMethod(Il2CppString* name, uintptr_t attributes, uintptr_t returnType, Il2CppArray<uintptr_t>* parameterTypes) {
		return ((T (*)(TypeBuilder*, Il2CppString*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x457C8DC))(this, name, attributes, returnType, parameterTypes);
	}
	template <typename T = uintptr_t> T DefineMethod_1(Il2CppString* name, uintptr_t attributes, uintptr_t callingConvention, uintptr_t returnType, Il2CppArray<uintptr_t>* parameterTypes) {
		return ((T (*)(TypeBuilder*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x457C914))(this, name, attributes, callingConvention, returnType, parameterTypes);
	}
	template <typename T = uintptr_t> T DefineMethod_2(Il2CppString* name, uintptr_t attributes, uintptr_t callingConvention, uintptr_t returnType, Il2CppArray<uintptr_t>* returnTypeRequiredCustomModifiers, Il2CppArray<uintptr_t>* returnTypeOptionalCustomModifiers, Il2CppArray<uintptr_t>* parameterTypes, Il2CppArray<uintptr_t>* parameterTypeRequiredCustomModifiers, Il2CppArray<uintptr_t>* parameterTypeOptionalCustomModifiers) {
		return ((T (*)(TypeBuilder*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x457C950))(this, name, attributes, callingConvention, returnType, returnTypeRequiredCustomModifiers, returnTypeOptionalCustomModifiers, parameterTypes, parameterTypeRequiredCustomModifiers, parameterTypeOptionalCustomModifiers);
	}
	template <typename T = void> T DefineMethodOverride(uintptr_t methodInfoBody, uintptr_t methodInfoDeclaration) {
		return ((T (*)(TypeBuilder*, uintptr_t, uintptr_t))(Il2CppBase() + 0x457CB08))(this, methodInfoBody, methodInfoDeclaration);
	}
	template <typename T = uintptr_t> T create_runtime_class(uintptr_t tb) {
		return ((T (*)(TypeBuilder*, uintptr_t))(Il2CppBase() + 0x457CC8C))(this, tb);
	}
	template <typename T = bool> T is_nested_in(uintptr_t t) {
		return ((T (*)(TypeBuilder*, uintptr_t))(Il2CppBase() + 0x457CC90))(this, t);
	}
	template <typename T = bool> T has_ctor_method() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457CCDC))(this);
	}
	template <typename T = uintptr_t> T CreateType() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x4571C68))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetConstructors(uintptr_t bindingAttr) {
		return ((T (*)(TypeBuilder*, uintptr_t))(Il2CppBase() + 0x456BF88))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetConstructorsInternal(uintptr_t bindingAttr) {
		return ((T (*)(TypeBuilder*, uintptr_t))(Il2CppBase() + 0x457CFCC))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetElementType() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x456C16C))(this);
	}
	template <typename T = uintptr_t> T GetEvent(Il2CppString* name, uintptr_t bindingAttr) {
		return ((T (*)(TypeBuilder*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x456C224))(this, name, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetEvents(uintptr_t bindingAttr) {
		return ((T (*)(TypeBuilder*, uintptr_t))(Il2CppBase() + 0x456C298))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetField(Il2CppString* name, uintptr_t bindingAttr) {
		return ((T (*)(TypeBuilder*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x456C3C0))(this, name, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFields(uintptr_t bindingAttr) {
		return ((T (*)(TypeBuilder*, uintptr_t))(Il2CppBase() + 0x456C588))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetInterfaces() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x456C7D4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMember(Il2CppString* name, uintptr_t type, uintptr_t bindingAttr) {
		return ((T (*)(TypeBuilder*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x456C94C))(this, name, type, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMembers(uintptr_t bindingAttr) {
		return ((T (*)(TypeBuilder*, uintptr_t))(Il2CppBase() + 0x456C9D4))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMethodsByName(Il2CppString* name, uintptr_t bindingAttr, bool ignoreCase, uintptr_t reflected_type) {
		return ((T (*)(TypeBuilder*, Il2CppString*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x457D1A8))(this, name, bindingAttr, ignoreCase, reflected_type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMethods(uintptr_t bindingAttr) {
		return ((T (*)(TypeBuilder*, uintptr_t))(Il2CppBase() + 0x456CAB4))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetMethodImpl(Il2CppString* name, uintptr_t bindingAttr, uintptr_t binder, uintptr_t callConvention, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(TypeBuilder*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x457D694))(this, name, bindingAttr, binder, callConvention, types, modifiers);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetNestedTypes(uintptr_t bindingAttr) {
		return ((T (*)(TypeBuilder*, uintptr_t))(Il2CppBase() + 0x456CB00))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetProperties(uintptr_t bindingAttr) {
		return ((T (*)(TypeBuilder*, uintptr_t))(Il2CppBase() + 0x456CD60))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetPropertyImpl(Il2CppString* name, uintptr_t bindingAttr, uintptr_t binder, uintptr_t returnType, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(TypeBuilder*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x457DA38))(this, name, bindingAttr, binder, returnType, types, modifiers);
	}
	template <typename T = bool> T HasElementTypeImpl() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457DB04))(this);
	}
	template <typename T = uintptr_t> T InvokeMember(Il2CppString* name, uintptr_t invokeAttr, uintptr_t binder, uintptr_t target, Il2CppArray<uintptr_t>* args, Il2CppArray<uintptr_t>* modifiers, uintptr_t culture, Il2CppArray<uintptr_t>* namedParameters) {
		return ((T (*)(TypeBuilder*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x456D110))(this, name, invokeAttr, binder, target, args, modifiers, culture, namedParameters);
	}
	template <typename T = bool> T IsArrayImpl() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457DB2C))(this);
	}
	template <typename T = bool> T IsByRefImpl() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457DB34))(this);
	}
	template <typename T = bool> T IsPointerImpl() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457DB3C))(this);
	}
	template <typename T = bool> T IsPrimitiveImpl() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457DB44))(this);
	}
	template <typename T = bool> T IsValueTypeImpl() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457DB4C))(this);
	}
	template <typename T = uintptr_t> T MakeArrayType() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457DCE8))(this);
	}
	template <typename T = uintptr_t> T MakeByRefType() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457DD80))(this);
	}
	template <typename T = uintptr_t> T MakeGenericType(Il2CppArray<uintptr_t>* typeArguments) {
		return ((T (*)(TypeBuilder*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x457DE10))(this, typeArguments);
	}
	template <typename T = uintptr_t> T get_TypeHandle() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x456BEB0))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(TypeBuilder*, uintptr_t))(Il2CppBase() + 0x457CE70))(this, parent);
	}
	template <typename T = int32_t> T get_next_table_index(uintptr_t obj, int32_t table, bool inc) {
		return ((T (*)(TypeBuilder*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4569D58))(this, obj, table, inc);
	}
	template <typename T = bool> T get_IsCompilerContext() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457BAAC))(this);
	}
	template <typename T = bool> T get_is_created() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x4568C88))(this);
	}
	template <typename T = uintptr_t> T not_supported() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457DA50))(this);
	}
	template <typename T = void> T check_not_created() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457C3C0))(this);
	}
	template <typename T = void> T check_created() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457C184))(this);
	}
	template <typename T = void> T check_name(Il2CppString* argName, Il2CppString* name) {
		return ((T (*)(TypeBuilder*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x457B964))(this, argName, name);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457DE18))(this);
	}
	template <typename T = bool> T IsAssignableFrom(uintptr_t c) {
		return ((T (*)(TypeBuilder*, uintptr_t))(Il2CppBase() + 0x457DE20))(this, c);
	}
	template <typename T = bool> T IsSubclassOf(uintptr_t c) {
		return ((T (*)(TypeBuilder*, uintptr_t))(Il2CppBase() + 0x457DE28))(this, c);
	}
	template <typename T = bool> T IsAssignableTo(uintptr_t c) {
		return ((T (*)(TypeBuilder*, uintptr_t))(Il2CppBase() + 0x457DE30))(this, c);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetGenericArguments() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457E000))(this);
	}
	template <typename T = uintptr_t> T GetGenericTypeDefinition() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457E0D4))(this);
	}
	template <typename T = bool> T get_ContainsGenericParameters() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457E190))(this);
	}
	template <typename T = bool> T get_IsGenericParameter() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457E1A0))(this);
	}
	template <typename T = bool> T get_IsGenericTypeDefinition() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457E1A4))(this);
	}
	template <typename T = bool> T get_IsGenericType() {
		return ((T (*)(TypeBuilder*))(Il2CppBase() + 0x457E1B4))(this);
	}

};

}
