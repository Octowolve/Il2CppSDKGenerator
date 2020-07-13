#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class TypeDelegator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "TypeDelegator"));
	}

	template <typename T = uintptr_t> T& typeImpl() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Assembly() {
		return ((T (*)(TypeDelegator*))(Il2CppBase() + 0x4FD9C2C))(this);
	}
	template <typename T = Il2CppString*> T get_AssemblyQualifiedName() {
		return ((T (*)(TypeDelegator*))(Il2CppBase() + 0x4FD9C60))(this);
	}
	template <typename T = uintptr_t> T get_BaseType() {
		return ((T (*)(TypeDelegator*))(Il2CppBase() + 0x4FD9C94))(this);
	}
	template <typename T = Il2CppString*> T get_FullName() {
		return ((T (*)(TypeDelegator*))(Il2CppBase() + 0x4FD9CC8))(this);
	}
	template <typename T = uintptr_t> T get_Module() {
		return ((T (*)(TypeDelegator*))(Il2CppBase() + 0x4FD9CFC))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(TypeDelegator*))(Il2CppBase() + 0x4FD9D30))(this);
	}
	template <typename T = Il2CppString*> T get_Namespace() {
		return ((T (*)(TypeDelegator*))(Il2CppBase() + 0x4FD9D64))(this);
	}
	template <typename T = uintptr_t> T get_TypeHandle() {
		return ((T (*)(TypeDelegator*))(Il2CppBase() + 0x4FD9D98))(this);
	}
	template <typename T = uintptr_t> T get_UnderlyingSystemType() {
		return ((T (*)(TypeDelegator*))(Il2CppBase() + 0x4FD9DCC))(this);
	}
	template <typename T = uintptr_t> T GetAttributeFlagsImpl() {
		return ((T (*)(TypeDelegator*))(Il2CppBase() + 0x4FD9E00))(this);
	}
	template <typename T = uintptr_t> T GetConstructorImpl(uintptr_t bindingAttr, uintptr_t binder, uintptr_t callConvention, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(TypeDelegator*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4FD9E2C))(this, bindingAttr, binder, callConvention, types, modifiers);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetConstructors(uintptr_t bindingAttr) {
		return ((T (*)(TypeDelegator*, uintptr_t))(Il2CppBase() + 0x4FD9E74))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(TypeDelegator*, bool))(Il2CppBase() + 0x4FD9EA8))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(TypeDelegator*, uintptr_t, bool))(Il2CppBase() + 0x4FD9EDC))(this, attributeType, inherit);
	}
	template <typename T = uintptr_t> T GetElementType() {
		return ((T (*)(TypeDelegator*))(Il2CppBase() + 0x4FD9F10))(this);
	}
	template <typename T = uintptr_t> T GetEvent(Il2CppString* name, uintptr_t bindingAttr) {
		return ((T (*)(TypeDelegator*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4FD9F44))(this, name, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetEvents(uintptr_t bindingAttr) {
		return ((T (*)(TypeDelegator*, uintptr_t))(Il2CppBase() + 0x4FD9F78))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetField(Il2CppString* name, uintptr_t bindingAttr) {
		return ((T (*)(TypeDelegator*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4FD9FAC))(this, name, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFields(uintptr_t bindingAttr) {
		return ((T (*)(TypeDelegator*, uintptr_t))(Il2CppBase() + 0x4FD9FE0))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetInterfaces() {
		return ((T (*)(TypeDelegator*))(Il2CppBase() + 0x4FDA014))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMember(Il2CppString* name, uintptr_t type, uintptr_t bindingAttr) {
		return ((T (*)(TypeDelegator*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FDA048))(this, name, type, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMembers(uintptr_t bindingAttr) {
		return ((T (*)(TypeDelegator*, uintptr_t))(Il2CppBase() + 0x4FDA088))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetMethodImpl(Il2CppString* name, uintptr_t bindingAttr, uintptr_t binder, uintptr_t callConvention, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(TypeDelegator*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4FDA0BC))(this, name, bindingAttr, binder, callConvention, types, modifiers);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMethods(uintptr_t bindingAttr) {
		return ((T (*)(TypeDelegator*, uintptr_t))(Il2CppBase() + 0x4FDA108))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetNestedTypes(uintptr_t bindingAttr) {
		return ((T (*)(TypeDelegator*, uintptr_t))(Il2CppBase() + 0x4FDA13C))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetProperties(uintptr_t bindingAttr) {
		return ((T (*)(TypeDelegator*, uintptr_t))(Il2CppBase() + 0x4FDA170))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetPropertyImpl(Il2CppString* name, uintptr_t bindingAttr, uintptr_t binder, uintptr_t returnType, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(TypeDelegator*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4FDA1A4))(this, name, bindingAttr, binder, returnType, types, modifiers);
	}
	template <typename T = bool> T HasElementTypeImpl() {
		return ((T (*)(TypeDelegator*))(Il2CppBase() + 0x4FDA1F0))(this);
	}
	template <typename T = uintptr_t> T InvokeMember(Il2CppString* name, uintptr_t invokeAttr, uintptr_t binder, uintptr_t target, Il2CppArray<uintptr_t>* args, Il2CppArray<uintptr_t>* modifiers, uintptr_t culture, Il2CppArray<uintptr_t>* namedParameters) {
		return ((T (*)(TypeDelegator*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4FDA21C))(this, name, invokeAttr, binder, target, args, modifiers, culture, namedParameters);
	}
	template <typename T = bool> T IsArrayImpl() {
		return ((T (*)(TypeDelegator*))(Il2CppBase() + 0x4FDA278))(this);
	}
	template <typename T = bool> T IsByRefImpl() {
		return ((T (*)(TypeDelegator*))(Il2CppBase() + 0x4FDA2A4))(this);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(TypeDelegator*, uintptr_t, bool))(Il2CppBase() + 0x4FDA2D0))(this, attributeType, inherit);
	}
	template <typename T = bool> T IsPointerImpl() {
		return ((T (*)(TypeDelegator*))(Il2CppBase() + 0x4FDA304))(this);
	}
	template <typename T = bool> T IsPrimitiveImpl() {
		return ((T (*)(TypeDelegator*))(Il2CppBase() + 0x4FDA330))(this);
	}
	template <typename T = bool> T IsValueTypeImpl() {
		return ((T (*)(TypeDelegator*))(Il2CppBase() + 0x4FDA35C))(this);
	}
	template <typename T = int32_t> T get_MetadataToken() {
		return ((T (*)(TypeDelegator*))(Il2CppBase() + 0x4FDA388))(this);
	}

};

}
