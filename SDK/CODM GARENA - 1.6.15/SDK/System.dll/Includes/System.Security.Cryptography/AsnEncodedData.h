#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class AsnEncodedData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography", "AsnEncodedData"));
	}

	template <typename T = uintptr_t> T& _oid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _raw() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$mapA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_Oid() {
		return ((T (*)(AsnEncodedData*))(Il2CppBase() + 0x3E77B78))(this);
	}
	template <typename T = void> T set_Oid(uintptr_t value) {
		return ((T (*)(AsnEncodedData*, uintptr_t))(Il2CppBase() + 0x3E77AD0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RawData() {
		return ((T (*)(AsnEncodedData*))(Il2CppBase() + 0x3E77C54))(this);
	}
	template <typename T = void> T set_RawData(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(AsnEncodedData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E779AC))(this, value);
	}
	template <typename T = void> T CopyFrom(uintptr_t asnEncodedData) {
		return ((T (*)(AsnEncodedData*, uintptr_t))(Il2CppBase() + 0x3E77C5C))(this, asnEncodedData);
	}
	template <typename T = Il2CppString*> T ToString(bool multiLine) {
		return ((T (*)(AsnEncodedData*, bool))(Il2CppBase() + 0x3E77DBC))(this, multiLine);
	}
	template <typename T = Il2CppString*> T Default(bool multiLine) {
		return ((T (*)(AsnEncodedData*, bool))(Il2CppBase() + 0x3E78CBC))(this, multiLine);
	}
	template <typename T = Il2CppString*> T BasicConstraintsExtension(bool multiLine) {
		return ((T (*)(AsnEncodedData*, bool))(Il2CppBase() + 0x3E7809C))(this, multiLine);
	}
	template <typename T = Il2CppString*> T EnhancedKeyUsageExtension(bool multiLine) {
		return ((T (*)(AsnEncodedData*, bool))(Il2CppBase() + 0x3E78248))(this, multiLine);
	}
	template <typename T = Il2CppString*> T KeyUsageExtension(bool multiLine) {
		return ((T (*)(AsnEncodedData*, bool))(Il2CppBase() + 0x3E783F4))(this, multiLine);
	}
	template <typename T = Il2CppString*> T SubjectKeyIdentifierExtension(bool multiLine) {
		return ((T (*)(AsnEncodedData*, bool))(Il2CppBase() + 0x3E785A0))(this, multiLine);
	}
	template <typename T = Il2CppString*> T SubjectAltName(bool multiLine) {
		return ((T (*)(AsnEncodedData*, bool))(Il2CppBase() + 0x3E7874C))(this, multiLine);
	}
	template <typename T = Il2CppString*> T NetscapeCertType(bool multiLine) {
		return ((T (*)(AsnEncodedData*, bool))(Il2CppBase() + 0x3E58D84))(this, multiLine);
	}

};

}
