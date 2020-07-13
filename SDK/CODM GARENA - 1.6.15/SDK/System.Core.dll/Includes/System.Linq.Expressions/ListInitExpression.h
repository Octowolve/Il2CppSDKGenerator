#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class ListInitExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "ListInitExpression"));
	}

	template <typename T = uintptr_t> T& new_expression() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& initializers() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_NewExpression() {
		return ((T (*)(ListInitExpression*))(Il2CppBase() + 0x4EC5924))(this);
	}
	template <typename T = void*> T get_Initializers() {
		return ((T (*)(ListInitExpression*))(Il2CppBase() + 0x4EC592C))(this);
	}

};

}
