#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class MemberExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "MemberExpression"));
	}

	template <typename T = uintptr_t> T& expression() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& member() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_Expression() {
		return ((T (*)(MemberExpression*))(Il2CppBase() + 0x4EC4B18))(this);
	}
	template <typename T = uintptr_t> T get_Member() {
		return ((T (*)(MemberExpression*))(Il2CppBase() + 0x4EC4B20))(this);
	}

};

}
