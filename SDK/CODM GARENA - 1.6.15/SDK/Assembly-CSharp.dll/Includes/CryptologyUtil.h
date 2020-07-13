#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CryptologyUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CryptologyUtil"));
	}

	template <typename T = int32_t> static T& SALT_LEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ZERO_LEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& dec_dest_buff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& dec_zero_buff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& dec_iv_pre() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& dec_iv_cur() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& dec_k() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& enc_src_buf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& enc_iv_plain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& enc_iv_crypt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& enc_k() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uint32_t> static T& DELTA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ROUNDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LOG_ROUNDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TeaDecrypt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_rand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TeaEncrypt_Len() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TeaEncrypt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TeaEncryptECB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TeaDecryptECB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndianExchange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IntToBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = bool> static T TeaDecrypt(Il2CppArray<uintptr_t>* pInBuf, int32_t nInBufLen, Il2CppArray<uintptr_t>* pKey, Il2CppArray<uintptr_t>* pOutBuf, uintptr_t pOutBufLen) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x41579C4))(0, pInBuf, nInBufLen, pKey, pOutBuf, pOutBufLen);
	}
	template <typename T = int32_t> static T rand() {
		return ((T (*)(void *))(Il2CppBase() + 0x4158594))(0);
	}
	template <typename T = int32_t> static T TeaEncrypt_Len(int32_t nInBufLen) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x415865C))(0, nInBufLen);
	}
	template <typename T = void> static T TeaEncrypt(Il2CppArray<uintptr_t>* pInBuf, int32_t nInBufLen, Il2CppArray<uintptr_t>* pKey, Il2CppArray<uintptr_t>* pOutBuf, uintptr_t pOutBufLen) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4158744))(0, pInBuf, nInBufLen, pKey, pOutBuf, pOutBufLen);
	}
	template <typename T = void> static T TeaEncryptECB(Il2CppArray<uintptr_t>* pInBuf, int32_t inBufPos, Il2CppArray<uintptr_t>* pKey, Il2CppArray<uintptr_t>* pOutBuf, int32_t outBufIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x41590A8))(0, pInBuf, inBufPos, pKey, pOutBuf, outBufIndex);
	}
	template <typename T = void> static T TeaDecryptECB(Il2CppArray<uintptr_t>* pInBuf, int32_t inBufIndex, Il2CppArray<uintptr_t>* pKey, Il2CppArray<uintptr_t>* pOutBuf, int32_t outBufIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x41581FC))(0, pInBuf, inBufIndex, pKey, pOutBuf, outBufIndex);
	}
	template <typename T = int32_t> static T EndianExchange(int32_t src) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x415943C))(0, src);
	}
	template <typename T = void> static T IntToBytes(int32_t value, Il2CppArray<uintptr_t>* array, int32_t offset) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x415950C))(0, value, array, offset);
	}

};

}
