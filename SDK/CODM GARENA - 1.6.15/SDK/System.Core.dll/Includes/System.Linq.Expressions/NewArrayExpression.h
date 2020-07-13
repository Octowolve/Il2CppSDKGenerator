#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class NewArrayExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "NewArrayExpression"));
	}

	template <typename T = void*> T& expressions() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> T get_Expressions() {
		return ((T (*)(NewArrayExpression*))(Il2CppBase() + 0x4EC5AC8))(this);
	}

};

}
