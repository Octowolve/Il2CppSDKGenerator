#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class HMAC
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Cryptography", "HMAC"));
	}

	template <typename T = uintptr_t> T& hash() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& hashing() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& innerPad() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& outerPad() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Key() {
		return ((T (*)(HMAC*))(Il2CppBase() + 0x47CE12C))(this);
	}
	template <typename T = void> T set_Key(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(HMAC*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47CE1CC))(this, value);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(HMAC*))(Il2CppBase() + 0x47CE4EC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T HashFinal() {
		return ((T (*)(HMAC*))(Il2CppBase() + 0x47CE534))(this);
	}
	template <typename T = void> T HashCore(Il2CppArray<uintptr_t>* array, int32_t ibStart, int32_t cbSize) {
		return ((T (*)(HMAC*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x47CE700))(this, array, ibStart, cbSize);
	}
	template <typename T = void> T initializePad() {
		return ((T (*)(HMAC*))(Il2CppBase() + 0x47CE300))(this);
	}

};

}
