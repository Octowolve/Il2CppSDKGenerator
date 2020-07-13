#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class UnaryExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "UnaryExpression"));
	}

	template <typename T = uintptr_t> T& operand() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Operand() {
		return ((T (*)(UnaryExpression*))(Il2CppBase() + 0x4EC3C34))(this);
	}

};

}
