#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdNMTokens
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdNMTokens"));
	}


	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdNMTokens*))(Il2CppBase() + 0x4E29250))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdNMTokens*))(Il2CppBase() + 0x4E29258))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* value, uintptr_t nt, uintptr_t nsmgr) {
		return ((T (*)(XsdNMTokens*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E29260))(this, value, nt, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdNMTokens*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E293C0))(this, s, nameTable, nsmgr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetValidatedArray(Il2CppString* value, uintptr_t nt) {
		return ((T (*)(XsdNMTokens*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E29264))(this, value, nt);
	}

};

}
