#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq {

class SortSequenceContext2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq", "SortSequenceContext`2"));
	}

	template <typename T = void*> T& selector() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& comparer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& keys() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Initialize(Il2CppArray<uintptr_t>* elements) {
		return ((T (*)(SortSequenceContext2*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x49D0478))(this, elements);
	}
	template <typename T = int32_t> T Compare(int32_t first_index, int32_t second_index) {
		return ((T (*)(SortSequenceContext2*, int32_t, int32_t))(Il2CppBase() + 0x49D0584))(this, first_index, second_index);
	}

};

}
