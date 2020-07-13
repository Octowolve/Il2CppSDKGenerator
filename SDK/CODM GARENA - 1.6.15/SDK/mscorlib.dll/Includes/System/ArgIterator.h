#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class ArgIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "ArgIterator"));
	}

	template <typename T = uintptr_t> T& sig() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& args() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& next_arg() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& num_args() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T Equals(uintptr_t o) {
		return ((T (*)(ArgIterator*, uintptr_t))(Il2CppBase() + 0x361E8AC))(this, o);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArgIterator*))(Il2CppBase() + 0x361E8BC))(this);
	}

};

}
