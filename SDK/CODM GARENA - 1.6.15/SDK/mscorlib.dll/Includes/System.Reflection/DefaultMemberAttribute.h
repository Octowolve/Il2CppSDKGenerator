#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class DefaultMemberAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "DefaultMemberAttribute"));
	}

	template <typename T = Il2CppString*> T& member_name() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T get_MemberName() {
		return ((T (*)(DefaultMemberAttribute*))(Il2CppBase() + 0x4554140))(this);
	}

};

}
