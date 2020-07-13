#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq {

class Lookup2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq", "Lookup`2"));
	}

	template <typename T = void*> T& nullGrouping() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T& groups() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(Lookup2*))(Il2CppBase() + 0x49CCAC8))(this);
	}
	template <typename T = void*> T get_Item(uintptr_t key) {
		return ((T (*)(Lookup2*, uintptr_t))(Il2CppBase() + 0x49CCAFC))(this, key);
	}
	template <typename T = bool> T Contains(uintptr_t key) {
		return ((T (*)(Lookup2*, uintptr_t))(Il2CppBase() + 0x49CCB9C))(this, key);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(Lookup2*))(Il2CppBase() + 0x49CCBEC))(this);
	}

};

}
