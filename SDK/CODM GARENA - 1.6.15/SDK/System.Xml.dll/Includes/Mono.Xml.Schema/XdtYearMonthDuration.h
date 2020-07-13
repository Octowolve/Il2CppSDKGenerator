#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XdtYearMonthDuration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XdtYearMonthDuration"));
	}


	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XdtYearMonthDuration*))(Il2CppBase() + 0x4E1D738))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XdtYearMonthDuration*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E1D740))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XdtYearMonthDuration*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E1D768))(this, s, nameTable, nsmgr);
	}

};

}
