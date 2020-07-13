#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.CompilerServices {

class DecimalConstantAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.CompilerServices", "DecimalConstantAttribute"));
	}

	template <typename T = unsigned char> T& scale() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& sign() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = int32_t> T& hi() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& mid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& low() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(DecimalConstantAttribute*))(Il2CppBase() + 0x4FD89F0))(this);
	}

};

}
