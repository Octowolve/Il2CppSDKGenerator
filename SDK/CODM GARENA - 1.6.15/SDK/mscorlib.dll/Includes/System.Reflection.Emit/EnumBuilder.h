#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class EnumBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "EnumBuilder"));
	}

	template <typename T = uintptr_t> T& _tb() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _underlyingType() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Assembly() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456BBE0))(this);
	}
	template <typename T = Il2CppString*> T get_AssemblyQualifiedName() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456BC34))(this);
	}
	template <typename T = uintptr_t> T get_BaseType() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456BD64))(this);
	}
	template <typename T = uintptr_t> T get_DeclaringType() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456BD90))(this);
	}
	template <typename T = Il2CppString*> T get_FullName() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456BDBC))(this);
	}
	template <typename T = uintptr_t> T get_Module() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456BDE8))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456BE0C))(this);
	}
	template <typename T = Il2CppString*> T get_Namespace() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456BE30))(this);
	}
	template <typename T = uintptr_t> T get_ReflectedType() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456BE5C))(this);
	}
	template <typename T = uintptr_t> T get_TypeHandle() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456BE88))(this);
	}
	template <typename T = uintptr_t> T get_UnderlyingSystemType() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456BEEC))(this);
	}
	template <typename T = uintptr_t> T GetAttributeFlagsImpl() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456BEF4))(this);
	}
	template <typename T = uintptr_t> T GetConstructorImpl(uintptr_t bindingAttr, uintptr_t binder, uintptr_t callConvention, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(EnumBuilder*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x456BF18))(this, bindingAttr, binder, callConvention, types, modifiers);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetConstructors(uintptr_t bindingAttr) {
		return ((T (*)(EnumBuilder*, uintptr_t))(Il2CppBase() + 0x456BF60))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(EnumBuilder*, bool))(Il2CppBase() + 0x456C064))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(EnumBuilder*, uintptr_t, bool))(Il2CppBase() + 0x456C0D0))(this, attributeType, inherit);
	}
	template <typename T = uintptr_t> T GetElementType() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456C144))(this);
	}
	template <typename T = uintptr_t> T GetEvent(Il2CppString* name, uintptr_t bindingAttr) {
		return ((T (*)(EnumBuilder*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x456C1FC))(this, name, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetEvents(uintptr_t bindingAttr) {
		return ((T (*)(EnumBuilder*, uintptr_t))(Il2CppBase() + 0x456C270))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetField(Il2CppString* name, uintptr_t bindingAttr) {
		return ((T (*)(EnumBuilder*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x456C398))(this, name, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFields(uintptr_t bindingAttr) {
		return ((T (*)(EnumBuilder*, uintptr_t))(Il2CppBase() + 0x456C560))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetInterfaces() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456C7AC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMember(Il2CppString* name, uintptr_t type, uintptr_t bindingAttr) {
		return ((T (*)(EnumBuilder*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x456C91C))(this, name, type, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMembers(uintptr_t bindingAttr) {
		return ((T (*)(EnumBuilder*, uintptr_t))(Il2CppBase() + 0x456C9AC))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetMethodImpl(Il2CppString* name, uintptr_t bindingAttr, uintptr_t binder, uintptr_t callConvention, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(EnumBuilder*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x456CA18))(this, name, bindingAttr, binder, callConvention, types, modifiers);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMethods(uintptr_t bindingAttr) {
		return ((T (*)(EnumBuilder*, uintptr_t))(Il2CppBase() + 0x456CA78))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetNestedTypes(uintptr_t bindingAttr) {
		return ((T (*)(EnumBuilder*, uintptr_t))(Il2CppBase() + 0x456CAD8))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetProperties(uintptr_t bindingAttr) {
		return ((T (*)(EnumBuilder*, uintptr_t))(Il2CppBase() + 0x456CD38))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetPropertyImpl(Il2CppString* name, uintptr_t bindingAttr, uintptr_t binder, uintptr_t returnType, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(EnumBuilder*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x456CFC0))(this, name, bindingAttr, binder, returnType, types, modifiers);
	}
	template <typename T = bool> T HasElementTypeImpl() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456D08C))(this);
	}
	template <typename T = uintptr_t> T InvokeMember(Il2CppString* name, uintptr_t invokeAttr, uintptr_t binder, uintptr_t target, Il2CppArray<uintptr_t>* args, Il2CppArray<uintptr_t>* modifiers, uintptr_t culture, Il2CppArray<uintptr_t>* namedParameters) {
		return ((T (*)(EnumBuilder*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x456D0B8))(this, name, invokeAttr, binder, target, args, modifiers, culture, namedParameters);
	}
	template <typename T = bool> T IsArrayImpl() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456D184))(this);
	}
	template <typename T = bool> T IsByRefImpl() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456D18C))(this);
	}
	template <typename T = bool> T IsPointerImpl() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456D194))(this);
	}
	template <typename T = bool> T IsPrimitiveImpl() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456D19C))(this);
	}
	template <typename T = bool> T IsValueTypeImpl() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456D1A4))(this);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(EnumBuilder*, uintptr_t, bool))(Il2CppBase() + 0x456D1AC))(this, attributeType, inherit);
	}
	template <typename T = uintptr_t> T MakeArrayType() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456D2E0))(this);
	}
	template <typename T = uintptr_t> T MakeByRefType() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456D378))(this);
	}
	template <typename T = uintptr_t> T CreateNotSupportedException() {
		return ((T (*)(EnumBuilder*))(Il2CppBase() + 0x456CFD8))(this);
	}

};

}
