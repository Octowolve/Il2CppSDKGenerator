#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class InvocationExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "InvocationExpression"));
	}

	template <typename T = uintptr_t> T& expression() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& arguments() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_Expression() {
		return ((T (*)(InvocationExpression*))(Il2CppBase() + 0x4EC5C18))(this);
	}
	template <typename T = void*> T get_Arguments() {
		return ((T (*)(InvocationExpression*))(Il2CppBase() + 0x4EC5C20))(this);
	}

};

}
