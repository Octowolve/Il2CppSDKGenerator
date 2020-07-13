#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdDuration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdDuration"));
	}


	template <typename T = uintptr_t> T get_AllowedFacets() {
		return ((T (*)(XsdDuration*))(Il2CppBase() + 0x4E221E8))(this);
	}
	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdDuration*))(Il2CppBase() + 0x4E22298))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdDuration*))(Il2CppBase() + 0x4E222A0))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdDuration*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E222A8))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdDuration*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E222D0))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(XsdDuration*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E223CC))(this, x, y);
	}

};

}
