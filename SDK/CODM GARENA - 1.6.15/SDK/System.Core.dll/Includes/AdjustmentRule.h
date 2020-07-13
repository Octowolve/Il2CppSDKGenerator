#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AdjustmentRule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "", "AdjustmentRule"));
	}

	template <typename T = uintptr_t> T& dateEnd() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& dateStart() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& daylightDelta() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& daylightTransitionEnd() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& daylightTransitionStart() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = uintptr_t> T get_DateEnd() {
		return ((T (*)(AdjustmentRule*))(Il2CppBase() + 0x4ED4818))(this);
	}
	template <typename T = uintptr_t> T get_DateStart() {
		return ((T (*)(AdjustmentRule*))(Il2CppBase() + 0x4ED4808))(this);
	}
	template <typename T = uintptr_t> T get_DaylightDelta() {
		return ((T (*)(AdjustmentRule*))(Il2CppBase() + 0x4ED47FC))(this);
	}
	template <typename T = uintptr_t> T get_DaylightTransitionEnd() {
		return ((T (*)(AdjustmentRule*))(Il2CppBase() + 0x4ED84A4))(this);
	}
	template <typename T = uintptr_t> T get_DaylightTransitionStart() {
		return ((T (*)(AdjustmentRule*))(Il2CppBase() + 0x4ED81B4))(this);
	}
	template <typename T = uintptr_t> static T CreateAdjustmentRule(uintptr_t dateStart, uintptr_t dateEnd, uintptr_t daylightDelta, uintptr_t daylightTransitionStart, uintptr_t daylightTransitionEnd) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ED8ECC))(0, dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(AdjustmentRule*, uintptr_t))(Il2CppBase() + 0x4ED7A98))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdjustmentRule*))(Il2CppBase() + 0x4ED6CB4))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(AdjustmentRule*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ED99D0))(this, info, context);
	}
	template <typename T = void> T OnDeserialization(uintptr_t sender) {
		return ((T (*)(AdjustmentRule*, uintptr_t))(Il2CppBase() + 0x4ED9A64))(this, sender);
	}

};

}
