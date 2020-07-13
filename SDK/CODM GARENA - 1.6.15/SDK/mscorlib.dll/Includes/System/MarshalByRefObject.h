#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class MarshalByRefObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "MarshalByRefObject"));
	}

	template <typename T = uintptr_t> T& _identity() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_ObjectIdentity() {
		return ((T (*)(MarshalByRefObject*))(Il2CppBase() + 0x400BE94))(this);
	}
	template <typename T = void> T set_ObjectIdentity(uintptr_t value) {
		return ((T (*)(MarshalByRefObject*, uintptr_t))(Il2CppBase() + 0x400BE9C))(this, value);
	}
	template <typename T = uintptr_t> T CreateObjRef(uintptr_t requestedType) {
		return ((T (*)(MarshalByRefObject*, uintptr_t))(Il2CppBase() + 0x400BEA4))(this, requestedType);
	}
	template <typename T = uintptr_t> T InitializeLifetimeService() {
		return ((T (*)(MarshalByRefObject*))(Il2CppBase() + 0x400BF88))(this);
	}

};

}
