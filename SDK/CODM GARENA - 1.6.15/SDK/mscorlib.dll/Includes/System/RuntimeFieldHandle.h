#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class RuntimeFieldHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "RuntimeFieldHandle"));
	}

	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(RuntimeFieldHandle*))(Il2CppBase() + 0x3032A34))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(RuntimeFieldHandle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3032C34))(this, info, context);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(RuntimeFieldHandle*, uintptr_t))(Il2CppBase() + 0x3032D68))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RuntimeFieldHandle*))(Il2CppBase() + 0x3032D70))(this);
	}

};

}
