#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class RuntimeTypeHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "RuntimeTypeHandle"));
	}

	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(RuntimeTypeHandle*))(Il2CppBase() + 0x3033534))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(RuntimeTypeHandle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x303374C))(this, info, context);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(RuntimeTypeHandle*, uintptr_t))(Il2CppBase() + 0x3033880))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RuntimeTypeHandle*))(Il2CppBase() + 0x3033888))(this);
	}

};

}
