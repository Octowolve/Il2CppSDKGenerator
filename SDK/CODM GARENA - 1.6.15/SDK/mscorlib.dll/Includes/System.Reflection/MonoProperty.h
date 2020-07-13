#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class MonoProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "MonoProperty"));
	}

	template <typename T = uintptr_t> T& klass() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& prop() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& info() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& cached() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& cached_getter() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CachePropertyInfo(uintptr_t flags) {
		return ((T (*)(MonoProperty*, uintptr_t))(Il2CppBase() + 0x4FD6988))(this, flags);
	}
	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(MonoProperty*))(Il2CppBase() + 0x4FD69D8))(this);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(MonoProperty*))(Il2CppBase() + 0x4FD6A14))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(MonoProperty*))(Il2CppBase() + 0x4FD6A58))(this);
	}
	template <typename T = uintptr_t> T get_PropertyType() {
		return ((T (*)(MonoProperty*))(Il2CppBase() + 0x4FD6A9C))(this);
	}
	template <typename T = uintptr_t> T get_ReflectedType() {
		return ((T (*)(MonoProperty*))(Il2CppBase() + 0x4FD6B70))(this);
	}
	template <typename T = uintptr_t> T get_DeclaringType() {
		return ((T (*)(MonoProperty*))(Il2CppBase() + 0x4FD6BAC))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(MonoProperty*))(Il2CppBase() + 0x4FD6BE8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAccessors(bool nonPublic) {
		return ((T (*)(MonoProperty*, bool))(Il2CppBase() + 0x4FD6C24))(this, nonPublic);
	}
	template <typename T = uintptr_t> T GetGetMethod(bool nonPublic) {
		return ((T (*)(MonoProperty*, bool))(Il2CppBase() + 0x4FD6E28))(this, nonPublic);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetIndexParameters() {
		return ((T (*)(MonoProperty*))(Il2CppBase() + 0x4FD6E98))(this);
	}
	template <typename T = uintptr_t> T GetSetMethod(bool nonPublic) {
		return ((T (*)(MonoProperty*, bool))(Il2CppBase() + 0x4FD7158))(this, nonPublic);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(MonoProperty*, uintptr_t, bool))(Il2CppBase() + 0x4FD71C8))(this, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(MonoProperty*, bool))(Il2CppBase() + 0x4FD7288))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(MonoProperty*, uintptr_t, bool))(Il2CppBase() + 0x4FD7334))(this, attributeType, inherit);
	}
	template <typename T = uintptr_t> static T GetterAdapterFrame(void* getter, uintptr_t obj) {
		return ((T (*)(void *, void*, uintptr_t))(Il2CppBase() + 0x1E74380))(0, getter, obj);
	}
	template <typename T = uintptr_t> static T StaticGetterAdapterFrame(void* getter, uintptr_t obj) {
		return ((T (*)(void *, void*, uintptr_t))(Il2CppBase() + 0x1E743E8))(0, getter, obj);
	}
	template <typename T = uintptr_t> static T CreateGetterDelegate(uintptr_t method) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FD73F4))(0, method);
	}
	template <typename T = uintptr_t> T GetValue(uintptr_t obj, Il2CppArray<uintptr_t>* index) {
		return ((T (*)(MonoProperty*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4FD7918))(this, obj, index);
	}
	template <typename T = uintptr_t> T GetValue_1(uintptr_t obj, uintptr_t invokeAttr, uintptr_t binder, Il2CppArray<uintptr_t>* index, uintptr_t culture) {
		return ((T (*)(MonoProperty*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4FD7950))(this, obj, invokeAttr, binder, index, culture);
	}
	template <typename T = void> T SetValue(uintptr_t obj, uintptr_t value, uintptr_t invokeAttr, uintptr_t binder, Il2CppArray<uintptr_t>* index, uintptr_t culture) {
		return ((T (*)(MonoProperty*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4FD7BDC))(this, obj, value, invokeAttr, binder, index, culture);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MonoProperty*))(Il2CppBase() + 0x4FD7E98))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetOptionalCustomModifiers() {
		return ((T (*)(MonoProperty*))(Il2CppBase() + 0x4FD7FC0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetRequiredCustomModifiers() {
		return ((T (*)(MonoProperty*))(Il2CppBase() + 0x4FD8094))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(MonoProperty*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD815C))(this, info, context);
	}

};

}
