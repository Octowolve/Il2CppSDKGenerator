#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class KeyedHashAlgorithm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "KeyedHashAlgorithm"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& KeyValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Finalize() {
		return ((T (*)(KeyedHashAlgorithm*))(Il2CppBase() + 0x3042DC8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Key() {
		return ((T (*)(KeyedHashAlgorithm*))(Il2CppBase() + 0x3041820))(this);
	}
	template <typename T = void> T set_Key(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(KeyedHashAlgorithm*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3041994))(this, value);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(KeyedHashAlgorithm*, bool))(Il2CppBase() + 0x3041D5C))(this, disposing);
	}
	template <typename T = void> T ZeroizeKey() {
		return ((T (*)(KeyedHashAlgorithm*))(Il2CppBase() + 0x3042E34))(this);
	}

};

}
