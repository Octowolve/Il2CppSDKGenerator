#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq.JsonPath {

class CompositeExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq.JsonPath", "CompositeExpression"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& Expressions() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_Expressions() {
		return ((T (*)(CompositeExpression*))(Il2CppBase() + 0x3964D7C))(this);
	}
	template <typename T = void> T set_Expressions(Il2CppList<uintptr_t>* value) {
		return ((T (*)(CompositeExpression*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3964D84))(this, value);
	}
	template <typename T = bool> T IsMatch(uintptr_t t) {
		return ((T (*)(CompositeExpression*, uintptr_t))(Il2CppBase() + 0x3964E38))(this, t);
	}

};

}
