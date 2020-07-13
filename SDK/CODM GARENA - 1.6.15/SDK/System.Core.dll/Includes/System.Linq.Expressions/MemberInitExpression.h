#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class MemberInitExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "MemberInitExpression"));
	}

	template <typename T = uintptr_t> T& new_expression() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& bindings() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_NewExpression() {
		return ((T (*)(MemberInitExpression*))(Il2CppBase() + 0x4EC57B0))(this);
	}
	template <typename T = void*> T get_Bindings() {
		return ((T (*)(MemberInitExpression*))(Il2CppBase() + 0x4EC57B8))(this);
	}

};

}
