#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq {

class OrderedEnumerable1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq", "OrderedEnumerable`1"));
	}

	template <typename T = void*> T& source() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(OrderedEnumerable1*))(Il2CppBase() + 0x49CCDB0))(this);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(OrderedEnumerable1*))(Il2CppBase() + 0x49CCDE4))(this);
	}
	template <typename T = void*> T CreateContext(void* current) {
		return ((T (*)(OrderedEnumerable1*, void*))(Il2CppBase() + 0x0))(this, current);
	}
	template <typename T = void*> T Sort(void* source) {
		return ((T (*)(OrderedEnumerable1*, void*))(Il2CppBase() + 0x0))(this, source);
	}

};

}
