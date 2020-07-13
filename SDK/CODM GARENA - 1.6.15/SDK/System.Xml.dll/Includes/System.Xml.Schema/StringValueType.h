#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class StringValueType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "StringValueType"));
	}

	template <typename T = Il2CppString*> T& value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(StringValueType*))(Il2CppBase() + 0x2AA1F74))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(StringValueType*, uintptr_t))(Il2CppBase() + 0x2AA20D8))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(StringValueType*))(Il2CppBase() + 0x2AA210C))(this);
	}
	template <typename T = bool> static T op_Equality(uintptr_t v1, uintptr_t v2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AA2028))(0, v1, v2);
	}

};

}
