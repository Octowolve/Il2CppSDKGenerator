#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security {

class ASN1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security", "ASN1"));
	}

	template <typename T = unsigned char> T& m_nTag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_aValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& elist() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ASN1*))(Il2CppBase() + 0x47C8D14))(this);
	}
	template <typename T = unsigned char> T get_Tag() {
		return ((T (*)(ASN1*))(Il2CppBase() + 0x47C8D34))(this);
	}
	template <typename T = int32_t> T get_Length() {
		return ((T (*)(ASN1*))(Il2CppBase() + 0x47C8D3C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Value() {
		return ((T (*)(ASN1*))(Il2CppBase() + 0x47C8D50))(this);
	}
	template <typename T = void> T set_Value(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ASN1*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47C8E10))(this, value);
	}
	template <typename T = bool> T CompareArray(Il2CppArray<uintptr_t>* array1, Il2CppArray<uintptr_t>* array2) {
		return ((T (*)(ASN1*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47C8EAC))(this, array1, array2);
	}
	template <typename T = bool> T CompareValue(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ASN1*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47C8F48))(this, value);
	}
	template <typename T = uintptr_t> T Add(uintptr_t asn1) {
		return ((T (*)(ASN1*, uintptr_t))(Il2CppBase() + 0x47C8F54))(this, asn1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBytes() {
		return ((T (*)(ASN1*))(Il2CppBase() + 0x47C902C))(this);
	}
	template <typename T = void> T Decode(Il2CppArray<uintptr_t>* asn1, uintptr_t anPos, int32_t anLength) {
		return ((T (*)(ASN1*, Il2CppArray<uintptr_t>*, uintptr_t, int32_t))(Il2CppBase() + 0x47C8BB0))(this, asn1, anPos, anLength);
	}
	template <typename T = void> T DecodeTLV(Il2CppArray<uintptr_t>* asn1, uintptr_t pos, uintptr_t* tag, uintptr_t* length, Il2CppArray<uintptr_t>** content) {
		return ((T (*)(ASN1*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t*, uintptr_t*, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x47C9840))(this, asn1, pos, tag, length, content);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(ASN1*, int32_t))(Il2CppBase() + 0x47C99F8))(this, index);
	}
	template <typename T = uintptr_t> T Element(int32_t index, unsigned char anTag) {
		return ((T (*)(ASN1*, int32_t, unsigned char))(Il2CppBase() + 0x47C9B78))(this, index, anTag);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ASN1*))(Il2CppBase() + 0x47C9D1C))(this);
	}

};

}
