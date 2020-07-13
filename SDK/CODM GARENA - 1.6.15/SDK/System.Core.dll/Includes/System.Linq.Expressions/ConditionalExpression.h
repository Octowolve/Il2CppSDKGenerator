#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class ConditionalExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "ConditionalExpression"));
	}

	template <typename T = uintptr_t> T& test() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& if_true() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& if_false() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Test() {
		return ((T (*)(ConditionalExpression*))(Il2CppBase() + 0x4EC3404))(this);
	}
	template <typename T = uintptr_t> T get_IfTrue() {
		return ((T (*)(ConditionalExpression*))(Il2CppBase() + 0x4EC340C))(this);
	}
	template <typename T = uintptr_t> T get_IfFalse() {
		return ((T (*)(ConditionalExpression*))(Il2CppBase() + 0x4EC3414))(this);
	}

};

}
