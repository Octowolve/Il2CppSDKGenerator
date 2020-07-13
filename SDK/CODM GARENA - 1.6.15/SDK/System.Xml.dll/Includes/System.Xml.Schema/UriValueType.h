#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class UriValueType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "UriValueType"));
	}

	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(UriValueType*))(Il2CppBase() + 0x2AA2188))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(UriValueType*, uintptr_t))(Il2CppBase() + 0x2AA2250))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UriValueType*))(Il2CppBase() + 0x2AA228C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UriValueType*))(Il2CppBase() + 0x2AA22C8))(this);
	}
	template <typename T = bool> static T op_Equality(uintptr_t v1, uintptr_t v2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AA2244))(0, v1, v2);
	}

};

}
