#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class Missing
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "Missing"));
	}

	template <typename T = uintptr_t> static T& Value() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(Missing*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD24DC))(this, info, context);
	}

};

}
