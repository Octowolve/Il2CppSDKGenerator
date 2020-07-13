#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class MD2Managed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Cryptography", "MD2Managed"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& state() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& checksum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& x() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& PI_SUBST() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T Padding(int32_t nLength) {
		return ((T (*)(MD2Managed*, int32_t))(Il2CppBase() + 0x47CEBCC))(this, nLength);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(MD2Managed*))(Il2CppBase() + 0x47CECB8))(this);
	}
	template <typename T = void> T HashCore(Il2CppArray<uintptr_t>* array, int32_t ibStart, int32_t cbSize) {
		return ((T (*)(MD2Managed*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x47CED38))(this, array, ibStart, cbSize);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T HashFinal() {
		return ((T (*)(MD2Managed*))(Il2CppBase() + 0x47CF194))(this);
	}
	template <typename T = void> T MD2Transform(Il2CppArray<uintptr_t>* state, Il2CppArray<uintptr_t>* checksum, Il2CppArray<uintptr_t>* block, int32_t index) {
		return ((T (*)(MD2Managed*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x47CEE1C))(this, state, checksum, block, index);
	}

};

}
