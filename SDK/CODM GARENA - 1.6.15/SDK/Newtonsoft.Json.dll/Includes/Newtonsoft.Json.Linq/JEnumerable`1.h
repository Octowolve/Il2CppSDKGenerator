#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq {

class JEnumerable1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq", "JEnumerable`1"));
	}

	template <typename T = void*> static T& Empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& _enumerable() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(JEnumerable1*))(Il2CppBase() + 0x4B60B8C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(JEnumerable1*))(Il2CppBase() + 0x4B60B94))(this);
	}
	template <typename T = bool> T Equals(void* other) {
		return ((T (*)(JEnumerable1*, void*))(Il2CppBase() + 0x4B60BC0))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(JEnumerable1*, uintptr_t))(Il2CppBase() + 0x4B60C6C))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(JEnumerable1*))(Il2CppBase() + 0x4B60C74))(this);
	}

};

}
