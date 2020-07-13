#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class MonoField
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "MonoField"));
	}

	template <typename T = uintptr_t> T& klass() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& fhandle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& attrs() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(MonoField*))(Il2CppBase() + 0x4FD455C))(this);
	}
	template <typename T = uintptr_t> T get_FieldHandle() {
		return ((T (*)(MonoField*))(Il2CppBase() + 0x4FD4564))(this);
	}
	template <typename T = uintptr_t> T get_FieldType() {
		return ((T (*)(MonoField*))(Il2CppBase() + 0x4FD456C))(this);
	}
	template <typename T = uintptr_t> T GetParentType(bool declaring) {
		return ((T (*)(MonoField*, bool))(Il2CppBase() + 0x4FD4574))(this, declaring);
	}
	template <typename T = uintptr_t> T get_ReflectedType() {
		return ((T (*)(MonoField*))(Il2CppBase() + 0x4FD4578))(this);
	}
	template <typename T = uintptr_t> T get_DeclaringType() {
		return ((T (*)(MonoField*))(Il2CppBase() + 0x4FD4580))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(MonoField*))(Il2CppBase() + 0x4FD4588))(this);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(MonoField*, uintptr_t, bool))(Il2CppBase() + 0x4FD4590))(this, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(MonoField*, bool))(Il2CppBase() + 0x4FD4654))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(MonoField*, uintptr_t, bool))(Il2CppBase() + 0x4FD4704))(this, attributeType, inherit);
	}
	template <typename T = int32_t> T GetFieldOffset() {
		return ((T (*)(MonoField*))(Il2CppBase() + 0x4FD47C8))(this);
	}
	template <typename T = uintptr_t> T GetValueInternal(uintptr_t obj) {
		return ((T (*)(MonoField*, uintptr_t))(Il2CppBase() + 0x4FD47CC))(this, obj);
	}
	template <typename T = uintptr_t> T GetValue(uintptr_t obj) {
		return ((T (*)(MonoField*, uintptr_t))(Il2CppBase() + 0x4FD47D0))(this, obj);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MonoField*))(Il2CppBase() + 0x4FD4B24))(this);
	}
	template <typename T = void> static T SetValueInternal(uintptr_t fi, uintptr_t obj, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD4C00))(0, fi, obj, value);
	}
	template <typename T = void> T SetValue(uintptr_t obj, uintptr_t val, uintptr_t invokeAttr, uintptr_t binder, uintptr_t culture) {
		return ((T (*)(MonoField*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD4C10))(this, obj, val, invokeAttr, binder, culture);
	}
	template <typename T = uintptr_t> T Clone(Il2CppString* newName) {
		return ((T (*)(MonoField*, Il2CppString*))(Il2CppBase() + 0x4FD5170))(this, newName);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(MonoField*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD5238))(this, info, context);
	}
	template <typename T = uintptr_t> T GetRawConstantValue() {
		return ((T (*)(MonoField*))(Il2CppBase() + 0x4FD52B8))(this);
	}
	template <typename T = void> T CheckGeneric() {
		return ((T (*)(MonoField*))(Il2CppBase() + 0x4FD4A38))(this);
	}

};

}
