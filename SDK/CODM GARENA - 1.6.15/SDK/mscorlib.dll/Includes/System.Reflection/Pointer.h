#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class Pointer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "Pointer"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(Pointer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD91E8))(this, info, context);
	}

};

}
