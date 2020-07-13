#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class PropertyInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "PropertyInfo"));
	}


	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(PropertyInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(PropertyInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(PropertyInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_MemberType() {
		return ((T (*)(PropertyInfo*))(Il2CppBase() + 0x4FD9290))(this);
	}
	template <typename T = uintptr_t> T get_PropertyType() {
		return ((T (*)(PropertyInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAccessors(bool nonPublic) {
		return ((T (*)(PropertyInfo*, bool))(Il2CppBase() + 0x0))(this, nonPublic);
	}
	template <typename T = uintptr_t> T GetGetMethod() {
		return ((T (*)(PropertyInfo*))(Il2CppBase() + 0x4FD9298))(this);
	}
	template <typename T = uintptr_t> T GetGetMethod_1(bool nonPublic) {
		return ((T (*)(PropertyInfo*, bool))(Il2CppBase() + 0x0))(this, nonPublic);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetIndexParameters() {
		return ((T (*)(PropertyInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetSetMethod() {
		return ((T (*)(PropertyInfo*))(Il2CppBase() + 0x4FD92AC))(this);
	}
	template <typename T = uintptr_t> T GetSetMethod_1(bool nonPublic) {
		return ((T (*)(PropertyInfo*, bool))(Il2CppBase() + 0x0))(this, nonPublic);
	}
	template <typename T = uintptr_t> T GetValue(uintptr_t obj, Il2CppArray<uintptr_t>* index) {
		return ((T (*)(PropertyInfo*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4FD92C0))(this, obj, index);
	}
	template <typename T = uintptr_t> T GetValue_1(uintptr_t obj, uintptr_t invokeAttr, uintptr_t binder, Il2CppArray<uintptr_t>* index, uintptr_t culture) {
		return ((T (*)(PropertyInfo*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(this, obj, invokeAttr, binder, index, culture);
	}
	template <typename T = void> T SetValue(uintptr_t obj, uintptr_t value, Il2CppArray<uintptr_t>* index) {
		return ((T (*)(PropertyInfo*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4FD92F8))(this, obj, value, index);
	}
	template <typename T = void> T SetValue_1(uintptr_t obj, uintptr_t value, uintptr_t invokeAttr, uintptr_t binder, Il2CppArray<uintptr_t>* index, uintptr_t culture) {
		return ((T (*)(PropertyInfo*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(this, obj, value, invokeAttr, binder, index, culture);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetOptionalCustomModifiers() {
		return ((T (*)(PropertyInfo*))(Il2CppBase() + 0x4FD9334))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetRequiredCustomModifiers() {
		return ((T (*)(PropertyInfo*))(Il2CppBase() + 0x4FD93E4))(this);
	}

};

}
