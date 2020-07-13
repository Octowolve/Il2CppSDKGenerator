#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class StringArrayValueType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "StringArrayValueType"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Value() {
		return ((T (*)(StringArrayValueType*))(Il2CppBase() + 0x2AA1DFC))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(StringArrayValueType*, uintptr_t))(Il2CppBase() + 0x2AA1EC8))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(StringArrayValueType*))(Il2CppBase() + 0x2AA1F04))(this);
	}
	template <typename T = bool> static T op_Equality(uintptr_t v1, uintptr_t v2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AA1EB8))(0, v1, v2);
	}

};

}
