#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XdtDayTimeDuration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XdtDayTimeDuration"));
	}


	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XdtDayTimeDuration*))(Il2CppBase() + 0x4E1D5FC))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XdtDayTimeDuration*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E1D604))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XdtDayTimeDuration*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E1D62C))(this, s, nameTable, nsmgr);
	}

};

}
