#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Globalization {

class Calendar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Globalization", "Calendar"));
	}

	template <typename T = bool> T& m_isReadOnly() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& twoDigitYearMax() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& M_AbbrEraNames() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& M_EraNames() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Eras() {
		return ((T (*)(Calendar*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(Calendar*))(Il2CppBase() + 0x3FD108C))(this);
	}
	template <typename T = void> T CheckReadOnly() {
		return ((T (*)(Calendar*))(Il2CppBase() + 0x3FD1130))(this);
	}
	template <typename T = int32_t> T GetDayOfMonth(uintptr_t time) {
		return ((T (*)(Calendar*, uintptr_t))(Il2CppBase() + 0x0))(this, time);
	}
	template <typename T = uintptr_t> T GetDayOfWeek(uintptr_t time) {
		return ((T (*)(Calendar*, uintptr_t))(Il2CppBase() + 0x0))(this, time);
	}
	template <typename T = int32_t> T GetEra(uintptr_t time) {
		return ((T (*)(Calendar*, uintptr_t))(Il2CppBase() + 0x0))(this, time);
	}
	template <typename T = int32_t> T GetMonth(uintptr_t time) {
		return ((T (*)(Calendar*, uintptr_t))(Il2CppBase() + 0x0))(this, time);
	}
	template <typename T = int32_t> T GetYear(uintptr_t time) {
		return ((T (*)(Calendar*, uintptr_t))(Il2CppBase() + 0x0))(this, time);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_EraNames() {
		return ((T (*)(Calendar*))(Il2CppBase() + 0x3FD1218))(this);
	}

};

}
