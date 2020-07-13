#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Random
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Random"));
	}

	template <typename T = int32_t> static T& MBIG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MSEED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& inext() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& inextp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SeedArray() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = double> T Sample() {
		return ((T (*)(Random*))(Il2CppBase() + 0x455EBE0))(this);
	}
	template <typename T = int32_t> T Next() {
		return ((T (*)(Random*))(Il2CppBase() + 0x455ECD8))(this);
	}
	template <typename T = int32_t> T Next_1(int32_t maxValue) {
		return ((T (*)(Random*, int32_t))(Il2CppBase() + 0x455ED10))(this, maxValue);
	}
	template <typename T = int32_t> T Next_2(int32_t minValue, int32_t maxValue) {
		return ((T (*)(Random*, int32_t, int32_t))(Il2CppBase() + 0x455EE08))(this, minValue, maxValue);
	}
	template <typename T = void> T NextBytes(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(Random*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x455EF18))(this, buffer);
	}
	template <typename T = double> T NextDouble() {
		return ((T (*)(Random*))(Il2CppBase() + 0x455F044))(this);
	}

};

}
