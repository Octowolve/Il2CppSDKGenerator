#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class GenericTypeParameterBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "GenericTypeParameterBuilder"));
	}

	template <typename T = uintptr_t> T& tbuilder() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mbuilder() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& base_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& iface_constraints() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T IsSubclassOf(uintptr_t c) {
		return ((T (*)(GenericTypeParameterBuilder*, uintptr_t))(Il2CppBase() + 0x456D724))(this, c);
	}
	template <typename T = uintptr_t> T GetAttributeFlagsImpl() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456D8D8))(this);
	}
	template <typename T = uintptr_t> T GetConstructorImpl(uintptr_t bindingAttr, uintptr_t binder, uintptr_t callConvention, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(GenericTypeParameterBuilder*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x456D9C4))(this, bindingAttr, binder, callConvention, types, modifiers);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetConstructors(uintptr_t bindingAttr) {
		return ((T (*)(GenericTypeParameterBuilder*, uintptr_t))(Il2CppBase() + 0x456D9DC))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetEvent(Il2CppString* name, uintptr_t bindingAttr) {
		return ((T (*)(GenericTypeParameterBuilder*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x456D9F4))(this, name, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetEvents(uintptr_t bindingAttr) {
		return ((T (*)(GenericTypeParameterBuilder*, uintptr_t))(Il2CppBase() + 0x456DA0C))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetField(Il2CppString* name, uintptr_t bindingAttr) {
		return ((T (*)(GenericTypeParameterBuilder*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x456DA24))(this, name, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFields(uintptr_t bindingAttr) {
		return ((T (*)(GenericTypeParameterBuilder*, uintptr_t))(Il2CppBase() + 0x456DA3C))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetInterfaces() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DA54))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMembers(uintptr_t bindingAttr) {
		return ((T (*)(GenericTypeParameterBuilder*, uintptr_t))(Il2CppBase() + 0x456DA6C))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMember(Il2CppString* name, uintptr_t type, uintptr_t bindingAttr) {
		return ((T (*)(GenericTypeParameterBuilder*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x456DA84))(this, name, type, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMethods(uintptr_t bindingAttr) {
		return ((T (*)(GenericTypeParameterBuilder*, uintptr_t))(Il2CppBase() + 0x456DA9C))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetMethodImpl(Il2CppString* name, uintptr_t bindingAttr, uintptr_t binder, uintptr_t callConvention, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(GenericTypeParameterBuilder*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x456DAB4))(this, name, bindingAttr, binder, callConvention, types, modifiers);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetNestedTypes(uintptr_t bindingAttr) {
		return ((T (*)(GenericTypeParameterBuilder*, uintptr_t))(Il2CppBase() + 0x456DACC))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetProperties(uintptr_t bindingAttr) {
		return ((T (*)(GenericTypeParameterBuilder*, uintptr_t))(Il2CppBase() + 0x456DAE4))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetPropertyImpl(Il2CppString* name, uintptr_t bindingAttr, uintptr_t binder, uintptr_t returnType, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(GenericTypeParameterBuilder*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x456DAFC))(this, name, bindingAttr, binder, returnType, types, modifiers);
	}
	template <typename T = bool> T HasElementTypeImpl() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DB14))(this);
	}
	template <typename T = bool> T IsAssignableFrom(uintptr_t c) {
		return ((T (*)(GenericTypeParameterBuilder*, uintptr_t))(Il2CppBase() + 0x456DB1C))(this, c);
	}
	template <typename T = bool> T IsInstanceOfType(uintptr_t o) {
		return ((T (*)(GenericTypeParameterBuilder*, uintptr_t))(Il2CppBase() + 0x456DB34))(this, o);
	}
	template <typename T = bool> T IsArrayImpl() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DB4C))(this);
	}
	template <typename T = bool> T IsByRefImpl() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DB54))(this);
	}
	template <typename T = bool> T IsPointerImpl() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DB5C))(this);
	}
	template <typename T = bool> T IsPrimitiveImpl() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DB64))(this);
	}
	template <typename T = bool> T IsValueTypeImpl() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DB6C))(this);
	}
	template <typename T = uintptr_t> T InvokeMember(Il2CppString* name, uintptr_t invokeAttr, uintptr_t binder, uintptr_t target, Il2CppArray<uintptr_t>* args, Il2CppArray<uintptr_t>* modifiers, uintptr_t culture, Il2CppArray<uintptr_t>* namedParameters) {
		return ((T (*)(GenericTypeParameterBuilder*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x456DB94))(this, name, invokeAttr, binder, target, args, modifiers, culture, namedParameters);
	}
	template <typename T = uintptr_t> T GetElementType() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DBAC))(this);
	}
	template <typename T = uintptr_t> T get_UnderlyingSystemType() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DBC4))(this);
	}
	template <typename T = uintptr_t> T get_Assembly() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DBC8))(this);
	}
	template <typename T = Il2CppString*> T get_AssemblyQualifiedName() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DBF0))(this);
	}
	template <typename T = uintptr_t> T get_BaseType() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456D8D0))(this);
	}
	template <typename T = Il2CppString*> T get_FullName() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DBF8))(this);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(GenericTypeParameterBuilder*, uintptr_t, bool))(Il2CppBase() + 0x456DC00))(this, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(GenericTypeParameterBuilder*, bool))(Il2CppBase() + 0x456DC18))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(GenericTypeParameterBuilder*, uintptr_t, bool))(Il2CppBase() + 0x456DC30))(this, attributeType, inherit);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DC48))(this);
	}
	template <typename T = Il2CppString*> T get_Namespace() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DC50))(this);
	}
	template <typename T = uintptr_t> T get_Module() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DC58))(this);
	}
	template <typename T = uintptr_t> T get_DeclaringType() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DC7C))(this);
	}
	template <typename T = uintptr_t> T get_ReflectedType() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DC9C))(this);
	}
	template <typename T = uintptr_t> T get_TypeHandle() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DCB4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetGenericArguments() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DCCC))(this);
	}
	template <typename T = uintptr_t> T GetGenericTypeDefinition() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DD60))(this);
	}
	template <typename T = bool> T get_ContainsGenericParameters() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DDF4))(this);
	}
	template <typename T = bool> T get_IsGenericParameter() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DDFC))(this);
	}
	template <typename T = bool> T get_IsGenericType() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DE04))(this);
	}
	template <typename T = bool> T get_IsGenericTypeDefinition() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DE0C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetGenericParameterConstraints() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456DE14))(this);
	}
	template <typename T = uintptr_t> T not_supported() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456D848))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456E0B0))(this);
	}
	template <typename T = bool> T Equals(uintptr_t o) {
		return ((T (*)(GenericTypeParameterBuilder*, uintptr_t))(Il2CppBase() + 0x456E0B8))(this, o);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456E0C0))(this);
	}
	template <typename T = uintptr_t> T MakeArrayType() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456E0C8))(this);
	}
	template <typename T = uintptr_t> T MakeByRefType() {
		return ((T (*)(GenericTypeParameterBuilder*))(Il2CppBase() + 0x456E160))(this);
	}
	template <typename T = uintptr_t> T MakeGenericType(Il2CppArray<uintptr_t>* typeArguments) {
		return ((T (*)(GenericTypeParameterBuilder*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x456E1F0))(this, typeArguments);
	}

};

}
