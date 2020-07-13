#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class ConstantExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "ConstantExpression"));
	}

	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(ConstantExpression*))(Il2CppBase() + 0x4EC341C))(this);
	}

};

}
