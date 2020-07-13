#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class ActivationContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "ActivationContext"));
	}

	template <typename T = bool> T& _disposed() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(ActivationContext*, uintptr_t, uintptr_t))(Il2CppBase() + 0x361BCF4))(this, info, context);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(ActivationContext*))(Il2CppBase() + 0x361BE64))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ActivationContext*))(Il2CppBase() + 0x361BE90))(this);
	}
	template <typename T = void> T Dispose_1(bool disposing) {
		return ((T (*)(ActivationContext*, bool))(Il2CppBase() + 0x361BE7C))(this, disposing);
	}

};

}
