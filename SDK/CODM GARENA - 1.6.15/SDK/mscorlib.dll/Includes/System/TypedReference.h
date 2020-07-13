#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class TypedReference
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "TypedReference"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& klass() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T Equals(uintptr_t o) {
		return ((T (*)(TypedReference*, uintptr_t))(Il2CppBase() + 0x4D9592C))(this, o);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(TypedReference*))(Il2CppBase() + 0x4D95A54))(this);
	}

};

}
