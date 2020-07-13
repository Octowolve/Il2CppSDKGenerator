#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq {

class OrderedSequence2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq", "OrderedSequence`2"));
	}

	template <typename T = void*> T& parent() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& selector() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& comparer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& direction() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void*> T CreateContext(void* current) {
		return ((T (*)(OrderedSequence2*, void*))(Il2CppBase() + 0x49CD448))(this, current);
	}
	template <typename T = void*> T Sort(void* source) {
		return ((T (*)(OrderedSequence2*, void*))(Il2CppBase() + 0x49CD4E8))(this, source);
	}

};

}
