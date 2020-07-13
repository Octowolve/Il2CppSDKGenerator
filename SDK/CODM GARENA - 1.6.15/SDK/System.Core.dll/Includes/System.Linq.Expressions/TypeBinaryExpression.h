#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class TypeBinaryExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "TypeBinaryExpression"));
	}

	template <typename T = uintptr_t> T& expression() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& type_operand() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_Expression() {
		return ((T (*)(TypeBinaryExpression*))(Il2CppBase() + 0x4EC451C))(this);
	}
	template <typename T = uintptr_t> T get_TypeOperand() {
		return ((T (*)(TypeBinaryExpression*))(Il2CppBase() + 0x4EC4524))(this);
	}

};

}
