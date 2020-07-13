#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Globalization {

class GregorianCalendar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Globalization", "GregorianCalendar"));
	}

	template <typename T = uintptr_t> T& m_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Eras() {
		return ((T (*)(GregorianCalendar*))(Il2CppBase() + 0x3FDAB48))(this);
	}
	template <typename T = void> T set_CalendarType(uintptr_t value) {
		return ((T (*)(GregorianCalendar*, uintptr_t))(Il2CppBase() + 0x3FDAC0C))(this, value);
	}
	template <typename T = int32_t> T GetDayOfMonth(uintptr_t time) {
		return ((T (*)(GregorianCalendar*, uintptr_t))(Il2CppBase() + 0x3FDAC28))(this, time);
	}
	template <typename T = uintptr_t> T GetDayOfWeek(uintptr_t time) {
		return ((T (*)(GregorianCalendar*, uintptr_t))(Il2CppBase() + 0x3FDAC74))(this, time);
	}
	template <typename T = int32_t> T GetEra(uintptr_t time) {
		return ((T (*)(GregorianCalendar*, uintptr_t))(Il2CppBase() + 0x3FDACE8))(this, time);
	}
	template <typename T = int32_t> T GetMonth(uintptr_t time) {
		return ((T (*)(GregorianCalendar*, uintptr_t))(Il2CppBase() + 0x3FDACF0))(this, time);
	}
	template <typename T = int32_t> T GetYear(uintptr_t time) {
		return ((T (*)(GregorianCalendar*, uintptr_t))(Il2CppBase() + 0x3FDAD14))(this, time);
	}

};

}
