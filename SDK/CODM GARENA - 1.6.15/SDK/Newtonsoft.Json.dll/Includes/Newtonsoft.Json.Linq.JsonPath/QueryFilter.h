#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq.JsonPath {

class QueryFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq.JsonPath", "QueryFilter"));
	}

	template <typename T = uintptr_t> T& Expression() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_Expression() {
		return ((T (*)(QueryFilter*))(Il2CppBase() + 0x3966DA8))(this);
	}
	template <typename T = void*> T ExecuteFilter(void* current, bool errorWhenNoMatch) {
		return ((T (*)(QueryFilter*, void*, bool))(Il2CppBase() + 0x3966DB0))(this, current, errorWhenNoMatch);
	}

};

}
