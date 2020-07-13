#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.CompilerServices {

class DateTimeConstantAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.CompilerServices", "DateTimeConstantAttribute"));
	}

	template <typename T = int64_t> T& ticks() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int64_t> T get_Ticks() {
		return ((T (*)(DateTimeConstantAttribute*))(Il2CppBase() + 0x4FD8A34))(this);
	}

};

}
