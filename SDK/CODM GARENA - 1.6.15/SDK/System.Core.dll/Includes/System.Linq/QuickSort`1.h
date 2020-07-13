#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq {

class QuickSort1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq", "QuickSort`1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& elements() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& indexes() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& context() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T CreateIndexes(int32_t length) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x49CEC28))(0, length);
	}
	template <typename T = void> T PerformSort() {
		return ((T (*)(QuickSort1*))(Il2CppBase() + 0x49CED08))(this);
	}
	template <typename T = int32_t> T CompareItems(int32_t first_index, int32_t second_index) {
		return ((T (*)(QuickSort1*, int32_t, int32_t))(Il2CppBase() + 0x49CED8C))(this, first_index, second_index);
	}
	template <typename T = int32_t> T MedianOfThree(int32_t left, int32_t right) {
		return ((T (*)(QuickSort1*, int32_t, int32_t))(Il2CppBase() + 0x49CEDC0))(this, left, right);
	}
	template <typename T = void> T Sort(int32_t left, int32_t right) {
		return ((T (*)(QuickSort1*, int32_t, int32_t))(Il2CppBase() + 0x49CF010))(this, left, right);
	}
	template <typename T = void> T InsertionSort(int32_t left, int32_t right) {
		return ((T (*)(QuickSort1*, int32_t, int32_t))(Il2CppBase() + 0x49CF1DC))(this, left, right);
	}
	template <typename T = void> T Swap(int32_t left, int32_t right) {
		return ((T (*)(QuickSort1*, int32_t, int32_t))(Il2CppBase() + 0x49CF34C))(this, left, right);
	}
	template <typename T = void*> static T Sort_1(void* source, void* context) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x49CF408))(0, source, context);
	}

};

}
