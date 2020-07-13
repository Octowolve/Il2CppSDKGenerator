#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class MemberListBinding
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "MemberListBinding"));
	}

	template <typename T = void*> T& initializers() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> T get_Initializers() {
		return ((T (*)(MemberListBinding*))(Il2CppBase() + 0x4EC50C0))(this);
	}

};

}
