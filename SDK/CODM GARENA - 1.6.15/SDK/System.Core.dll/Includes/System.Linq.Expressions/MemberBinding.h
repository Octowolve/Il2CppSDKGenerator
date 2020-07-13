#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class MemberBinding
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "MemberBinding"));
	}

	template <typename T = uintptr_t> T& binding_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& member() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_BindingType() {
		return ((T (*)(MemberBinding*))(Il2CppBase() + 0x4EC701C))(this);
	}
	template <typename T = uintptr_t> T get_Member() {
		return ((T (*)(MemberBinding*))(Il2CppBase() + 0x4EC4DC8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MemberBinding*))(Il2CppBase() + 0x4EC775C))(this);
	}

};

}
