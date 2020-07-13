#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class CurrentSystemTimeZone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "CurrentSystemTimeZone"));
	}

	template <typename T = Il2CppString*> T& m_standardName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_daylightName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_CachedDaylightChanges() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& m_ticksOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& utcOffsetWithOutDLS() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& utcOffsetWithDLS() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& this_year() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& this_year_dlt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(uintptr_t sender) {
		return ((T (*)(CurrentSystemTimeZone*, uintptr_t))(Il2CppBase() + 0x3652FE8))(this, sender);
	}
	template <typename T = bool> static T GetTimeZoneData(int32_t year, Il2CppArray<uintptr_t>** data, Il2CppArray<uintptr_t>** names) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x3652B30))(0, year, data, names);
	}
	template <typename T = uintptr_t> T GetDaylightChanges(int32_t year) {
		return ((T (*)(CurrentSystemTimeZone*, int32_t))(Il2CppBase() + 0x3652FF0))(this, year);
	}
	template <typename T = uintptr_t> T GetUtcOffset(uintptr_t time) {
		return ((T (*)(CurrentSystemTimeZone*, uintptr_t))(Il2CppBase() + 0x36533E0))(this, time);
	}
	template <typename T = void> T OnDeserialization(uintptr_t dlt) {
		return ((T (*)(CurrentSystemTimeZone*, uintptr_t))(Il2CppBase() + 0x3652CB4))(this, dlt);
	}
	template <typename T = uintptr_t> T GetDaylightTimeFromData(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(CurrentSystemTimeZone*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3652B40))(this, data);
	}

};

}
