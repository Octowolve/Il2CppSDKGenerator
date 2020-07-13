#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq.JsonPath {

class QueryExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq.JsonPath", "QueryExpression"));
	}

	template <typename T = uintptr_t> T& Operator() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_Operator() {
		return ((T (*)(QueryExpression*))(Il2CppBase() + 0x39646A0))(this);
	}
	template <typename T = bool> T IsMatch(uintptr_t t) {
		return ((T (*)(QueryExpression*, uintptr_t))(Il2CppBase() + 0x0))(this, t);
	}

};

}
