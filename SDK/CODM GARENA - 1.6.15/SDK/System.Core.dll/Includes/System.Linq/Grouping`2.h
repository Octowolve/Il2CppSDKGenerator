#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq {

class Grouping2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq", "Grouping`2"));
	}

	template <typename T = uintptr_t> T& key() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& group() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(Grouping2*))(Il2CppBase() + 0x49CC0D8))(this);
	}
	template <typename T = uintptr_t> T get_Key() {
		return ((T (*)(Grouping2*))(Il2CppBase() + 0x49CC174))(this);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(Grouping2*))(Il2CppBase() + 0x49CC17C))(this);
	}

};

}
