#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class LambdaExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "LambdaExpression"));
	}

	template <typename T = uintptr_t> T& body() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& parameters() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_Body() {
		return ((T (*)(LambdaExpression*))(Il2CppBase() + 0x4EC52C8))(this);
	}
	template <typename T = void*> T get_Parameters() {
		return ((T (*)(LambdaExpression*))(Il2CppBase() + 0x4EC52C0))(this);
	}

};

}
