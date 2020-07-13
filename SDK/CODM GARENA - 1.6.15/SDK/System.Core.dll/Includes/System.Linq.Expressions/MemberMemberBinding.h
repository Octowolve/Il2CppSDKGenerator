#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class MemberMemberBinding
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "MemberMemberBinding"));
	}

	template <typename T = void*> T& bindings() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> T get_Bindings() {
		return ((T (*)(MemberMemberBinding*))(Il2CppBase() + 0x4EC4F48))(this);
	}

};

}
