#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq.JsonPath {

class ArrayMultipleIndexFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq.JsonPath", "ArrayMultipleIndexFilter"));
	}

	template <typename T = Il2CppList<int32_t>*> T& Indexes() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppList<int32_t>*> T get_Indexes() {
		return ((T (*)(ArrayMultipleIndexFilter*))(Il2CppBase() + 0x396248C))(this);
	}
	template <typename T = void*> T ExecuteFilter(void* current, bool errorWhenNoMatch) {
		return ((T (*)(ArrayMultipleIndexFilter*, void*, bool))(Il2CppBase() + 0x3962494))(this, current, errorWhenNoMatch);
	}

};

}
