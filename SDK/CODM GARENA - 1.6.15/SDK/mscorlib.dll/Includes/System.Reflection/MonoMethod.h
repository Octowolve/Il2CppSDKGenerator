#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class MonoMethod
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "MonoMethod"));
	}

	template <typename T = uintptr_t> T& mhandle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& reftype() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> static T get_name(uintptr_t method) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FD3A28))(0, method);
	}
	template <typename T = uintptr_t> static T get_base_definition(uintptr_t method) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FD5444))(0, method);
	}
	template <typename T = uintptr_t> T GetBaseDefinition() {
		return ((T (*)(MonoMethod*))(Il2CppBase() + 0x4FD544C))(this);
	}
	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(MonoMethod*))(Il2CppBase() + 0x4FD5450))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetParameters() {
		return ((T (*)(MonoMethod*))(Il2CppBase() + 0x4FD54BC))(this);
	}
	template <typename T = uintptr_t> T InternalInvoke(uintptr_t obj, Il2CppArray<uintptr_t>* parameters, uintptr_t* exc) {
		return ((T (*)(MonoMethod*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x4FD5590))(this, obj, parameters, exc);
	}
	template <typename T = uintptr_t> T Invoke(uintptr_t obj, uintptr_t invokeAttr, uintptr_t binder, Il2CppArray<uintptr_t>* parameters, uintptr_t culture) {
		return ((T (*)(MonoMethod*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4FD5594))(this, obj, invokeAttr, binder, parameters, culture);
	}
	template <typename T = uintptr_t> T get_MethodHandle() {
		return ((T (*)(MonoMethod*))(Il2CppBase() + 0x4FD5A34))(this);
	}
	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(MonoMethod*))(Il2CppBase() + 0x4FD5A64))(this);
	}
	template <typename T = uintptr_t> T get_CallingConvention() {
		return ((T (*)(MonoMethod*))(Il2CppBase() + 0x4FD5A98))(this);
	}
	template <typename T = uintptr_t> T get_ReflectedType() {
		return ((T (*)(MonoMethod*))(Il2CppBase() + 0x4FD5ACC))(this);
	}
	template <typename T = uintptr_t> T get_DeclaringType() {
		return ((T (*)(MonoMethod*))(Il2CppBase() + 0x4FD5AD4))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(MonoMethod*))(Il2CppBase() + 0x4FD5B08))(this);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(MonoMethod*, uintptr_t, bool))(Il2CppBase() + 0x4FD5B2C))(this, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(MonoMethod*, bool))(Il2CppBase() + 0x4FD5BF0))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(MonoMethod*, uintptr_t, bool))(Il2CppBase() + 0x4FD5CA0))(this, attributeType, inherit);
	}
	template <typename T = uintptr_t> static T GetDllImportAttribute(uintptr_t mhandle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FD5D64))(0, mhandle);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPseudoCustomAttributes() {
		return ((T (*)(MonoMethod*))(Il2CppBase() + 0x4FD5D6C))(this);
	}
	template <typename T = bool> static T ShouldPrintFullName(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FD5F98))(0, type);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MonoMethod*))(Il2CppBase() + 0x4FD6048))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(MonoMethod*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD6500))(this, info, context);
	}
	template <typename T = uintptr_t> T MakeGenericMethod(Il2CppArray<uintptr_t>* methodInstantiation) {
		return ((T (*)(MonoMethod*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4FD65CC))(this, methodInstantiation);
	}
	template <typename T = uintptr_t> T MakeGenericMethod_impl(Il2CppArray<uintptr_t>* types) {
		return ((T (*)(MonoMethod*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4FD680C))(this, types);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetGenericArguments() {
		return ((T (*)(MonoMethod*))(Il2CppBase() + 0x4FD6810))(this);
	}
	template <typename T = bool> T get_IsGenericMethodDefinition() {
		return ((T (*)(MonoMethod*))(Il2CppBase() + 0x4FD6814))(this);
	}
	template <typename T = bool> T get_IsGenericMethod() {
		return ((T (*)(MonoMethod*))(Il2CppBase() + 0x4FD6818))(this);
	}
	template <typename T = bool> T get_ContainsGenericParameters() {
		return ((T (*)(MonoMethod*))(Il2CppBase() + 0x4FD681C))(this);
	}

};

}
