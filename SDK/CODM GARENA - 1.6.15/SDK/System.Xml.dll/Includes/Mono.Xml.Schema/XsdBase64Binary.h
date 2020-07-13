#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdBase64Binary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdBase64Binary"));
	}

	template <typename T = Il2CppString*> static T& ALPHABET() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& decodeTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdBase64Binary*))(Il2CppBase() + 0x4E1FC60))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdBase64Binary*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E1FC68))(this, s, nameTable, nsmgr);
	}
	template <typename T = int32_t> T Length(Il2CppString* s) {
		return ((T (*)(XsdBase64Binary*, Il2CppString*))(Il2CppBase() + 0x4E1FD80))(this, s);
	}
	template <typename T = bool> static T isPad(char octect) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x4E20064))(0, octect);
	}
	template <typename T = bool> static T isData(char octect) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x4E1FF68))(0, octect);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdBase64Binary*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E20074))(this, s, nameTable, nsmgr);
	}

};

}
