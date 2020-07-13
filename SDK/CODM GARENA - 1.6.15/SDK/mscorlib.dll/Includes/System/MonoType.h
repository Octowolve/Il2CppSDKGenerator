#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class MonoType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "MonoType"));
	}

	template <typename T = uintptr_t> T& type_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T get_attributes(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4551C3C))(0, type);
	}
	template <typename T = uintptr_t> T GetDefaultConstructor() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x4551C44))(this);
	}
	template <typename T = uintptr_t> T GetAttributeFlagsImpl() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x4551D7C))(this);
	}
	template <typename T = uintptr_t> T GetConstructorImpl(uintptr_t bindingAttr, uintptr_t binder, uintptr_t callConvention, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(MonoType*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4551D80))(this, bindingAttr, binder, callConvention, types, modifiers);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetConstructors_internal(uintptr_t bindingAttr, uintptr_t reflected_type) {
		return ((T (*)(MonoType*, uintptr_t, uintptr_t))(Il2CppBase() + 0x455224C))(this, bindingAttr, reflected_type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetConstructors(uintptr_t bindingAttr) {
		return ((T (*)(MonoType*, uintptr_t))(Il2CppBase() + 0x4552250))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T InternalGetEvent(Il2CppString* name, uintptr_t bindingAttr) {
		return ((T (*)(MonoType*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4552258))(this, name, bindingAttr);
	}
	template <typename T = uintptr_t> T GetEvent(Il2CppString* name, uintptr_t bindingAttr) {
		return ((T (*)(MonoType*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x455225C))(this, name, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetEvents_internal(uintptr_t bindingAttr, uintptr_t reflected_type) {
		return ((T (*)(MonoType*, uintptr_t, uintptr_t))(Il2CppBase() + 0x455232C))(this, bindingAttr, reflected_type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetEvents(uintptr_t bindingAttr) {
		return ((T (*)(MonoType*, uintptr_t))(Il2CppBase() + 0x4552330))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetField(Il2CppString* name, uintptr_t bindingAttr) {
		return ((T (*)(MonoType*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4552338))(this, name, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFields_internal(uintptr_t bindingAttr, uintptr_t reflected_type) {
		return ((T (*)(MonoType*, uintptr_t, uintptr_t))(Il2CppBase() + 0x455233C))(this, bindingAttr, reflected_type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFields(uintptr_t bindingAttr) {
		return ((T (*)(MonoType*, uintptr_t))(Il2CppBase() + 0x4552340))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetInterfaces() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x4552348))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMembers(uintptr_t bindingAttr) {
		return ((T (*)(MonoType*, uintptr_t))(Il2CppBase() + 0x455234C))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMethodsByName(Il2CppString* name, uintptr_t bindingAttr, bool ignoreCase, uintptr_t reflected_type) {
		return ((T (*)(MonoType*, Il2CppString*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x4552388))(this, name, bindingAttr, ignoreCase, reflected_type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMethods(uintptr_t bindingAttr) {
		return ((T (*)(MonoType*, uintptr_t))(Il2CppBase() + 0x455238C))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetMethodImpl(Il2CppString* name, uintptr_t bindingAttr, uintptr_t binder, uintptr_t callConvention, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(MonoType*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45523B4))(this, name, bindingAttr, binder, callConvention, types, modifiers);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetNestedTypes(uintptr_t bindingAttr) {
		return ((T (*)(MonoType*, uintptr_t))(Il2CppBase() + 0x4552A28))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPropertiesByName(Il2CppString* name, uintptr_t bindingAttr, bool icase, uintptr_t reflected_type) {
		return ((T (*)(MonoType*, Il2CppString*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x4552A2C))(this, name, bindingAttr, icase, reflected_type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetProperties(uintptr_t bindingAttr) {
		return ((T (*)(MonoType*, uintptr_t))(Il2CppBase() + 0x4552A30))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetPropertyImpl(Il2CppString* name, uintptr_t bindingAttr, uintptr_t binder, uintptr_t returnType, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(MonoType*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4552A58))(this, name, bindingAttr, binder, returnType, types, modifiers);
	}
	template <typename T = bool> T HasElementTypeImpl() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x4552BF0))(this);
	}
	template <typename T = bool> T IsArrayImpl() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x4552C58))(this);
	}
	template <typename T = bool> T IsByRefImpl() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x4552D00))(this);
	}
	template <typename T = bool> T IsPointerImpl() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x4552D04))(this);
	}
	template <typename T = bool> T IsPrimitiveImpl() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x4552D08))(this);
	}
	template <typename T = bool> T IsSubclassOf(uintptr_t type) {
		return ((T (*)(MonoType*, uintptr_t))(Il2CppBase() + 0x4552D0C))(this, type);
	}
	template <typename T = uintptr_t> T InvokeMember(Il2CppString* name, uintptr_t invokeAttr, uintptr_t binder, uintptr_t target, Il2CppArray<uintptr_t>* args, Il2CppArray<uintptr_t>* modifiers, uintptr_t culture, Il2CppArray<uintptr_t>* namedParameters) {
		return ((T (*)(MonoType*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4552DD8))(this, name, invokeAttr, binder, target, args, modifiers, culture, namedParameters);
	}
	template <typename T = uintptr_t> T GetElementType() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x4554404))(this);
	}
	template <typename T = uintptr_t> T get_UnderlyingSystemType() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x4554408))(this);
	}
	template <typename T = uintptr_t> T get_Assembly() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x455440C))(this);
	}
	template <typename T = Il2CppString*> T get_AssemblyQualifiedName() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x4554410))(this);
	}
	template <typename T = Il2CppString*> T getFullName(bool full_name, bool assembly_qualified) {
		return ((T (*)(MonoType*, bool, bool))(Il2CppBase() + 0x455441C))(this, full_name, assembly_qualified);
	}
	template <typename T = uintptr_t> T get_BaseType() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x4554420))(this);
	}
	template <typename T = Il2CppString*> T get_FullName() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x4554424))(this);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(MonoType*, uintptr_t, bool))(Il2CppBase() + 0x45544EC))(this, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(MonoType*, bool))(Il2CppBase() + 0x45545A4))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(MonoType*, uintptr_t, bool))(Il2CppBase() + 0x455464C))(this, attributeType, inherit);
	}
	template <typename T = uintptr_t> T get_MemberType() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x455475C))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x45547B4))(this);
	}
	template <typename T = Il2CppString*> T get_Namespace() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x45547B8))(this);
	}
	template <typename T = uintptr_t> T get_Module() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x45547BC))(this);
	}
	template <typename T = uintptr_t> T get_DeclaringType() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x45547C0))(this);
	}
	template <typename T = uintptr_t> T get_ReflectedType() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x45547C4))(this);
	}
	template <typename T = uintptr_t> T get_TypeHandle() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x45547D4))(this);
	}
	template <typename T = int32_t> T GetArrayRank() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x45547DC))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(MonoType*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45547E0))(this, info, context);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x4554818))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetGenericArguments() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x4554824))(this);
	}
	template <typename T = bool> T get_ContainsGenericParameters() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x4554828))(this);
	}
	template <typename T = bool> T get_IsGenericParameter() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x4554940))(this);
	}
	template <typename T = uintptr_t> T GetGenericTypeDefinition() {
		return ((T (*)(MonoType*))(Il2CppBase() + 0x4554944))(this);
	}
	template <typename T = uintptr_t> T CheckMethodSecurity(uintptr_t mb) {
		return ((T (*)(MonoType*, uintptr_t))(Il2CppBase() + 0x4552194))(this, mb);
	}
	template <typename T = void> T ReorderParamArrayArguments(Il2CppArray<uintptr_t>* args, uintptr_t method) {
		return ((T (*)(MonoType*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4554148))(this, args, method);
	}

};

}
