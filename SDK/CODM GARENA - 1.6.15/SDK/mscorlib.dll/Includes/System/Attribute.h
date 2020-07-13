#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Attribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Attribute"));
	}


	template <typename T = uintptr_t> T get_TypeId() {
		return ((T (*)(Attribute*))(Il2CppBase() + 0x3626B6C))(this);
	}
	template <typename T = void> static T CheckParameters(uintptr_t element, uintptr_t attributeType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3626B74))(0, element, attributeType);
	}
	template <typename T = uintptr_t> static T GetCustomAttribute(uintptr_t element, uintptr_t attributeType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3626D74))(0, element, attributeType);
	}
	template <typename T = uintptr_t> static T GetCustomAttribute_1(uintptr_t element, uintptr_t attributeType, bool inherit) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3626D90))(0, element, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCustomAttributes(uintptr_t element) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3626E60))(0, element);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCustomAttributes_1(uintptr_t element, uintptr_t attributeType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3626F84))(0, element, attributeType);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCustomAttributes_2(uintptr_t element, uintptr_t attributeType, bool inherit) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3626FA0))(0, element, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCustomAttributes_3(uintptr_t element, uintptr_t attributeType, bool inherit) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3627064))(0, element, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCustomAttributes_4(uintptr_t element, uintptr_t attributeType, bool inherit) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3627128))(0, element, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCustomAttributes_5(uintptr_t element, uintptr_t type, bool inherit) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x36271EC))(0, element, type, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCustomAttributes_6(uintptr_t element, bool inherit) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x362733C))(0, element, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCustomAttributes_7(uintptr_t element, bool inherit) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3626E68))(0, element, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCustomAttributes_8(uintptr_t element, bool inherit) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3627458))(0, element, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCustomAttributes_9(uintptr_t element, bool inherit) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x362763C))(0, element, inherit);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Attribute*))(Il2CppBase() + 0x3627758))(this);
	}
	template <typename T = bool> T IsDefaultAttribute() {
		return ((T (*)(Attribute*))(Il2CppBase() + 0x3627760))(this);
	}
	template <typename T = bool> static T IsDefined(uintptr_t element, uintptr_t attributeType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3627768))(0, element, attributeType);
	}
	template <typename T = bool> static T IsDefined_1(uintptr_t element, uintptr_t attributeType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x362780C))(0, element, attributeType);
	}
	template <typename T = bool> static T IsDefined_2(uintptr_t element, uintptr_t attributeType, bool inherit) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3627828))(0, element, attributeType, inherit);
	}
	template <typename T = bool> static T IsDefined_3(uintptr_t element, uintptr_t attributeType, bool inherit) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3627784))(0, element, attributeType, inherit);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(Attribute*, uintptr_t))(Il2CppBase() + 0x36279D8))(this, obj);
	}

};

}
