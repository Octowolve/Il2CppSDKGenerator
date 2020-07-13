#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TransitionTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "", "TransitionTime"));
	}

	template <typename T = uintptr_t> T& timeOfDay() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& month() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& day() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& week() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& dayOfWeek() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& isFixedDateRule() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_TimeOfDay() {
		return ((T (*)(TransitionTime*))(Il2CppBase() + 0x4EDA2C4))(this);
	}
	template <typename T = int32_t> T get_Month() {
		return ((T (*)(TransitionTime*))(Il2CppBase() + 0x4EDA2D4))(this);
	}
	template <typename T = int32_t> T get_Day() {
		return ((T (*)(TransitionTime*))(Il2CppBase() + 0x4EDA2DC))(this);
	}
	template <typename T = int32_t> T get_Week() {
		return ((T (*)(TransitionTime*))(Il2CppBase() + 0x4EDA2E4))(this);
	}
	template <typename T = uintptr_t> T get_DayOfWeek() {
		return ((T (*)(TransitionTime*))(Il2CppBase() + 0x4EDA2EC))(this);
	}
	template <typename T = bool> T get_IsFixedDateRule() {
		return ((T (*)(TransitionTime*))(Il2CppBase() + 0x4EDA2F4))(this);
	}
	template <typename T = uintptr_t> static T CreateFixedDateRule(uintptr_t timeOfDay, int32_t month, int32_t day) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4ED8DEC))(0, timeOfDay, month, day);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(TransitionTime*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4EDA390))(this, info, context);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(TransitionTime*, uintptr_t))(Il2CppBase() + 0x4EDA50C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(TransitionTime*, uintptr_t))(Il2CppBase() + 0x4EDA514))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(TransitionTime*))(Il2CppBase() + 0x4EDA5C8))(this);
	}
	template <typename T = void> T OnDeserialization(uintptr_t sender) {
		return ((T (*)(TransitionTime*, uintptr_t))(Il2CppBase() + 0x4EDA698))(this, sender);
	}
	template <typename T = bool> static T op_Equality(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ED9864))(0, t1, t2);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ED8E3C))(0, t1, t2);
	}

};

}
