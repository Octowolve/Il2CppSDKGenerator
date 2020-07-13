#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class PropertyBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "PropertyBuilder"));
	}

	template <typename T = uintptr_t> T& attrs() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& set_method() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& get_method() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& typeb() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(PropertyBuilder*))(Il2CppBase() + 0x457B7BC))(this);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(PropertyBuilder*))(Il2CppBase() + 0x457B7C4))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(PropertyBuilder*))(Il2CppBase() + 0x457B7D4))(this);
	}
	template <typename T = uintptr_t> T get_DeclaringType() {
		return ((T (*)(PropertyBuilder*))(Il2CppBase() + 0x457B7E4))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(PropertyBuilder*))(Il2CppBase() + 0x457B7EC))(this);
	}
	template <typename T = uintptr_t> T get_PropertyType() {
		return ((T (*)(PropertyBuilder*))(Il2CppBase() + 0x457B7F4))(this);
	}
	template <typename T = uintptr_t> T get_ReflectedType() {
		return ((T (*)(PropertyBuilder*))(Il2CppBase() + 0x457B7FC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAccessors(bool nonPublic) {
		return ((T (*)(PropertyBuilder*, bool))(Il2CppBase() + 0x457B804))(this, nonPublic);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(PropertyBuilder*, bool))(Il2CppBase() + 0x457B80C))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(PropertyBuilder*, uintptr_t, bool))(Il2CppBase() + 0x457B8D8))(this, attributeType, inherit);
	}
	template <typename T = uintptr_t> T GetGetMethod(bool nonPublic) {
		return ((T (*)(PropertyBuilder*, bool))(Il2CppBase() + 0x457B8F0))(this, nonPublic);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetIndexParameters() {
		return ((T (*)(PropertyBuilder*))(Il2CppBase() + 0x457B8F8))(this);
	}
	template <typename T = uintptr_t> T GetSetMethod(bool nonPublic) {
		return ((T (*)(PropertyBuilder*, bool))(Il2CppBase() + 0x457B910))(this, nonPublic);
	}
	template <typename T = uintptr_t> T GetValue(uintptr_t obj, Il2CppArray<uintptr_t>* index) {
		return ((T (*)(PropertyBuilder*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x457B918))(this, obj, index);
	}
	template <typename T = uintptr_t> T GetValue_1(uintptr_t obj, uintptr_t invokeAttr, uintptr_t binder, Il2CppArray<uintptr_t>* index, uintptr_t culture) {
		return ((T (*)(PropertyBuilder*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x457B920))(this, obj, invokeAttr, binder, index, culture);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(PropertyBuilder*, uintptr_t, bool))(Il2CppBase() + 0x457B938))(this, attributeType, inherit);
	}
	template <typename T = void> T SetValue(uintptr_t obj, uintptr_t value, Il2CppArray<uintptr_t>* index) {
		return ((T (*)(PropertyBuilder*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x457B950))(this, obj, value, index);
	}
	template <typename T = void> T SetValue_1(uintptr_t obj, uintptr_t value, uintptr_t invokeAttr, uintptr_t binder, Il2CppArray<uintptr_t>* index, uintptr_t culture) {
		return ((T (*)(PropertyBuilder*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x457B954))(this, obj, value, invokeAttr, binder, index, culture);
	}
	template <typename T = uintptr_t> T get_Module() {
		return ((T (*)(PropertyBuilder*))(Il2CppBase() + 0x457B958))(this);
	}
	template <typename T = uintptr_t> T not_supported() {
		return ((T (*)(PropertyBuilder*))(Il2CppBase() + 0x457B824))(this);
	}

};

}
