#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq.JsonPath {

class ArrayIndexFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq.JsonPath", "ArrayIndexFilter"));
	}

	template <typename T = void*> T& Index() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void*> T get_Index() {
		return ((T (*)(ArrayIndexFilter*))(Il2CppBase() + 0x3961394))(this);
	}
	template <typename T = void*> T ExecuteFilter(void* current, bool errorWhenNoMatch) {
		return ((T (*)(ArrayIndexFilter*, void*, bool))(Il2CppBase() + 0x39613A8))(this, current, errorWhenNoMatch);
	}

};

}
