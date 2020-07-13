#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class MethodCallExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "MethodCallExpression"));
	}

	template <typename T = uintptr_t> T& obj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& method() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& arguments() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Object() {
		return ((T (*)(MethodCallExpression*))(Il2CppBase() + 0x4EC4C60))(this);
	}
	template <typename T = uintptr_t> T get_Method() {
		return ((T (*)(MethodCallExpression*))(Il2CppBase() + 0x4EC4C68))(this);
	}
	template <typename T = void*> T get_Arguments() {
		return ((T (*)(MethodCallExpression*))(Il2CppBase() + 0x4EC4C70))(this);
	}

};

}
