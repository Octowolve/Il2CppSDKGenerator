#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class RuntimeMethodHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "RuntimeMethodHandle"));
	}

	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(RuntimeMethodHandle*))(Il2CppBase() + 0x3032FBC))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(RuntimeMethodHandle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30331BC))(this, info, context);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(RuntimeMethodHandle*, uintptr_t))(Il2CppBase() + 0x30332F0))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RuntimeMethodHandle*))(Il2CppBase() + 0x30332F8))(this);
	}

};

}
