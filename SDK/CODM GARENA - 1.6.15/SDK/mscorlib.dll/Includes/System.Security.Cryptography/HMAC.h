#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class HMAC
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "HMAC"));
	}

	template <typename T = bool> T& _disposed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& _hashName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _algo() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _block() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _blockSizeValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = int32_t> T get_BlockSizeValue() {
		return ((T (*)(HMAC*))(Il2CppBase() + 0x3041750))(this);
	}
	template <typename T = void> T set_BlockSizeValue(int32_t value) {
		return ((T (*)(HMAC*, int32_t))(Il2CppBase() + 0x3041758))(this, value);
	}
	template <typename T = void> T set_HashName(Il2CppString* value) {
		return ((T (*)(HMAC*, Il2CppString*))(Il2CppBase() + 0x3041760))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Key() {
		return ((T (*)(HMAC*))(Il2CppBase() + 0x304177C))(this);
	}
	template <typename T = void> T set_Key(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(HMAC*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30418C0))(this, value);
	}
	template <typename T = uintptr_t> T get_Block() {
		return ((T (*)(HMAC*))(Il2CppBase() + 0x3041AE8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T KeySetup(Il2CppArray<uintptr_t>* key, unsigned char padding) {
		return ((T (*)(HMAC*, Il2CppArray<uintptr_t>*, unsigned char))(Il2CppBase() + 0x3041B98))(this, key, padding);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(HMAC*, bool))(Il2CppBase() + 0x3041D0C))(this, disposing);
	}
	template <typename T = void> T HashCore(Il2CppArray<uintptr_t>* rgb, int32_t ib, int32_t cb) {
		return ((T (*)(HMAC*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3041DA0))(this, rgb, ib, cb);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T HashFinal() {
		return ((T (*)(HMAC*))(Il2CppBase() + 0x3041ECC))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(HMAC*))(Il2CppBase() + 0x30420E0))(this);
	}
	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x3042254))(0);
	}
	template <typename T = uintptr_t> static T Create_1(Il2CppString* algorithmName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x30422D0))(0, algorithmName);
	}

};

}
