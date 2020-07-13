#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class FieldBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "FieldBuilder"));
	}

	template <typename T = uintptr_t> T& attrs() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& typeb() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& marshal_info() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(FieldBuilder*))(Il2CppBase() + 0x456D408))(this);
	}
	template <typename T = uintptr_t> T get_DeclaringType() {
		return ((T (*)(FieldBuilder*))(Il2CppBase() + 0x456D410))(this);
	}
	template <typename T = uintptr_t> T get_FieldHandle() {
		return ((T (*)(FieldBuilder*))(Il2CppBase() + 0x456D418))(this);
	}
	template <typename T = uintptr_t> T get_FieldType() {
		return ((T (*)(FieldBuilder*))(Il2CppBase() + 0x456D4E4))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(FieldBuilder*))(Il2CppBase() + 0x456D4EC))(this);
	}
	template <typename T = uintptr_t> T get_ReflectedType() {
		return ((T (*)(FieldBuilder*))(Il2CppBase() + 0x456D4F4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(FieldBuilder*, bool))(Il2CppBase() + 0x456D4FC))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(FieldBuilder*, uintptr_t, bool))(Il2CppBase() + 0x456D5D8))(this, attributeType, inherit);
	}
	template <typename T = uintptr_t> T GetValue(uintptr_t obj) {
		return ((T (*)(FieldBuilder*, uintptr_t))(Il2CppBase() + 0x456D6C4))(this, obj);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(FieldBuilder*, uintptr_t, bool))(Il2CppBase() + 0x456D6DC))(this, attributeType, inherit);
	}
	template <typename T = int32_t> T GetFieldOffset() {
		return ((T (*)(FieldBuilder*))(Il2CppBase() + 0x456D6F4))(this);
	}
	template <typename T = void> T SetValue(uintptr_t obj, uintptr_t val, uintptr_t invokeAttr, uintptr_t binder, uintptr_t culture) {
		return ((T (*)(FieldBuilder*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x456D6FC))(this, obj, val, invokeAttr, binder, culture);
	}
	template <typename T = uintptr_t> T get_UMarshal() {
		return ((T (*)(FieldBuilder*))(Il2CppBase() + 0x456D714))(this);
	}
	template <typename T = uintptr_t> T CreateNotSupportedException() {
		return ((T (*)(FieldBuilder*))(Il2CppBase() + 0x456D430))(this);
	}
	template <typename T = uintptr_t> T get_Module() {
		return ((T (*)(FieldBuilder*))(Il2CppBase() + 0x456D71C))(this);
	}

};

}
