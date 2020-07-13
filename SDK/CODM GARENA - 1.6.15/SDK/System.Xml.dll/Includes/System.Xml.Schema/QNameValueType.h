#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class QNameValueType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "QNameValueType"));
	}

	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(QNameValueType*))(Il2CppBase() + 0x2AA1BE0))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(QNameValueType*, uintptr_t))(Il2CppBase() + 0x2AA1D44))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(QNameValueType*))(Il2CppBase() + 0x2AA1D80))(this);
	}
	template <typename T = bool> static T op_Equality(uintptr_t v1, uintptr_t v2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AA1C94))(0, v1, v2);
	}

};

}
