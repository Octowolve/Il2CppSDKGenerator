#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class FieldInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "FieldInfo"));
	}


	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(FieldInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_FieldHandle() {
		return ((T (*)(FieldInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_FieldType() {
		return ((T (*)(FieldInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetValue(uintptr_t obj) {
		return ((T (*)(FieldInfo*, uintptr_t))(Il2CppBase() + 0x0))(this, obj);
	}
	template <typename T = uintptr_t> T get_MemberType() {
		return ((T (*)(FieldInfo*))(Il2CppBase() + 0x4FD0640))(this);
	}
	template <typename T = bool> T get_IsLiteral() {
		return ((T (*)(FieldInfo*))(Il2CppBase() + 0x4FD0648))(this);
	}
	template <typename T = bool> T get_IsStatic() {
		return ((T (*)(FieldInfo*))(Il2CppBase() + 0x4FD066C))(this);
	}
	template <typename T = bool> T get_IsInitOnly() {
		return ((T (*)(FieldInfo*))(Il2CppBase() + 0x4FD0690))(this);
	}
	template <typename T = bool> T get_IsPublic() {
		return ((T (*)(FieldInfo*))(Il2CppBase() + 0x4FD06B4))(this);
	}
	template <typename T = bool> T get_IsPrivate() {
		return ((T (*)(FieldInfo*))(Il2CppBase() + 0x4FD06E0))(this);
	}
	template <typename T = bool> T get_IsNotSerialized() {
		return ((T (*)(FieldInfo*))(Il2CppBase() + 0x4FD0708))(this);
	}
	template <typename T = void> T SetValue(uintptr_t obj, uintptr_t value, uintptr_t invokeAttr, uintptr_t binder, uintptr_t culture) {
		return ((T (*)(FieldInfo*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, obj, value, invokeAttr, binder, culture);
	}
	template <typename T = void> T SetValue_1(uintptr_t obj, uintptr_t value) {
		return ((T (*)(FieldInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD072C))(this, obj, value);
	}
	template <typename T = uintptr_t> static T internal_from_handle_type(uintptr_t field_handle, uintptr_t type_handle) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD0764))(0, field_handle, type_handle);
	}
	template <typename T = uintptr_t> static T GetFieldFromHandle(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FD0770))(0, handle);
	}
	template <typename T = int32_t> T GetFieldOffset() {
		return ((T (*)(FieldInfo*))(Il2CppBase() + 0x4FD0894))(this);
	}
	template <typename T = uintptr_t> T GetUnmanagedMarshal() {
		return ((T (*)(FieldInfo*))(Il2CppBase() + 0x4FD093C))(this);
	}
	template <typename T = uintptr_t> T get_UMarshal() {
		return ((T (*)(FieldInfo*))(Il2CppBase() + 0x4FD0940))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPseudoCustomAttributes() {
		return ((T (*)(FieldInfo*))(Il2CppBase() + 0x4FD0944))(this);
	}
	template <typename T = uintptr_t> T GetRawConstantValue() {
		return ((T (*)(FieldInfo*))(Il2CppBase() + 0x4FD0C44))(this);
	}

};

}
