#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RandomUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomUtil"));
	}

	template <typename T = int32_t> static T& PERCENTAGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& m_random() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRandSeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RandomSequence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Next() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NextDouble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Next() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Choice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Choice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Choice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> static T SetRandSeed(int32_t seed) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x37E8B6C))(0, seed);
	}
	template <typename T = int32_t> static T RandomSequence(void* sequence) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x37E8CA8))(0, sequence);
	}
	template <typename T = int32_t> static T Next() {
		return ((T (*)(void *))(Il2CppBase() + 0x37E9060))(0);
	}
	template <typename T = double> static T NextDouble() {
		return ((T (*)(void *))(Il2CppBase() + 0x37E9184))(0);
	}
	template <typename T = int32_t> static T Next_1(int32_t min, int32_t max) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x37E92A8))(0, min, max);
	}
	template <typename T = bool> static T Choice(int32_t percent) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x37E93E4))(0, percent);
	}
	template <typename T = bool> static T Choice_1(float probability) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x37E94F0))(0, probability);
	}
	template <typename T = int32_t> static T Choice_2(Il2CppList<int32_t>* weights) {
		return ((T (*)(void *, Il2CppList<int32_t>*))(Il2CppBase() + 0x37E967C))(0, weights);
	}

};

}
