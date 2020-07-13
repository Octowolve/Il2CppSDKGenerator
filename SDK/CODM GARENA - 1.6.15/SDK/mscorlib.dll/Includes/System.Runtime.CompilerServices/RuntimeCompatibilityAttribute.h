#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.CompilerServices {

class RuntimeCompatibilityAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.CompilerServices", "RuntimeCompatibilityAttribute"));
	}

	template <typename T = bool> T& wrap_non_exception_throws() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T set_WrapNonExceptionThrows(bool value) {
		return ((T (*)(RuntimeCompatibilityAttribute*, bool))(Il2CppBase() + 0x4FDF4E8))(this, value);
	}

};

}
