#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class MonoCustomAttrs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "MonoCustomAttrs"));
	}

	template <typename T = uintptr_t> static T& corlib() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AttributeUsageType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& DefaultAttributeUsage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> static T IsUserCattrProvider(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x454E9E0))(0, obj);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCustomAttributesInternal(uintptr_t obj, uintptr_t attributeType, bool pseudoAttrs) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x454ECDC))(0, obj, attributeType, pseudoAttrs);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetPseudoCustomAttributes(uintptr_t obj, uintptr_t attributeType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x454ECEC))(0, obj, attributeType);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCustomAttributesBase(uintptr_t obj, uintptr_t attributeType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x454F088))(0, obj, attributeType);
	}
	template <typename T = uintptr_t> static T GetCustomAttribute(uintptr_t obj, uintptr_t attributeType, bool inherit) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x454F2F0))(0, obj, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCustomAttributes(uintptr_t obj, uintptr_t attributeType, bool inherit) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x454F4A8))(0, obj, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCustomAttributes_1(uintptr_t obj, bool inherit) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x45502D0))(0, obj, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCustomAttributesDataInternal(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45504C0))(0, obj);
	}
	template <typename T = void*> static T GetCustomAttributesData(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45504C8))(0, obj);
	}
	template <typename T = bool> static T IsDefined(uintptr_t obj, uintptr_t attributeType, bool inherit) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x45505E8))(0, obj, attributeType, inherit);
	}
	template <typename T = bool> static T IsDefinedInternal(uintptr_t obj, uintptr_t AttributeType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4550958))(0, obj, AttributeType);
	}
	template <typename T = uintptr_t> static T GetBasePropertyDefinition(uintptr_t property) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4550964))(0, property);
	}
	template <typename T = uintptr_t> static T GetBase(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x455008C))(0, obj);
	}
	template <typename T = uintptr_t> static T RetrieveAttributeUsage(uintptr_t attributeType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x454FCB8))(0, attributeType);
	}

};

}
