#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeriveBytes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "DeriveBytes"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& keyDiversifier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ivDiversifier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& macDiversifier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> T& _hashName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _iterations() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _password() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _salt() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T set_HashName_1(Il2CppString* value) {
		return ((T (*)(DeriveBytes*, Il2CppString*))(Il2CppBase() + 0x3FBABEC))(this, value);
	}
	template <typename T = void> T set_IterationCount_1(int32_t value) {
		return ((T (*)(DeriveBytes*, int32_t))(Il2CppBase() + 0x3FBABE4))(this, value);
	}
	template <typename T = void> T set_Password_1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(DeriveBytes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FBAA74))(this, value);
	}
	template <typename T = void> T set_Salt_1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(DeriveBytes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FBAB40))(this, value);
	}
	template <typename T = void> T Adjust_1(Il2CppArray<uintptr_t>* a, int32_t aOff, Il2CppArray<uintptr_t>* b) {
		return ((T (*)(DeriveBytes*, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FC0118))(this, a, aOff, b);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Derive_1(Il2CppArray<uintptr_t>* diversifier, int32_t n) {
		return ((T (*)(DeriveBytes*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FC0270))(this, diversifier, n);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T DeriveKey_1(int32_t size) {
		return ((T (*)(DeriveBytes*, int32_t))(Il2CppBase() + 0x3FBABF4))(this, size);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T DeriveIV_1(int32_t size) {
		return ((T (*)(DeriveBytes*, int32_t))(Il2CppBase() + 0x3FBACB8))(this, size);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T DeriveMAC_1(int32_t size) {
		return ((T (*)(DeriveBytes*, int32_t))(Il2CppBase() + 0x3FBCD2C))(this, size);
	}

};

}
