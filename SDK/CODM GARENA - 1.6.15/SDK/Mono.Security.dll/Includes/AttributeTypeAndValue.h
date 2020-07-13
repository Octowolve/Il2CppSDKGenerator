#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AttributeTypeAndValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "", "AttributeTypeAndValue"));
	}

	template <typename T = Il2CppString*> T& oid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& attrValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& upperBound() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = unsigned char> T& encoding() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(AttributeTypeAndValue*, Il2CppString*))(Il2CppBase() + 0x4C0CFA8))(this, value);
	}
	template <typename T = uintptr_t> T GetASN1(unsigned char encoding) {
		return ((T (*)(AttributeTypeAndValue*, unsigned char))(Il2CppBase() + 0x4C14A80))(this, encoding);
	}
	template <typename T = uintptr_t> T GetASN1_1() {
		return ((T (*)(AttributeTypeAndValue*))(Il2CppBase() + 0x4C0D10C))(this);
	}
	template <typename T = unsigned char> T SelectBestEncoding() {
		return ((T (*)(AttributeTypeAndValue*))(Il2CppBase() + 0x4C14D20))(this);
	}

};

}
