#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq.JsonPath {

class ArraySliceFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq.JsonPath", "ArraySliceFilter"));
	}

	template <typename T = void*> T& Start() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& End() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Step() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> T get_Start() {
		return ((T (*)(ArraySliceFilter*))(Il2CppBase() + 0x3962DD4))(this);
	}
	template <typename T = void*> T get_End() {
		return ((T (*)(ArraySliceFilter*))(Il2CppBase() + 0x3962DE8))(this);
	}
	template <typename T = void*> T get_Step() {
		return ((T (*)(ArraySliceFilter*))(Il2CppBase() + 0x3962DFC))(this);
	}
	template <typename T = void*> T ExecuteFilter(void* current, bool errorWhenNoMatch) {
		return ((T (*)(ArraySliceFilter*, void*, bool))(Il2CppBase() + 0x3962E10))(this, current, errorWhenNoMatch);
	}
	template <typename T = bool> T IsValid(int32_t index, int32_t stopIndex, bool positiveStep) {
		return ((T (*)(ArraySliceFilter*, int32_t, int32_t, bool))(Il2CppBase() + 0x3962F9C))(this, index, stopIndex, positiveStep);
	}

};

}
