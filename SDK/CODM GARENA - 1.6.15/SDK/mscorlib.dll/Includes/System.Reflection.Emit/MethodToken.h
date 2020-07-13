#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class MethodToken
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "MethodToken"));
	}

	template <typename T = int32_t> T& tokValue() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(MethodToken*, uintptr_t))(Il2CppBase() + 0x4571838))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(MethodToken*))(Il2CppBase() + 0x4571840))(this);
	}
	template <typename T = int32_t> T get_Token() {
		return ((T (*)(MethodToken*))(Il2CppBase() + 0x4571848))(this);
	}

};

}
