#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class DerivedType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "DerivedType"));
	}

	template <typename T = uintptr_t> T& elementType() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> static T create_unmanaged_type(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4569D88))(0, type);
	}
	template <typename T = Il2CppString*> T FormatName(Il2CppString* elementName) {
		return ((T (*)(DerivedType*, Il2CppString*))(Il2CppBase() + 0x0))(this, elementName);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetInterfaces() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x4569D90))(this);
	}
	template <typename T = uintptr_t> T GetElementType() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x4569E20))(this);
	}
	template <typename T = uintptr_t> T GetEvent(Il2CppString* name, uintptr_t bindingAttr) {
		return ((T (*)(DerivedType*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4569E28))(this, name, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetEvents(uintptr_t bindingAttr) {
		return ((T (*)(DerivedType*, uintptr_t))(Il2CppBase() + 0x4569EB8))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetField(Il2CppString* name, uintptr_t bindingAttr) {
		return ((T (*)(DerivedType*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4569F48))(this, name, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFields(uintptr_t bindingAttr) {
		return ((T (*)(DerivedType*, uintptr_t))(Il2CppBase() + 0x4569FD8))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMembers(uintptr_t bindingAttr) {
		return ((T (*)(DerivedType*, uintptr_t))(Il2CppBase() + 0x456A068))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetMethodImpl(Il2CppString* name, uintptr_t bindingAttr, uintptr_t binder, uintptr_t callConvention, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(DerivedType*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x456A0F8))(this, name, bindingAttr, binder, callConvention, types, modifiers);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMethods(uintptr_t bindingAttr) {
		return ((T (*)(DerivedType*, uintptr_t))(Il2CppBase() + 0x456A188))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetNestedTypes(uintptr_t bindingAttr) {
		return ((T (*)(DerivedType*, uintptr_t))(Il2CppBase() + 0x456A218))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetProperties(uintptr_t bindingAttr) {
		return ((T (*)(DerivedType*, uintptr_t))(Il2CppBase() + 0x456A2A8))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetPropertyImpl(Il2CppString* name, uintptr_t bindingAttr, uintptr_t binder, uintptr_t returnType, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(DerivedType*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x456A338))(this, name, bindingAttr, binder, returnType, types, modifiers);
	}
	template <typename T = uintptr_t> T GetConstructorImpl(uintptr_t bindingAttr, uintptr_t binder, uintptr_t callConvention, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(DerivedType*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x456A3C8))(this, bindingAttr, binder, callConvention, types, modifiers);
	}
	template <typename T = uintptr_t> T GetAttributeFlagsImpl() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x456A458))(this);
	}
	template <typename T = bool> T HasElementTypeImpl() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x456A484))(this);
	}
	template <typename T = bool> T IsArrayImpl() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x456A48C))(this);
	}
	template <typename T = bool> T IsByRefImpl() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x456A494))(this);
	}
	template <typename T = bool> T IsPointerImpl() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x456A49C))(this);
	}
	template <typename T = bool> T IsPrimitiveImpl() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x456A4A4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetConstructors(uintptr_t bindingAttr) {
		return ((T (*)(DerivedType*, uintptr_t))(Il2CppBase() + 0x456A4AC))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T InvokeMember(Il2CppString* name, uintptr_t invokeAttr, uintptr_t binder, uintptr_t target, Il2CppArray<uintptr_t>* args, Il2CppArray<uintptr_t>* modifiers, uintptr_t culture, Il2CppArray<uintptr_t>* namedParameters) {
		return ((T (*)(DerivedType*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x456A53C))(this, name, invokeAttr, binder, target, args, modifiers, culture, namedParameters);
	}
	template <typename T = bool> T IsInstanceOfType(uintptr_t o) {
		return ((T (*)(DerivedType*, uintptr_t))(Il2CppBase() + 0x456A5CC))(this, o);
	}
	template <typename T = bool> T IsAssignableFrom(uintptr_t c) {
		return ((T (*)(DerivedType*, uintptr_t))(Il2CppBase() + 0x456A5D4))(this, c);
	}
	template <typename T = bool> T get_ContainsGenericParameters() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x456A5DC))(this);
	}
	template <typename T = uintptr_t> T MakeGenericType(Il2CppArray<uintptr_t>* typeArguments) {
		return ((T (*)(DerivedType*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x456A610))(this, typeArguments);
	}
	template <typename T = uintptr_t> T MakeArrayType() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x456A6A0))(this);
	}
	template <typename T = uintptr_t> T MakeByRefType() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x456A738))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x456A7C8))(this);
	}
	template <typename T = uintptr_t> T get_Assembly() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x456A818))(this);
	}
	template <typename T = Il2CppString*> T get_AssemblyQualifiedName() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x456A84C))(this);
	}
	template <typename T = Il2CppString*> T get_FullName() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x456A9B0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x456AA00))(this);
	}
	template <typename T = uintptr_t> T get_Module() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x456AA50))(this);
	}
	template <typename T = Il2CppString*> T get_Namespace() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x456AA84))(this);
	}
	template <typename T = uintptr_t> T get_TypeHandle() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x456AAB8))(this);
	}
	template <typename T = uintptr_t> T get_UnderlyingSystemType() {
		return ((T (*)(DerivedType*))(Il2CppBase() + 0x456AB48))(this);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(DerivedType*, uintptr_t, bool))(Il2CppBase() + 0x456AB60))(this, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(DerivedType*, bool))(Il2CppBase() + 0x456ABF0))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(DerivedType*, uintptr_t, bool))(Il2CppBase() + 0x456AC80))(this, attributeType, inherit);
	}

};

}
