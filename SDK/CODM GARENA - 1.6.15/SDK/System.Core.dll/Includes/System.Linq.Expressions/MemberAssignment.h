#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class MemberAssignment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "MemberAssignment"));
	}

	template <typename T = uintptr_t> T& expression() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Expression() {
		return ((T (*)(MemberAssignment*))(Il2CppBase() + 0x4EC4DD0))(this);
	}

};

}
