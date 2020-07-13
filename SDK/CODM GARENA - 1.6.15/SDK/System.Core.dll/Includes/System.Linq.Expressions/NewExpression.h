#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class NewExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "NewExpression"));
	}

	template <typename T = void*> T& arguments() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& members() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void*> T get_Arguments() {
		return ((T (*)(NewExpression*))(Il2CppBase() + 0x4EC5644))(this);
	}
	template <typename T = void*> T get_Members() {
		return ((T (*)(NewExpression*))(Il2CppBase() + 0x4EC563C))(this);
	}

};

}
