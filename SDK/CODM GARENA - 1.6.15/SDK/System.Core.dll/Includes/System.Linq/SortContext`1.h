#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq {

class SortContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq", "SortContext`1"));
	}

	template <typename T = uintptr_t> T& direction() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& child_context() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Initialize(Il2CppArray<uintptr_t>* elements) {
		return ((T (*)(SortContext1*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, elements);
	}
	template <typename T = int32_t> T Compare(int32_t first_index, int32_t second_index) {
		return ((T (*)(SortContext1*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, first_index, second_index);
	}

};

}
