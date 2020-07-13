#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security {

class ASN1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Security", "ASN1"));
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

	template <typename T = int32_t> T get_Count_1() {
		return ((T (*)(ASN1*))(Il2CppBase() + 0x3F9FBC4))(this);
	}
	template <typename T = unsigned char> T get_Tag_1() {
		return ((T (*)(ASN1*))(Il2CppBase() + 0x3F9FBE4))(this);
	}
	template <typename T = int32_t> T get_Length_1() {
		return ((T (*)(ASN1*))(Il2CppBase() + 0x3F9FBEC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Value_1() {
		return ((T (*)(ASN1*))(Il2CppBase() + 0x3F9FC00))(this);
	}
	template <typename T = void> T set_Value_1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ASN1*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3F9FCC0))(this, value);
	}
	template <typename T = bool> T CompareArray_1(Il2CppArray<uintptr_t>* array1, Il2CppArray<uintptr_t>* array2) {
		return ((T (*)(ASN1*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3F9FD5C))(this, array1, array2);
	}
	template <typename T = bool> T CompareValue_1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ASN1*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3F9FDF8))(this, value);
	}
	template <typename T = uintptr_t> T Add_1(uintptr_t asn1) {
		return ((T (*)(ASN1*, uintptr_t))(Il2CppBase() + 0x3F9FE04))(this, asn1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBytes_1() {
		return ((T (*)(ASN1*))(Il2CppBase() + 0x3F9FEDC))(this);
	}
	template <typename T = void> T Decode_1(Il2CppArray<uintptr_t>* asn1, uintptr_t anPos, int32_t anLength) {
		return ((T (*)(ASN1*, Il2CppArray<uintptr_t>*, uintptr_t, int32_t))(Il2CppBase() + 0x3F9FA60))(this, asn1, anPos, anLength);
	}
	template <typename T = void> T DecodeTLV_1(Il2CppArray<uintptr_t>* asn1, uintptr_t pos, uintptr_t* tag, uintptr_t* length, Il2CppArray<uintptr_t>** content) {
		return ((T (*)(ASN1*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t*, uintptr_t*, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x3FA06F0))(this, asn1, pos, tag, length, content);
	}
	template <typename T = uintptr_t> T get_Item_1(int32_t index) {
		return ((T (*)(ASN1*, int32_t))(Il2CppBase() + 0x3FA08A8))(this, index);
	}
	template <typename T = uintptr_t> T Element_1(int32_t index, unsigned char anTag) {
		return ((T (*)(ASN1*, int32_t, unsigned char))(Il2CppBase() + 0x3FA0A28))(this, index, anTag);
	}
	template <typename T = Il2CppString*> T ToString_1() {
		return ((T (*)(ASN1*))(Il2CppBase() + 0x3FA0BCC))(this);
	}

};

}
