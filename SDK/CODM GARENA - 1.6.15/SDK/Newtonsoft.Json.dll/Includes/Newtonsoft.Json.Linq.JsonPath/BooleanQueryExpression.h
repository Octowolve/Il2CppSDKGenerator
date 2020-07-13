#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq.JsonPath {

class BooleanQueryExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq.JsonPath", "BooleanQueryExpression"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& Path() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_Path() {
		return ((T (*)(BooleanQueryExpression*))(Il2CppBase() + 0x3963FB8))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(BooleanQueryExpression*))(Il2CppBase() + 0x3963FC0))(this);
	}
	template <typename T = bool> T IsMatch(uintptr_t t) {
		return ((T (*)(BooleanQueryExpression*, uintptr_t))(Il2CppBase() + 0x3963FC8))(this, t);
	}
	template <typename T = bool> T EqualsWithStringCoercion(uintptr_t value, uintptr_t queryValue) {
		return ((T (*)(BooleanQueryExpression*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39646A8))(this, value, queryValue);
	}

};

}
