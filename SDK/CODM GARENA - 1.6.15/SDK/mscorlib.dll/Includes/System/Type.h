#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Type
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Type"));
	}

	template <typename T = uintptr_t> static T& DefaultBindingFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _impl() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = char> static T& Delimiter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& EmptyTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& FilterAttribute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& FilterName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& FilterNameIgnoreCase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& Missing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> static T FilterName_impl(uintptr_t m, uintptr_t filterCriteria) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9186C))(0, m, filterCriteria);
	}
	template <typename T = bool> static T FilterNameIgnoreCase_impl(uintptr_t m, uintptr_t filterCriteria) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D91B28))(0, m, filterCriteria);
	}
	template <typename T = bool> static T FilterAttribute_impl(uintptr_t m, uintptr_t filterCriteria) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D91E68))(0, m, filterCriteria);
	}
	template <typename T = uintptr_t> T get_Assembly() {
		return ((T (*)(Type*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_AssemblyQualifiedName() {
		return ((T (*)(Type*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D92324))(this);
	}
	template <typename T = uintptr_t> T get_BaseType() {
		return ((T (*)(Type*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_DeclaringType() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D92334))(this);
	}
	template <typename T = Il2CppString*> T get_FullName() {
		return ((T (*)(Type*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_HasElementType() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D9233C))(this);
	}
	template <typename T = bool> T get_IsAbstract() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D9234C))(this);
	}
	template <typename T = bool> T get_IsArray() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D92370))(this);
	}
	template <typename T = bool> T get_IsByRef() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D92380))(this);
	}
	template <typename T = bool> T get_IsClass() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D92390))(this);
	}
	template <typename T = bool> T get_IsContextful() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D92410))(this);
	}
	template <typename T = bool> T get_IsEnum() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D92420))(this);
	}
	template <typename T = bool> T get_IsExplicitLayout() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D925FC))(this);
	}
	template <typename T = bool> T get_IsInterface() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D923DC))(this);
	}
	template <typename T = bool> T get_IsMarshalByRef() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D92628))(this);
	}
	template <typename T = bool> T get_IsNestedPublic() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D92638))(this);
	}
	template <typename T = bool> T get_IsPointer() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D92664))(this);
	}
	template <typename T = bool> T get_IsPrimitive() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D92674))(this);
	}
	template <typename T = bool> T get_IsPublic() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D92684))(this);
	}
	template <typename T = bool> T get_IsSealed() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D926AC))(this);
	}
	template <typename T = bool> T get_IsSerializable() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D926D0))(this);
	}
	template <typename T = bool> T get_IsValueType() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D92400))(this);
	}
	template <typename T = uintptr_t> T get_MemberType() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D929F0))(this);
	}
	template <typename T = uintptr_t> T get_Module() {
		return ((T (*)(Type*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Namespace() {
		return ((T (*)(Type*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_ReflectedType() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D929F8))(this);
	}
	template <typename T = uintptr_t> T get_TypeHandle() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D92A00))(this);
	}
	template <typename T = uintptr_t> T get_UnderlyingSystemType() {
		return ((T (*)(Type*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Equals(uintptr_t o) {
		return ((T (*)(Type*, uintptr_t))(Il2CppBase() + 0x4D92AB4))(this, o);
	}
	template <typename T = bool> T Equals_1(uintptr_t o) {
		return ((T (*)(Type*, uintptr_t))(Il2CppBase() + 0x4D92B74))(this, o);
	}
	template <typename T = bool> T EqualsInternal(uintptr_t type) {
		return ((T (*)(Type*, uintptr_t))(Il2CppBase() + 0x4D92BE0))(this, type);
	}
	template <typename T = uintptr_t> static T internal_from_handle(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D92BE4))(0, handle);
	}
	template <typename T = uintptr_t> static T internal_from_name(Il2CppString* name, bool throwOnError, bool ignoreCase) {
		return ((T (*)(void *, Il2CppString*, bool, bool))(Il2CppBase() + 0x4D92BEC))(0, name, throwOnError, ignoreCase);
	}
	template <typename T = uintptr_t> static T GetType(Il2CppString* typeName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4D92BFC))(0, typeName);
	}
	template <typename T = uintptr_t> static T GetType_1(Il2CppString* typeName, bool throwOnError) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x4D92CFC))(0, typeName, throwOnError);
	}
	template <typename T = uintptr_t> static T GetTypeCodeInternal(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D92F04))(0, type);
	}
	template <typename T = uintptr_t> static T GetTypeCode(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D92F0C))(0, type);
	}
	template <typename T = uintptr_t> static T GetTypeFromHandle(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D924F0))(0, handle);
	}
	template <typename T = uintptr_t> static T GetTypeHandle(uintptr_t o) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D93054))(0, o);
	}
	template <typename T = bool> static T type_is_subtype_of(uintptr_t a, uintptr_t b, bool check_interfaces) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4D929E0))(0, a, b, check_interfaces);
	}
	template <typename T = bool> static T type_is_assignable_from(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D93128))(0, a, b);
	}
	template <typename T = uintptr_t> T GetType_2() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D93134))(this);
	}
	template <typename T = bool> T IsSubclassOf(uintptr_t c) {
		return ((T (*)(Type*, uintptr_t))(Il2CppBase() + 0x4D9313C))(this, c);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetInterfaces() {
		return ((T (*)(Type*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsAssignableFrom(uintptr_t c) {
		return ((T (*)(Type*, uintptr_t))(Il2CppBase() + 0x4D93264))(this, c);
	}
	template <typename T = bool> T IsInstanceOfType(uintptr_t o) {
		return ((T (*)(Type*, uintptr_t))(Il2CppBase() + 0x4D93414))(this, o);
	}
	template <typename T = int32_t> T GetArrayRank() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D93418))(this);
	}
	template <typename T = uintptr_t> T GetElementType() {
		return ((T (*)(Type*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetEvent(Il2CppString* name) {
		return ((T (*)(Type*, Il2CppString*))(Il2CppBase() + 0x4D934AC))(this, name);
	}
	template <typename T = uintptr_t> T GetEvent_1(Il2CppString* name, uintptr_t bindingAttr) {
		return ((T (*)(Type*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, name, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetEvents(uintptr_t bindingAttr) {
		return ((T (*)(Type*, uintptr_t))(Il2CppBase() + 0x0))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetField(Il2CppString* name) {
		return ((T (*)(Type*, Il2CppString*))(Il2CppBase() + 0x4D934C0))(this, name);
	}
	template <typename T = uintptr_t> T GetField_1(Il2CppString* name, uintptr_t bindingAttr) {
		return ((T (*)(Type*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, name, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFields() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D934D4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFields_1(uintptr_t bindingAttr) {
		return ((T (*)(Type*, uintptr_t))(Il2CppBase() + 0x0))(this, bindingAttr);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D934E8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMember(Il2CppString* name) {
		return ((T (*)(Type*, Il2CppString*))(Il2CppBase() + 0x4D93548))(this, name);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMember_1(Il2CppString* name, uintptr_t bindingAttr) {
		return ((T (*)(Type*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4D93578))(this, name, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMember_2(Il2CppString* name, uintptr_t type, uintptr_t bindingAttr) {
		return ((T (*)(Type*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D935A8))(this, name, type, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMembers() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D93740))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMembers_1(uintptr_t bindingAttr) {
		return ((T (*)(Type*, uintptr_t))(Il2CppBase() + 0x0))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetMethod(Il2CppString* name) {
		return ((T (*)(Type*, Il2CppString*))(Il2CppBase() + 0x4D93754))(this, name);
	}
	template <typename T = uintptr_t> T GetMethod_1(Il2CppString* name, uintptr_t bindingAttr) {
		return ((T (*)(Type*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4D93850))(this, name, bindingAttr);
	}
	template <typename T = uintptr_t> T GetMethod_2(Il2CppString* name, Il2CppArray<uintptr_t>* types) {
		return ((T (*)(Type*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D93950))(this, name, types);
	}
	template <typename T = uintptr_t> T GetMethod_3(Il2CppString* name, uintptr_t bindingAttr, uintptr_t binder, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(Type*, Il2CppString*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D93B04))(this, name, bindingAttr, binder, types, modifiers);
	}
	template <typename T = uintptr_t> T GetMethod_4(Il2CppString* name, uintptr_t bindingAttr, uintptr_t binder, uintptr_t callConvention, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(Type*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D93980))(this, name, bindingAttr, binder, callConvention, types, modifiers);
	}
	template <typename T = uintptr_t> T GetMethodImpl(Il2CppString* name, uintptr_t bindingAttr, uintptr_t binder, uintptr_t callConvention, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(Type*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, name, bindingAttr, binder, callConvention, types, modifiers);
	}
	template <typename T = uintptr_t> T GetMethodImplInternal(Il2CppString* name, uintptr_t bindingAttr, uintptr_t binder, uintptr_t callConvention, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(Type*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D93B2C))(this, name, bindingAttr, binder, callConvention, types, modifiers);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMethods() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D93B68))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMethods_1(uintptr_t bindingAttr) {
		return ((T (*)(Type*, uintptr_t))(Il2CppBase() + 0x0))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetNestedTypes(uintptr_t bindingAttr) {
		return ((T (*)(Type*, uintptr_t))(Il2CppBase() + 0x0))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetProperties() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D93B7C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetProperties_1(uintptr_t bindingAttr) {
		return ((T (*)(Type*, uintptr_t))(Il2CppBase() + 0x0))(this, bindingAttr);
	}
	template <typename T = uintptr_t> T GetProperty(Il2CppString* name) {
		return ((T (*)(Type*, Il2CppString*))(Il2CppBase() + 0x4D93B90))(this, name);
	}
	template <typename T = uintptr_t> T GetProperty_1(Il2CppString* name, uintptr_t bindingAttr) {
		return ((T (*)(Type*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4D93C88))(this, name, bindingAttr);
	}
	template <typename T = uintptr_t> T GetProperty_2(Il2CppString* name, uintptr_t returnType) {
		return ((T (*)(Type*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4D93D84))(this, name, returnType);
	}
	template <typename T = uintptr_t> T GetProperty_3(Il2CppString* name, uintptr_t returnType, Il2CppArray<uintptr_t>* types) {
		return ((T (*)(Type*, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D93E80))(this, name, returnType, types);
	}
	template <typename T = uintptr_t> T GetProperty_4(Il2CppString* name, uintptr_t bindingAttr, uintptr_t binder, uintptr_t returnType, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(Type*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D93EA8))(this, name, bindingAttr, binder, returnType, types, modifiers);
	}
	template <typename T = uintptr_t> T GetPropertyImpl(Il2CppString* name, uintptr_t bindingAttr, uintptr_t binder, uintptr_t returnType, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(Type*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, name, bindingAttr, binder, returnType, types, modifiers);
	}
	template <typename T = uintptr_t> T GetPropertyImplInternal(Il2CppString* name, uintptr_t bindingAttr, uintptr_t binder, uintptr_t returnType, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(Type*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D9402C))(this, name, bindingAttr, binder, returnType, types, modifiers);
	}
	template <typename T = uintptr_t> T GetConstructorImpl(uintptr_t bindingAttr, uintptr_t binder, uintptr_t callConvention, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(Type*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, bindingAttr, binder, callConvention, types, modifiers);
	}
	template <typename T = uintptr_t> T GetAttributeFlagsImpl() {
		return ((T (*)(Type*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T HasElementTypeImpl() {
		return ((T (*)(Type*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsArrayImpl() {
		return ((T (*)(Type*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsByRefImpl() {
		return ((T (*)(Type*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsPointerImpl() {
		return ((T (*)(Type*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsPrimitiveImpl() {
		return ((T (*)(Type*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> static T IsArrayImpl_1(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D94068))(0, type);
	}
	template <typename T = bool> T IsValueTypeImpl() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D94070))(this);
	}
	template <typename T = bool> T IsContextfulImpl() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D941F4))(this);
	}
	template <typename T = bool> T IsMarshalByRefImpl() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D942D4))(this);
	}
	template <typename T = uintptr_t> T GetConstructor(Il2CppArray<uintptr_t>* types) {
		return ((T (*)(Type*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D943B4))(this, types);
	}
	template <typename T = uintptr_t> T GetConstructor_1(uintptr_t bindingAttr, uintptr_t binder, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(Type*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D94528))(this, bindingAttr, binder, types, modifiers);
	}
	template <typename T = uintptr_t> T GetConstructor_2(uintptr_t bindingAttr, uintptr_t binder, uintptr_t callConvention, Il2CppArray<uintptr_t>* types, Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(Type*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D943E0))(this, bindingAttr, binder, callConvention, types, modifiers);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetConstructors() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D9454C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetConstructors_1(uintptr_t bindingAttr) {
		return ((T (*)(Type*, uintptr_t))(Il2CppBase() + 0x0))(this, bindingAttr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T FindMembers(uintptr_t memberType, uintptr_t bindingAttr, uintptr_t filter, uintptr_t filterCriteria) {
		return ((T (*)(Type*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D94560))(this, memberType, bindingAttr, filter, filterCriteria);
	}
	template <typename T = uintptr_t> T InvokeMember(Il2CppString* name, uintptr_t invokeAttr, uintptr_t binder, uintptr_t target, Il2CppArray<uintptr_t>* args, Il2CppArray<uintptr_t>* modifiers, uintptr_t culture, Il2CppArray<uintptr_t>* namedParameters) {
		return ((T (*)(Type*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, name, invokeAttr, binder, target, args, modifiers, culture, namedParameters);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D94D60))(this);
	}
	template <typename T = bool> T get_IsSystemType() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D92940))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetGenericArguments() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D94D70))(this);
	}
	template <typename T = bool> T get_ContainsGenericParameters() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D94E04))(this);
	}
	template <typename T = bool> T get_IsGenericTypeDefinition() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D94E0C))(this);
	}
	template <typename T = uintptr_t> T GetGenericTypeDefinition_impl() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D94E10))(this);
	}
	template <typename T = uintptr_t> T GetGenericTypeDefinition() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D94E14))(this);
	}
	template <typename T = bool> T get_IsGenericType() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D94EBC))(this);
	}
	template <typename T = uintptr_t> static T MakeGenericType(uintptr_t gt, Il2CppArray<uintptr_t>* types) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D94EC0))(0, gt, types);
	}
	template <typename T = uintptr_t> T MakeGenericType_1(Il2CppArray<uintptr_t>* typeArguments) {
		return ((T (*)(Type*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D94ECC))(this, typeArguments);
	}
	template <typename T = bool> T get_IsGenericParameter() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D95398))(this);
	}
	template <typename T = bool> T get_IsNested() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D953A0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetGenericParameterConstraints_impl() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D953C4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetGenericParameterConstraints() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D953C8))(this);
	}
	template <typename T = uintptr_t> T make_array_type(int32_t rank) {
		return ((T (*)(Type*, int32_t))(Il2CppBase() + 0x4D95488))(this, rank);
	}
	template <typename T = uintptr_t> T MakeArrayType() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D9548C))(this);
	}
	template <typename T = uintptr_t> T make_byref_type() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D95494))(this);
	}
	template <typename T = uintptr_t> T MakeByRefType() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D95498))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPseudoCustomAttributes() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D9549C))(this);
	}
	template <typename T = bool> T get_IsUserType() {
		return ((T (*)(Type*))(Il2CppBase() + 0x4D956A8))(this);
	}

};

}
