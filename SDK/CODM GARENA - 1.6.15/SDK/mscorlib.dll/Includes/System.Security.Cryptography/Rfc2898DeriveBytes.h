#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class Rfc2898DeriveBytes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "Rfc2898DeriveBytes"));
	}

	template <typename T = int32_t> T& _iteration() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _salt() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _hmac() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _buffer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _pos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _f() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T set_IterationCount(int32_t value) {
		return ((T (*)(Rfc2898DeriveBytes*, int32_t))(Il2CppBase() + 0x3048AA4))(this, value);
	}
	template <typename T = void> T set_Salt(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Rfc2898DeriveBytes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3048968))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T F(Il2CppArray<uintptr_t>* s, int32_t c, int32_t i) {
		return ((T (*)(Rfc2898DeriveBytes*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3048B60))(this, s, c, i);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBytes(int32_t cb) {
		return ((T (*)(Rfc2898DeriveBytes*, int32_t))(Il2CppBase() + 0x3048D2C))(this, cb);
	}

};

}
